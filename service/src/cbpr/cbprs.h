#pragma section rq_code_mt_generate
#define RQ_CODE_MT_GENERATE 9
#pragma section rq_code_mt_translate
#define RQ_CODE_MT_TRANSLATE 11
#pragma section rq_code_mx_validate
#define RQ_CODE_MX_VALIDATE 12
#pragma section rq_code_mx_parse
#define RQ_CODE_MX_PARSE 13
#pragma section rp_code_success
#define RP_CODE_SUCCESS 0
#pragma section rp_code_warning
#define RP_CODE_WARNING 1
#pragma section rp_code_bad_request
#define RP_CODE_BAD_REQUEST 400
#pragma section rp_code_internal_error
#define RP_CODE_INTERNAL_ERROR 500
#pragma section error_code_inv_field
#define ERROR_CODE_INV_FIELD 1
#pragma section error_code_send_failure
#define ERROR_CODE_SEND_FAILURE 2
#pragma section max_warnings
#define MAX_WARNINGS 4
#pragma section max_errors
#define MAX_ERRORS 16
#pragma section max_fields
#define MAX_FIELDS 64
#pragma section rq_code
typedef short rq_code_def;
#pragma section rp_code
typedef short rp_code_def;
#pragma section error_code
typedef short error_code_def;
#pragma section bic
typedef char bic_def[12];
#pragma section account
typedef char account_def[36];
#pragma section amount
typedef char amount_def[24];
#pragma section message_type
typedef char message_type_def[16];
#pragma section name_lines
typedef char name_lines_def[140];
#pragma section transaction_id
typedef char transaction_id_def[36];
#pragma section rp_code_enum_cbpr
enum { rp_code_cbpr_success = 0, rp_code_cbpr_warning = 1 };
typedef short rp_code_enum_cbpr_def;
#pragma section debtor
#pragma fieldalign shared2 __debtor
typedef struct __debtor {
  /* @LightWaveAttribute(name="name") */
  name_lines_def db_name;
  /* @LightWaveAttribute(name="bic") */
  bic_def db_bic;
  /* @LightWaveAttribute(name="account") */
  account_def db_account;
} debtor_def;
#define debtor_def_Size 188
#pragma section creditor
#pragma fieldalign shared2 __creditor
typedef struct __creditor {
  /* @LightWaveAttribute(name="name") */
  name_lines_def cr_name;
  /* @LightWaveAttribute(name="bic") */
  bic_def cr_bic;
  /* @LightWaveAttribute(name="account") */
  account_def cr_account;
} creditor_def;
#define creditor_def_Size 188
#pragma section mt_generate_rq
#pragma fieldalign shared2 __mt_generate_rq
typedef struct __mt_generate_rq {
  rq_code_def rq_code;
  /*value is 9*/
  transaction_id_def transaction_id;
  message_type_def message_type;
  struct {
    debtor_def debtor;
    creditor_def creditor;
    amount_def amount;
    char currency[3];
    char filler_0;
    char remittance_info[140];
  } form_data;
  struct {
    char settlement_method[4];
    char charges_code[4];
    char instruction_priority[4];
    char service_level_code[4];
    short value_date_offset_days;
    char sender_reference[16];
    char receiver_reference[16];
  } defaults;
} mt_generate_rq_def;
#define mt_generate_rq_def_Size 648
#pragma section mt_generate_rp
#pragma fieldalign shared2 __mt_generate_rp
typedef struct __mt_generate_rp {
  /* @LightWaveAttribute(hide="1") */
  rp_code_enum_cbpr_def rp_code;
  transaction_id_def transaction_id;
  char mt_message[10000];
  message_type_def message_type;
} mt_generate_rp_def;
#define mt_generate_rp_def_Size 10054
#pragma section mt_translate_rq
#pragma fieldalign shared2 __mt_translate_rq
typedef struct __mt_translate_rq {
  rq_code_def rq_code;
  /*value is 11*/
  transaction_id_def transaction_id;
  char mt_message[100000];
} mt_translate_rq_def;
#define mt_translate_rq_def_Size 100038
#pragma section mt_translate_rp
#include <tnsint.h>
#pragma fieldalign shared2 __mt_translate_rp
typedef struct __mt_translate_rp {
  /* @LightWaveAttribute(hide="1") */
  rp_code_enum_cbpr_def rp_code;
  transaction_id_def transaction_id;
  char mx_message[100000];
  /* @LightWaveAttribute(type="boolean") */
  __int32_t valid;
  message_type_def message_type;
  /* @LightWaveAttribute(hide="1") */
  short warnings_count;
  char warnings[4][128];
} mt_translate_rp_def;
#define mt_translate_rp_def_Size 100572
#pragma section mx_validate_rq
#pragma fieldalign shared2 __mx_validate_rq
typedef struct __mx_validate_rq {
  rq_code_def rq_code;
  /*value is 12*/
  transaction_id_def transaction_id;
  char mx_message[100000];
} mx_validate_rq_def;
#define mx_validate_rq_def_Size 100038
#pragma section mx_validate_rp
#include <tnsint.h>
#pragma fieldalign shared2 __mx_validate_rp
typedef struct __mx_validate_rp {
  /* @LightWaveAttribute(hide="1") */
  rp_code_enum_cbpr_def rp_code;
  transaction_id_def transaction_id;
  /* @LightWaveAttribute(type="boolean") */
  __int32_t valid;
  message_type_def schema_version;
  /* @LightWaveAttribute(hide="1") */
  short errors_count;
  char errors[16][256];
} mx_validate_rp_def;
#define mx_validate_rp_def_Size 4156
#pragma section mx_parse_rq
#pragma fieldalign shared2 __mx_parse_rq
typedef struct __mx_parse_rq {
  rq_code_def rq_code;
  /*value is 13*/
  transaction_id_def transaction_id;
  char mx_message[100000];
} mx_parse_rq_def;
#define mx_parse_rq_def_Size 100038
#pragma section mx_parse_rp
#pragma fieldalign shared2 __mx_parse_rp
typedef struct __mx_parse_rp {
  /* @LightWaveAttribute(hide="1") */
  rp_code_enum_cbpr_def rp_code;
  transaction_id_def transaction_id;
  message_type_def message_type;
  short total_fields;
  struct {
    char field_name[16];
    char field_value[512];
  } fields[64];
} mx_parse_rp_def;
#define mx_parse_rp_def_Size 33848
#pragma section error_rp
#pragma fieldalign shared2 __error_rp
typedef struct __error_rp {
  /* @LightWaveAttribute(hide="1") */
  rp_code_def rp_code;
  /* @LightWaveAttribute(name="error") */
  char error_message[1024];
} error_rp_def;
#define error_rp_def_Size 1026
