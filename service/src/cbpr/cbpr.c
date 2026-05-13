/**
 * Copyright (c) 2024 NuWave Technologies, Inc. All rights reserved.
 */

#pragma nolist

#include <cextdecs>
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdarg.h>
#include <time.h>
#include <tal.h>
#include <zsysc>

// Helper macros for syntax check under smart editors.
#if defined(_GUARDIAN_TARGET)
#define OMIT  /**/
#define OMITP /**/
#else
int omitParameterValue;
void* omitParameterPointer;
#define OMIT omitParameterValue
#define OMITP omitParameterPointer
#endif

#pragma list

#include "cbprc.h"
#include "cbprs.h"

typedef enum {
  AMOUNT_OK = 0,
  AMOUNT_ERR_NULL_DST,
  AMOUNT_ERR_BUFFER_TOO_SMALL,
  AMOUNT_ERR_EMPTY,        /* NULL, empty, or whitespace only */
  AMOUNT_ERR_INVALID_CHAR, /* non-digit, non-dot character */
  AMOUNT_ERR_MULTIPLE_DOTS,
  AMOUNT_ERR_NO_DIGITS,        /* e.g. input was just "." */
  AMOUNT_ERR_TOO_MANY_DECIMALS /* more than 2 fractional digits */
} amount_status_t;

#define MAX_LINES 4
#define MAX_WIDTH 35
#define NARRATIVE_SIZE (MAX_LINES * (MAX_WIDTH + 2) + 1)

// Static variables.
static char pathmon_name[32];
static char* cbpr_serverclass = "CBPR-SERVICE";

// Static function prototypes.
static int build_field20_ref(const char* txn_id, char* dst, size_t dst_size);
static int build_value_date(short offset_days, char* dst, size_t dst_size);
static amount_status_t format_amount(const char* src, char* dst,
                                     size_t dst_size);
static int format_bic(const char* src, char* dst, size_t dst_size);
static void reply_with_error(rp_code_def rp_code, error_code_def error_code,
                             const char* error_format, ...);
static void generate_mt(void* request);
static void translate_mt_to_mx(void* request);
static int wrap_crlf(const char* src, char* dst, size_t dst_size, size_t width,
                     size_t max_lines);

#ifndef strnlen
static size_t util_strnlen(const char* src, size_t len);
#else
#define util_strnlen strnlen
#endif

// Static functions.

/// @brief Builds a SWIFT MT :20: sender reference: "REF" prefix followed by up
/// to 13 characters from the transaction ID, with '-' removed and letters
/// uppercased. Total output is up to 16 characters (the field 20 maximum).
/// @param txn_id transaction ID, e.g. a UUID; NULL is treated as empty
/// @param dst output buffer
/// @param dst_size size of dst in bytes (need at least 17 for 16 chars + null)
/// @return 0 on success, -1 if dst is NULL or dst_size < 17.
///
/// If the transaction ID has fewer than 13 non-dash characters, the output
/// is shorter than 16 chars; no padding is applied.
static int build_field20_ref(const char* txn_id, char* dst, size_t dst_size) {
  size_t out = 3;
  size_t i;

  if (!dst || dst_size < 17)
    return -1;

  dst[0] = 'R';
  dst[1] = 'E';
  dst[2] = 'F';

  if (txn_id) {
    for (i = 0; txn_id[i] != '\0' && out < 16; i++) {
      if (txn_id[i] == '-')
        continue;
      dst[out++] = (char)toupper((unsigned char)txn_id[i]);
    }
  }

  dst[out] = '\0';

  return 0;
}

#include <stddef.h>
#include <time.h>

/// @brief Writes today's date (local time) plus offset_days as a SWIFT YYMMDD
/// value date into dst.
/// @param offset_days days to add to today; negative for back-dating
/// @param dst output buffer; null-terminated on success
/// @param dst_size size of dst in bytes (need at least 7)
/// @return 0 on success, -1 on NULL/small buffer or any time-API failure.
///
/// Counts calendar days only — weekends and bank holidays are NOT skipped.
/// If the convention is UTC value dates, swap localtime for gmtime.
static int build_value_date(short offset_days, char* dst, size_t dst_size) {
  time_t now;
  struct tm* ptm;
  struct tm tm;

  if (!dst || dst_size < 7)
    return -1;

  now = time(NULL);
  if (now == (time_t)-1)
    return -1;

  ptm = localtime(&now);
  if (!ptm)
    return -1;
  tm = *ptm; /* copy out of the static buffer */

  tm.tm_mday += offset_days;
  if (mktime(&tm) == (time_t)-1)
    return -1;

  if (strftime(dst, dst_size, "%y%m%d", &tm) != 6)
    return -1;

  return 0;
}

/// @brief Formats a numeric amount as a SWIFT-style amount: comma as the
/// decimal separator, always exactly 2 fractional digits.
///
/// Rejected (returns an error code):
/// NULL / empty / whitespace-only input
/// any character besides digits, one '.', surrounding whitespace
/// more than one decimal point
/// more than 2 fractional digits
/// no digits at all (e.g. just ".")
///
/// Normalized silently on success:
/// leading/trailing whitespace stripped
/// ".50"     -> "0,50"
/// "1234."   -> "1234,00"
/// "1234"    -> "1234,00"
/// "1234.5"  -> "1234,50"
///
/// @param src The source string to format. Must be null-terminated.
/// Leading/trailing whitespace is ignored.
/// @param dst The destination buffer for the formatted amount. Must be at least
/// 18 bytes to accommodate the largest possible output (15 digits + comma + 2
/// decimals + null terminator). On success, dst is null-terminated and contains
/// the formatted amount.
/// @param dst_size The size of the destination buffer in bytes.
/// @return The status of the operation.
static amount_status_t format_amount(const char* src, char* dst,
                                     size_t dst_size) {
  const char* end;
  const char* dot;
  const char* p;
  size_t int_len;
  size_t frac_len;
  size_t pad_zeros;
  size_t out_len;
  int need_leading_zero;
  int has_digit;
  char* out;

  if (!dst || dst_size == 0)
    return AMOUNT_ERR_NULL_DST;
  if (!src)
    return AMOUNT_ERR_EMPTY;

  /* trim whitespace */
  while (*src && isspace((unsigned char)*src))
    src++;
  end = src + strlen(src);
  while (end > src && isspace((unsigned char)*(end - 1)))
    end--;
  if (end == src)
    return AMOUNT_ERR_EMPTY;

  /* scan + validate */
  dot = NULL;
  has_digit = 0;
  for (p = src; p < end; p++) {
    if (*p == '.') {
      if (dot)
        return AMOUNT_ERR_MULTIPLE_DOTS;
      dot = p;
    } else if (*p >= '0' && *p <= '9') {
      has_digit = 1;
    } else {
      return AMOUNT_ERR_INVALID_CHAR;
    }
  }
  if (!has_digit)
    return AMOUNT_ERR_NO_DIGITS;

  /* split */
  int_len = dot ? (size_t)(dot - src) : (size_t)(end - src);
  frac_len = dot ? (size_t)(end - dot - 1) : 0;
  if (frac_len > 2)
    return AMOUNT_ERR_TOO_MANY_DECIMALS;

  need_leading_zero = (int_len == 0);
  pad_zeros = 2 - frac_len;
  out_len = (need_leading_zero ? 1 : int_len) + 1 + frac_len + pad_zeros;
  if (dst_size < out_len + 1)
    return AMOUNT_ERR_BUFFER_TOO_SMALL;

  /* build */
  out = dst;
  if (need_leading_zero) {
    *out++ = '0';
  } else {
    memcpy(out, src, int_len);
    out += int_len;
  }
  *out++ = ',';
  if (frac_len) {
    memcpy(out, dot + 1, frac_len);
    out += frac_len;
  }
  while (pad_zeros--)
    *out++ = '0';
  *out = '\0';

  return AMOUNT_OK;
}

/// @brief Formats a BIC to exactly 8 characters: truncates if longer,
/// space-pads if shorter. Output is 8 chars plus a null terminator.
/// @param src The source string to format. Must be null-terminated. If NULL,
/// treated as empty string and results in 8 spaces.
/// @param dst The destination buffer for the formatted BIC. Must be at least 9
/// bytes. On success, dst is null-terminated and contains the formatted BIC.
/// @param dst_size The size of the destination buffer in bytes.
/// @return 0 on success, -1 if dst is NULL or dst_size < 9.
static int format_bic(const char* src, char* dst, size_t dst_size) {
  size_t i;

  if (!dst || dst_size < 9)
    return -1;
  if (!src)
    src = "";

  i = 0;
  while (i < 8 && src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  while (i < 8) {
    dst[i++] = ' ';
  }
  dst[8] = '\0';
  return 0;
}

/// @brief Generates an MT103 message based on the incoming request data.
/// @param request The incoming request from the client.
static void generate_mt(void* request) {
  mt_generate_rq_def* rq = (mt_generate_rq_def*)request;
  mt_generate_rp_def rp;
  amount_status_t amt_stat;

  // Local variables to hold the various components of the MT103 message as we
  // build them. These include the formatted BICs, priority character,
  // references, value date, formatted amount, wrapped account names, remittance
  // info, and charges code. These are all derived from the request data and
  // defaults, and are used to construct the final MT103 message according to
  // the SWIFT specifications. The sizes of these buffers are chosen to
  // accommodate the expected lengths of the respective fields
  char transaction_id[37]; // 36 chars for UUID + null terminator
  char sender_bic[13];     // 12 chars + null terminator
  char receiver_bic[13];
  char priority; // Defaults to normal priority (`N`); can be set to `U` for
                 // urgent based on defaults.
  char sender_ref[17];        // 16 chars + null terminator
  char receiver_ref[17] = ""; // 16 chars + null terminator
  char service_lvl[11] = "";  // {111: + 4 chars + } + null terminator
  char value_date[7];         // YYMMDD
  char amount_formatted[24];  // Enough for 20 digits + comma + null terminator
  char debtor_acct_name[NARRATIVE_SIZE] = "";
  char creditor_acct_name[NARRATIVE_SIZE] = "";
  char remittance_info_tmp[NARRATIVE_SIZE];
  char remittance_info[NARRATIVE_SIZE] = "";
  char charges_code[4]; // `OUR`, `BEN`, or `SHA`

  // Format strings for the various fields and the overall MT103 message. These
  // are used with snprintf to build the final message. The field format strings
  // include the necessary prefixes and CRLFs as per SWIFT specifications. The
  // mt103_fmt string assembles the full message with placeholders for the
  // components, ensuring correct block and field structure. Note that
  // wrap_crlf is used to handle line wrapping for fields that can span
  // multiple lines, such as :50K. Also, fields that are optional (like :21: and
  // :70:) are conditionally included based on whether their content is empty or
  // not, allowing for dynamic message construction.
  const char* fld21_fmt =
      ":21:%s\r\n"; // Helper for formatting :21: field content.
  const char* remittance_info_fmt =
      ":70:%s"; // Helper for formatting :70: field content.
                // wrap_crlf adds the CRLF at the end of the line.
  const char* fld111_fmt =
      "{111:%-4s}";       // Helper for formatting :111: field content.
  const char* mt103_fmt = // Overall MT103 message format with placeholders for
                          // the various components.
      "{1:F01%sX0000000000}" // Block 1 (basic header): sender's logical
                             // terminal — "F01" + 12-char BIC + session +
                             // sequence. "F" = FIN, "01" = priority.
      "{2:I103%s%c}"   // Block 2 (application header): "I" (input) + "103"
                       // (message type) + 12-char receiver BIC + priority ("N"
                       // for normal, "U" for urgent).
      "{3:%s{121:%s}}" // Block 3 (user header, optional): tagged subfields.
                       // (optional) {111} Service Level Code, omit if empty',
                       // and {121:} carries the UETR (Unique End-to-End
                       // Transaction Reference) — important for CBPR+
                       // translation.
      "{4:\r\n"    // Block 4 (text): message content with colon-prefixed field
                   // tags. Terminated by hyphen on its own line.
      ":20:%s\r\n" //  :20:  Sender reference. Max 16 chars. If empty, generate
                   //  (e.g. "REF" + first 13 chars of transactionId,
                   //  uppercased, dashes stripped).
      "%s" //  :21:  Receiver reference. Max 16 chars. Omit the field entirely
           //  if empty.
      ":23B:CRED\r\n" //  :23B: Bank Operation Code, "CRED" for credit transfer.
      ":32A:%s%s%s\r\n" //  :32A: Format: "YYMMDD" + 3-char currency + amount
                        //  with comma as decimal separator, no thousands
                        //  separators. Value date = today +
                        //  defaults.valueDateOffsetDays. Example:
                        //  260504USD1000,00.
      ":50K:/%s\r\n%s" //  :50K: Multiple lines: "/<account>" on first line then
                       //  "<name>", max 4 lines × 35 chars each.  wrap_crlf
                       //  adds the CRLF at the end of each line.
      ":59:/%s\r\n%s"  //  :59:  Same shape as :50K:.
      "%s" //  :70:  Max 4 lines × 35 chars; wrap as needed, lines terminated
           //  with CRLF. Omit the field entirely if empty.
      ":71A:%s\r\n" // :71A: Details of Charges.
      "-}{5:}"; // Block 5 (trailer): typically empty on send; populated by the
                // SWIFT network.

  // Validate the request code before processing.
  if (rq->rq_code != RQ_CODE_MT_GENERATE) {
    reply_with_error(RP_CODE_BAD_REQUEST, ERROR_CODE_INV_FIELD,
                     "Invalid request code %d for MT generation request.",
                     (int)rq->rq_code);
    return;
  }

  // Build the individual components needed for the MT103 message based on the
  // request data.
  strncpy(transaction_id, rq->transaction_id, sizeof(transaction_id));
  transaction_id[sizeof(transaction_id) - 1] = '\0';

  // Note about 12-char BIC padding: standard 8-char BIC + `X` (logical terminal
  // code) + `XXX` (branch). E.g. `BANKUS33` becomes `BANKUS33XXXX`.
  format_bic(rq->form_data.debtor.db_bic, sender_bic, sizeof(sender_bic));
  strncat(sender_bic, "XXXX", sizeof(sender_bic) - strlen(sender_bic) - 1);
  format_bic(rq->form_data.creditor.cr_bic, receiver_bic, sizeof(receiver_bic));
  strncat(receiver_bic, "XXXX", sizeof(receiver_bic) - 9);

  // Determine the message priority based on defaults. "HIGH" maps to urgent
  // (`U`), anything else (including empty) maps to normal (`N`).
  if (strcmp(rq->defaults.instruction_priority, "HIGH") == 0) {
    priority = 'U';
  } else {
    priority = 'N';
  }

  // Format Block 3:field :111: Service Level Code, if provided in defaults.
  // Otherwise, leave empty to omit the field.
  if (rq->defaults.service_level_code[0] != '\0') {
    snprintf(service_lvl, sizeof(service_lvl), fld111_fmt,
             rq->defaults.service_level_code);
  }

  // Format field :20: sender reference. Use defaults.sender_reference if
  // provided; otherwise, generate one based on the transaction ID.
  if (rq->defaults.sender_reference[0] != '\0') {
    strncpy(sender_ref, rq->defaults.sender_reference, sizeof(sender_ref));
    sender_ref[sizeof(sender_ref) - 1] = '\0';
  } else {
    build_field20_ref(transaction_id, sender_ref, sizeof(sender_ref));
  }

  // Only format :21: if receiver reference is provided. Otherwise, receiver_ref
  // stays an empty string.
  if (rq->defaults.receiver_reference[0] != '\0') {
    snprintf(receiver_ref, sizeof(receiver_ref), fld21_fmt,
             rq->defaults.receiver_reference);
  }

  // Format the value date for :32A: based on today's date plus the offset from
  // defaults. If the offset is negative, this will produce a back-dated value
  // date.
  build_value_date(rq->defaults.value_date_offset_days, value_date,
                   sizeof(value_date));

  // Format the amount for :32A: to have a comma as the decimal separator and no
  // thousands separators, as per SWIFT specifications. The format_amount
  // function is assumed to handle this formatting correctly based on the input
  // amount string.
  amt_stat = format_amount(rq->form_data.amount, amount_formatted,
                           sizeof(amount_formatted));
  if (amt_stat != AMOUNT_OK) {
    reply_with_error(RP_CODE_BAD_REQUEST, ERROR_CODE_INV_FIELD,
                     "Invalid amount: %s, status: %d", rq->form_data.amount,
                     amt_stat);
    return;
  }

  // Format the :50K: and :59: fields with proper line wrapping. The
  // wrap_crlf function is used to wrap the debtor and creditor names into
  // multiple lines if they exceed the maximum width, ensuring that the final
  // output adheres to the SWIFT formatting rules for these fields.
  wrap_crlf(rq->form_data.debtor.db_name, debtor_acct_name,
            sizeof(debtor_acct_name), MAX_WIDTH, MAX_LINES);
  wrap_crlf(rq->form_data.creditor.cr_name, creditor_acct_name,
            sizeof(creditor_acct_name), MAX_WIDTH, MAX_LINES);

  // Only format :70: if remittance info is provided. Otherwise,
  // remittance_info_tmp stays an empty string.
  if (rq->form_data.remittance_info[0] != '\0') {
    snprintf(remittance_info_tmp, sizeof(remittance_info_tmp),
             remittance_info_fmt, rq->form_data.remittance_info);
    wrap_crlf(remittance_info_tmp, remittance_info, sizeof(remittance_info),
              MAX_WIDTH, MAX_LINES);
  }

  // Determine the charges code for :71A: based on defaults. "DEBT" means the
  // debtor pays all charges (`OUR`), "CRED" means the creditor pays all charges
  // (`BEN`), and anything else (including empty) means shared charges (`SHA`).
  if (strncmp(rq->defaults.charges_code, "DEBT", 4) == 0) {
    strncpy(charges_code, "OUR", sizeof(charges_code));
  } else if (strncmp(rq->defaults.charges_code, "CRED", 4) == 0) {
    strncpy(charges_code, "BEN", sizeof(charges_code));
  } else {
    strncpy(charges_code, "SHA", sizeof(charges_code));
  }

  // Finally, build the MT103 message using the formatted components.
  memset(&rp, 0, sizeof(rp));

  rp.rp_code = RP_CODE_SUCCESS;

  strncpy(rp.message_type, "MT103", sizeof(rp.message_type));
  strncpy(rp.transaction_id, transaction_id, sizeof(rp.transaction_id));

  snprintf(rp.mt_message, sizeof(rp.mt_message), mt103_fmt, sender_bic,
           receiver_bic, (int)priority, service_lvl, transaction_id, sender_ref,
           receiver_ref, value_date, rq->form_data.currency, amount_formatted,
           rq->form_data.debtor.db_account, debtor_acct_name,
           rq->form_data.creditor.cr_account, creditor_acct_name,
           remittance_info, charges_code);

  REPLYXL((const char*)&rp, (short)sizeof(rp));

  return;
}

static void parse_mx(void* request) {
  int cliRq_size;
  int svrRp_size;
  int rc;

  // Request from and responses to LightWave Server.
  mx_parse_rq_def* svrRq = (mx_parse_rq_def*)request;
  union u_svrRp {
    error_rp_def errorRp;
    mx_parse_rp_def successRp;
  } svrRp;

  // Request to and responses from LightWave Client.
  parse_mx_rq_def cliRq;
  union u_cliRp {
    parse_mx_200_rp_def cli200Rp;
    parse_mx_400_rp_def cli400Rp;
    lightwave_error_rp_def cliErrorRp;
  } cliRp;

  // Validate the request code before processing.
  if (svrRq->rq_code != RQ_CODE_MX_PARSE) {
    reply_with_error(RP_CODE_BAD_REQUEST, ERROR_CODE_INV_FIELD,
                     "Invalid request code %d for MX parsing request.",
                     (int)svrRq->rq_code);
    return;
  }

  // Build the request for the MT-to-MX translation service. This involves
  // copying the MT message from the incoming request into the format expected
  // by the translation service.
  memset(&cliRq, 0, sizeof(cliRq));
  memset(&cliRp, 0, sizeof(cliRp));

  cliRq.lightwave_rq_header.rq_code = rq_parse_mx;

  strncpy(cliRq.mx_request.mx, svrRq->mx_message, sizeof(cliRq.mx_request.mx));
  cliRq.mx_request.mx[sizeof(cliRq.mx_request.mx) - 1] = '\0';
  cliRq_size =
      (int)util_strnlen(cliRq.mx_request.mx, sizeof(cliRq.mx_request.mx)) +
      offsetof(validate_mx_rq_def, mx_request);

  rc = SERVERCLASS_SENDL_((char*)pathmon_name, (short)strlen(pathmon_name),
                          (char*)cbpr_serverclass,
                          (short)strlen(cbpr_serverclass), (char*)&cliRq,
                          (char*)&cliRp, cliRq_size, sizeof(cliRp));
  if (rc != 0) {
    short pe;
    short fe;
    SERVERCLASS_SEND_INFO_(&pe, &fe);
    reply_with_error(RP_CODE_INTERNAL_ERROR, ERROR_CODE_SEND_FAILURE,
                     "VALIDATE SERVICE SERVERCLASS_SEND failed: %hd:%hd\n", pe,
                     fe);
    return;
  }

  // Process the response from the translation service and build the response
  // for the client.
  memset(&svrRp, 0, sizeof(svrRp));
  svrRp_size = 0;

  switch (cliRp.cli200Rp.lightwave_rp_header.rp_code) {
  case lw_rp_success:
  case lw_rp_info:
    switch (cliRp.cli200Rp.lightwave_rp_header.http_status) {
    case 200:
      svrRp.successRp.rp_code =
          cliRp.cli200Rp.lightwave_rp_header.rp_code == lw_rp_info
              ? RP_CODE_WARNING
              : RP_CODE_SUCCESS;

      strncpy(svrRp.successRp.transaction_id, svrRq->transaction_id,
              sizeof(svrRp.successRp.transaction_id));
      strncpy(svrRp.successRp.message_type, "pacs.008.001.08",
              sizeof(svrRp.successRp.message_type));
      {
        // Copy the parsed fields from the parse service response into the
        // success response struct for LWS.
        size_t i;
        size_t field_count = (size_t)cliRp.cli200Rp.mx_parse_response.fields
                                 .additional_properties_count;
        if (field_count > MAX_FIELDS) {
          // Cap to prevent overflow in svrRp.successRp.fields.
          field_count = MAX_FIELDS;
        }

        for (i = 0; i < field_count; i++) {
          // Break on empty field name, treating it as end of fields.
          if (cliRp.cli200Rp.mx_parse_response.fields.additional_properties[i]
                  .map_key[0] == '\0') {
            break;
          }

          strncpy(
              svrRp.successRp.fields[i].field_name,
              cliRp.cli200Rp.mx_parse_response.fields.additional_properties[i]
                  .map_key,
              sizeof(svrRp.successRp.fields[i].field_name));
          svrRp.successRp.fields[i]
              .field_name[sizeof(svrRp.successRp.fields[i].field_name) - 1] =
              '\0';

          strncpy(
              svrRp.successRp.fields[i].field_value,
              cliRp.cli200Rp.mx_parse_response.fields.additional_properties[i]
                  .map_value,
              sizeof(svrRp.successRp.fields[i].field_value));
          svrRp.successRp.fields[i]
              .field_value[sizeof(svrRp.successRp.fields[i].field_value) - 1] =
              '\0';
        }

        // Set the fields_count to the actual number of fields copied.
        svrRp.successRp.total_fields =
            cliRp.cli200Rp.mx_parse_response.fields.additional_properties_count;

        svrRp_size = (int)(offsetof(mx_parse_rp_def, fields) +
                           (i * sizeof(svrRp.successRp.fields[0])));
      }
      break;
    case 400:
      svrRp.errorRp.rp_code = RP_CODE_BAD_REQUEST;
      svrRp_size = snprintf(svrRp.errorRp.error_message,
                            sizeof(svrRp.errorRp.error_message),
                            "Validation service rejected the MX message: %s",
                            cliRp.cli400Rp.error_response.error_rw);
      svrRp_size += offsetof(error_rp_def, error_message);
      break;
    default:
      svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
      svrRp_size = snprintf(
          svrRp.errorRp.error_message, sizeof(svrRp.errorRp.error_message),
          "Validation service returned unexpected HTTP status: %d",
          cliRp.cli200Rp.lightwave_rp_header.http_status);
      svrRp_size += offsetof(error_rp_def, error_message);
      break;
    }
    break;
  case lw_rp_error:
    svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
    svrRp_size = snprintf(
        svrRp.errorRp.error_message, sizeof(svrRp.errorRp.error_message),
        "Validation service failed: rc=%d, http=%d, sc=%d, ec=%d, sc=%d: %s",
        cliRp.cliErrorRp.lightwave_rp_header.rp_code,
        cliRp.cliErrorRp.lightwave_rp_header.http_status,
        cliRp.cliErrorRp.error_source, cliRp.cliErrorRp.error_code,
        cliRp.cliErrorRp.error_subcode, cliRp.cliErrorRp.error_message);
    svrRp_size += offsetof(error_rp_def, error_message);
    break;
  default:
    svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
    svrRp_size = snprintf(svrRp.errorRp.error_message,
                          sizeof(svrRp.errorRp.error_message),
                          "Validation service returned unexpected rp_code: %d",
                          cliRp.cliErrorRp.lightwave_rp_header.rp_code);
    svrRp_size += offsetof(error_rp_def, error_message);
    break;
  }

  REPLYXL((const char*)&svrRp, svrRp_size);

  return;
}

/// @brief Reply with a structured error message. The rp_code and error_code
/// parameters can be used to indicate the type of error, and the error_format
/// string with its variadic arguments allows for a detailed error message to be
/// constructed. The error message is formatted into the error_message field of
/// the error response struct, which is then sent back to the client using
/// REPLYXL
/// @param rp_code The reply code to indicate the type of error (e.g.,
/// RP_CODE_BAD_REQUEST, RP_CODE_INTERNAL_ERROR).
/// @param error_code The specific error code to provide more detail about the
/// error (e.g., ERROR_CODE_INV_FIELD, ERROR_CODE_SEND_FAILURE).
/// @param error_format The format string for the error message, similar to
/// printf-style formatting.
/// @param ... Variadic arguments for the error message.
static void reply_with_error(rp_code_def rp_code, error_code_def error_code,
                             const char* error_format, ...) {
  error_rp_def rp;
  va_list list;
  int msg_size;

  va_start(list, error_format);

  memset(&rp, 0, sizeof(rp));
  // TODO: if we had more fields in the response struct, we could set them here
  // based on the rp_code and error_code parameters, to allow for more
  // structured error handling on the client side. For now, we just format the
  // error message string with the provided format and arguments.
  //
  // rp.error_detail.error_code = error_code;
  rp.rp_code = rp_code;
  msg_size =
      vsnprintf(rp.error_message, sizeof(rp.error_message), error_format, list);
  va_end(list);

  msg_size = (msg_size < 0) ? sizeof(rp.error_message) - 1 : (size_t)msg_size;
  rp.error_message[msg_size] = '\0'; // Ensure null-termination.

  REPLYXL((const char*)&rp,
          (short)(msg_size + offsetof(error_rp_def, error_message)));

  return;
}

/// @brief Translates an incoming MT message to MX format by sending a request
/// to the translation service and processing the response.
/// @param request The incoming request from the client.
static void translate_mt_to_mx(void* request) {
  int cliRq_size;
  int svrRp_size;
  int rc;

  // Request from and responses to LightWave Server.
  mt_translate_rq_def* svrRq = (mt_translate_rq_def*)request;
  union u_svrRp {
    error_rp_def errorRp;
    mt_translate_rp_def successRp;
  } svrRp;

  // Request to and responses from LightWave Client.
  convert_mt_to_mx_rq_def cliRq;
  union u_cliRp {
    convert_mt_to_mx_200_rp_def cli200Rp;
    convert_mt_to_mx_400_rp_def cli400Rp;
    lightwave_error_rp_def cliErrorRp;
  } cliRp;

  // Validate the request code before processing.
  if (svrRq->rq_code != RQ_CODE_MT_TRANSLATE) {
    reply_with_error(RP_CODE_BAD_REQUEST, ERROR_CODE_INV_FIELD,
                     "Invalid request code %d for MT translation request.",
                     (int)svrRq->rq_code);
    return;
  }

  // Build the request for the MT-to-MX translation service. This involves
  // copying the MT message from the incoming request into the format expected
  // by the translation service.
  memset(&cliRq, 0, sizeof(cliRq));
  memset(&cliRp, 0, sizeof(cliRp));

  cliRq.lightwave_rq_header.rq_code = rq_convert_mt_to_mx;

  strncpy(cliRq.mt_request.mt, svrRq->mt_message, sizeof(cliRq.mt_request.mt));
  cliRq.mt_request.mt[sizeof(cliRq.mt_request.mt) - 1] = '\0';
  cliRq_size =
      (int)util_strnlen(cliRq.mt_request.mt, sizeof(cliRq.mt_request.mt)) +
      offsetof(convert_mt_to_mx_rq_def, mt_request);

  rc = SERVERCLASS_SENDL_((char*)pathmon_name, (short)strlen(pathmon_name),
                          (char*)cbpr_serverclass,
                          (short)strlen(cbpr_serverclass), (char*)&cliRq,
                          (char*)&cliRp, cliRq_size, sizeof(cliRp));
  if (rc != 0) {
    short pe;
    short fe;
    SERVERCLASS_SEND_INFO_(&pe, &fe);
    reply_with_error(RP_CODE_INTERNAL_ERROR, ERROR_CODE_SEND_FAILURE,
                     "TRANSLATE SERVICE SERVERCLASS_SEND failed: %hd:%hd\n", pe,
                     fe);
    return;
  }

  // Process the response from the translation service and build the response
  // for the client.
  memset(&svrRp, 0, sizeof(svrRp));
  svrRp_size = 0;

  switch (cliRp.cli200Rp.lightwave_rp_header.rp_code) {
  case lw_rp_success:
  case lw_rp_info:
    switch (cliRp.cli200Rp.lightwave_rp_header.http_status) {
    case 200:
      svrRp.successRp.rp_code =
          cliRp.cli200Rp.lightwave_rp_header.rp_code == lw_rp_info
              ? RP_CODE_WARNING
              : RP_CODE_SUCCESS;

      strncpy(svrRp.successRp.transaction_id, svrRq->transaction_id,
              sizeof(svrRp.successRp.transaction_id));
      svrRp.successRp.valid = cliRp.cli200Rp.mx_response.valid;

      if (cliRp.cli200Rp.mx_response.valid) {
        strncpy(svrRp.successRp.mx_message, cliRp.cli200Rp.mx_response.mx,
                sizeof(svrRp.successRp.mx_message));
        strncpy(svrRp.successRp.message_type, "pacs.008.001.08",
                sizeof(svrRp.successRp.message_type));
        svrRp_size = offsetof(mt_translate_rp_def, warnings_count);
      } else {
        strncpy(svrRp.successRp.warnings[0],
                "Translation service returned 200 but response is invalid",
                sizeof(svrRp.successRp.warnings[0]));
        svrRp.successRp.warnings_count = 1;
        svrRp_size = offsetof(mt_translate_rp_def, warnings) +
                     sizeof(svrRp.successRp.warnings[0]);
      }
      break;
    case 400:
      svrRp.errorRp.rp_code = RP_CODE_BAD_REQUEST;
      svrRp_size = snprintf(svrRp.errorRp.error_message,
                            sizeof(svrRp.errorRp.error_message),
                            "Translation service rejected the MT message: %s",
                            cliRp.cli400Rp.error_response.error_rw);
      svrRp_size += offsetof(error_rp_def, error_message);
      break;
    default:
      svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
      svrRp_size = snprintf(
          svrRp.errorRp.error_message, sizeof(svrRp.errorRp.error_message),
          "Translation service returned unexpected HTTP status: %d",
          cliRp.cli200Rp.lightwave_rp_header.http_status);
      svrRp_size += offsetof(error_rp_def, error_message);
      break;
    }
    break;
  case lw_rp_error:
    svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
    svrRp_size = snprintf(
        svrRp.errorRp.error_message, sizeof(svrRp.errorRp.error_message),
        "Translation service failed: rc=%d, http=%d, sc=%d, ec=%d, sc=%d: %s",
        cliRp.cliErrorRp.lightwave_rp_header.rp_code,
        cliRp.cliErrorRp.lightwave_rp_header.http_status,
        cliRp.cliErrorRp.error_source, cliRp.cliErrorRp.error_code,
        cliRp.cliErrorRp.error_subcode, cliRp.cliErrorRp.error_message);
    svrRp_size += offsetof(error_rp_def, error_message);
    break;
  default:
    svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
    svrRp_size = snprintf(svrRp.errorRp.error_message,
                          sizeof(svrRp.errorRp.error_message),
                          "Translation service returned unexpected rp_code: %d",
                          cliRp.cliErrorRp.lightwave_rp_header.rp_code);
    svrRp_size += offsetof(error_rp_def, error_message);
    break;
  }

  REPLYXL((const char*)&svrRp, svrRp_size);

  return;
}

#ifndef strnlen
/// @brief Gets the length of a string up to a maximum length.
/// @param src The input string.
/// @param len The maximum length to consider.
/// @return The length of the string, or len if the string is longer.
static size_t util_strnlen(const char* src, size_t len) {
  const char* s;
  size_t n;

  for (n = 0, s = src; *s && n < len; s++, n++)
    ;

  return n;
}
#endif

/// @brief Validates an incoming MX message by sending it to the validation
/// service.
/// @param request The incoming request containing the MX message to validate.
static void validate_mx(void* request) {
  int cliRq_size;
  int svrRp_size;
  int rc;

  // Request from and responses to LightWave Server.
  mx_validate_rq_def* svrRq = (mx_validate_rq_def*)request;
  union u_svrRp {
    error_rp_def errorRp;
    mx_validate_rp_def successRp;
  } svrRp;

  // Request to and responses from LightWave Client.
  validate_mx_rq_def cliRq;
  union u_cliRp {
    validate_mx_200_rp_def cli200Rp;
    validate_mx_400_rp_def cli400Rp;
    lightwave_error_rp_def cliErrorRp;
  } cliRp;

  // Validate the request code before processing.
  if (svrRq->rq_code != RQ_CODE_MX_VALIDATE) {
    reply_with_error(RP_CODE_BAD_REQUEST, ERROR_CODE_INV_FIELD,
                     "Invalid request code %d for MX validation request.",
                     (int)svrRq->rq_code);
    return;
  }

  // Build the request for the MT-to-MX translation service. This involves
  // copying the MT message from the incoming request into the format expected
  // by the translation service.
  memset(&cliRq, 0, sizeof(cliRq));
  memset(&cliRp, 0, sizeof(cliRp));

  cliRq.lightwave_rq_header.rq_code = rq_validate_mx;

  strncpy(cliRq.mx_request.mx, svrRq->mx_message, sizeof(cliRq.mx_request.mx));
  cliRq.mx_request.mx[sizeof(cliRq.mx_request.mx) - 1] = '\0';
  cliRq_size =
      (int)util_strnlen(cliRq.mx_request.mx, sizeof(cliRq.mx_request.mx)) +
      offsetof(validate_mx_rq_def, mx_request);

  rc = SERVERCLASS_SENDL_((char*)pathmon_name, (short)strlen(pathmon_name),
                          (char*)cbpr_serverclass,
                          (short)strlen(cbpr_serverclass), (char*)&cliRq,
                          (char*)&cliRp, cliRq_size, sizeof(cliRp));
  if (rc != 0) {
    short pe;
    short fe;
    SERVERCLASS_SEND_INFO_(&pe, &fe);
    reply_with_error(RP_CODE_INTERNAL_ERROR, ERROR_CODE_SEND_FAILURE,
                     "VALIDATE SERVICE SERVERCLASS_SEND failed: %hd:%hd\n", pe,
                     fe);
    return;
  }

  // Process the response from the translation service and build the response
  // for the client.
  memset(&svrRp, 0, sizeof(svrRp));
  svrRp_size = 0;

  switch (cliRp.cli200Rp.lightwave_rp_header.rp_code) {
  case lw_rp_success:
  case lw_rp_info:
    switch (cliRp.cli200Rp.lightwave_rp_header.http_status) {
    case 200:
      svrRp.successRp.rp_code =
          cliRp.cli200Rp.lightwave_rp_header.rp_code == lw_rp_info
              ? RP_CODE_WARNING
              : RP_CODE_SUCCESS;

      strncpy(svrRp.successRp.transaction_id, svrRq->transaction_id,
              sizeof(svrRp.successRp.transaction_id));
      svrRp.successRp.valid = cliRp.cli200Rp.mx_validate_response.valid;

      if (cliRp.cli200Rp.mx_validate_response.valid) {
        strncpy(svrRp.successRp.schema_version, "pacs.008.001.08",
                sizeof(svrRp.successRp.schema_version));
        svrRp_size = offsetof(mx_validate_rp_def, errors_count);
      } else {
        int i;

        for (i = 0; i < cliRp.cli200Rp.mx_validate_response.errors_count &&
                    i < MAX_ERRORS;
             i++) {
          if (cliRp.cli200Rp.mx_validate_response.errors[i] == '\0') {
            break;
          }
          strncpy(svrRp.successRp.errors[i],
                  cliRp.cli200Rp.mx_validate_response.errors[i],
                  sizeof(svrRp.successRp.errors[i]));
          svrRp.successRp.errors_count++;
        }
        svrRp_size =
            offsetof(mx_validate_rp_def, errors) +
            (sizeof(svrRp.successRp.errors[0]) * svrRp.successRp.errors_count);
      }
      break;
    case 400:
      svrRp.errorRp.rp_code = RP_CODE_BAD_REQUEST;
      svrRp_size = snprintf(svrRp.errorRp.error_message,
                            sizeof(svrRp.errorRp.error_message),
                            "Validation service rejected the MX message: %s",
                            cliRp.cli400Rp.error_response.error_rw);
      svrRp_size += offsetof(error_rp_def, error_message);
      break;
    default:
      svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
      svrRp_size = snprintf(
          svrRp.errorRp.error_message, sizeof(svrRp.errorRp.error_message),
          "Validation service returned unexpected HTTP status: %d",
          cliRp.cli200Rp.lightwave_rp_header.http_status);
      svrRp_size += offsetof(error_rp_def, error_message);
      break;
    }
    break;
  case lw_rp_error:
    svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
    svrRp_size = snprintf(
        svrRp.errorRp.error_message, sizeof(svrRp.errorRp.error_message),
        "Validation service failed: rc=%d, http=%d, sc=%d, ec=%d, sc=%d: %s",
        cliRp.cliErrorRp.lightwave_rp_header.rp_code,
        cliRp.cliErrorRp.lightwave_rp_header.http_status,
        cliRp.cliErrorRp.error_source, cliRp.cliErrorRp.error_code,
        cliRp.cliErrorRp.error_subcode, cliRp.cliErrorRp.error_message);
    svrRp_size += offsetof(error_rp_def, error_message);
    break;
  default:
    svrRp.errorRp.rp_code = RP_CODE_INTERNAL_ERROR;
    svrRp_size = snprintf(svrRp.errorRp.error_message,
                          sizeof(svrRp.errorRp.error_message),
                          "Validation service returned unexpected rp_code: %d",
                          cliRp.cliErrorRp.lightwave_rp_header.rp_code);
    svrRp_size += offsetof(error_rp_def, error_message);
    break;
  }

  REPLYXL((const char*)&svrRp, svrRp_size);

  return;
}

/// @brief Wraps src into fixed-width lines separated by CRLF, into dst.
/// @param src The input string to wrap. Must be null-terminated. If NULL,
/// treated as empty string.
/// @param dst The destination buffer for the wrapped lines. Must be
/// null-terminated on success.
/// @param dst_size The size of the destination buffer in bytes.
/// @param width The width of each line in characters.
/// @param max_lines The maximum number of lines to emit.
/// @return The number of lines written, or -1 if an error occurs.
///
/// Returns the number of lines written, or -1 if dst is NULL,
/// width/max_lines is 0, or dst_size is smaller than the worst
/// case max_lines * (width + 2) + 1.
///
/// Each emitted line — including the last — ends with "\r\n".
/// Input longer than width * max_lines is silently truncated.
static int wrap_crlf(const char* src, char* dst, size_t dst_size, size_t width,
                     size_t max_lines) {
  size_t src_len;
  size_t pos;
  int lines;
  char* out;

  if (!dst || dst_size == 0 || width == 0 || max_lines == 0)
    return -1;
  if (dst_size < max_lines * (width + 2) + 1)
    return -1;

  if (!src)
    src = "";

  src_len = util_strnlen(src, NARRATIVE_SIZE);
  pos = 0;
  lines = 0;
  out = dst;
  while (pos < src_len && (size_t)lines < max_lines) {
    size_t chunk = src_len - pos;
    if (chunk > width)
      chunk = width;
    memcpy(out, src + pos, chunk);
    out += chunk;
    *out++ = '\r';
    *out++ = '\n';
    pos += chunk;
    lines++;
  }
  *out = '\0';

  return lines;
}

/// @brief The main entry point for the service.
/// @param argc The number of command-line arguments.
/// @param argv The command-line arguments.
/// @param envp The environment variables.
/// @return The exit status of the program.
int main(int argc, char* argv[], char** envp) {

  char* p;
  short* rqCode;
  int open_count = 0;
  int count_read;
  int done = 0;
  int cc;
  short recv_fnum;
  short rc;
  char request[120000];

  // Get our pathmon name.
  if ((p = getenv("PATHMON-NAME")) == NULL) {
    printf("PARAM PATHMON-NAME is not set.\n");
    return -1;
  }
  strncpy(pathmon_name, p, sizeof(pathmon_name));

  // Open $RECEIVE.
  if ((rc = FILE_OPEN_("$RECEIVE", 8, &recv_fnum, OMIT, OMIT, 0, 1)) != 0) {
    printf("Unable to open $RECEIVE, file system error %d\n", (int)rc);
    return -1;
  }

  // Process request messages.
  while (!done) {

    cc = (short)READUPDATEXL(recv_fnum, (char*)request, sizeof(request),
                             &count_read);

    if (!_status_eq(cc)) {
      FILE_GETINFO_(recv_fnum, &rc);
      if (rc != 6) {
        printf("READUPDATEXL error %d\n", (int)rc);
        return -1;
      }
    }

    /* Can't process the request if there's no request code. */
    if (count_read < 2) {
      REPLYXL(OMIT, OMIT, OMIT, OMIT, 2);
      continue;
    }

    // Dispatch the request.
    rqCode = (short*)request;
    switch (*rqCode) {
    case ZSYS_VAL_SMSG_OPEN:
      open_count++;
      REPLYXL(NULL, 0);
      break;
    case ZSYS_VAL_SMSG_CLOSE:
      if (--open_count <= 0)
        done = 1;
      REPLYXL(NULL, 0);
      break;
    case RQ_CODE_MT_GENERATE:
      generate_mt(request);
      break;
    case RQ_CODE_MT_TRANSLATE:
      translate_mt_to_mx(request);
      break;
    case RQ_CODE_MX_VALIDATE:
      validate_mx(request);
      break;
    case RQ_CODE_MX_PARSE:
      parse_mx(request);
      break;
    default:
      REPLYXL(OMIT, OMIT, OMIT, OMIT, 2);
      break;
    }
  }

  return 0;
}

/** End of file */
