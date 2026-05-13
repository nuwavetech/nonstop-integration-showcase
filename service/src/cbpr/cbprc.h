#pragma section lightwave_rp_code_enum
enum { lw_rp_success = 0, lw_rp_info = 1, lw_rp_error = 2 };
typedef short lightwave_rp_code_enum_def;
#pragma section lightwave_info_code_enum
enum { lw_info_field_truncated = 100, lw_info_array_truncated = 101 };
typedef short lightwave_info_code_enum_def;
#pragma section lightwave_error_src_enum
enum {
  lw_error_src_lightwave = 1,
  lw_error_src_http = 2,
  lw_error_src_tcpip = 3,
  lw_error_src_ssl = 4,
  lw_error_src_auth_exit = 5
};
typedef short lightwave_error_src_enum_def;
#pragma section lightwave_error_enum
enum {
  lw_error_invalid_license = 1,
  lw_error_invalid_header = 2,
  lw_error_invalid_rq_code = 3,
  lw_error_invalid_type = 4,
  lw_error_serialization_error = 5,
  lw_error_deserialization_error = 6,
  lw_error_request_timeout = 7,
  lw_error_response_not_defined = 12,
  lw_error_invalid_uri_scheme = 100,
  lw_error_invalid_api_def = 101,
  lw_error_invalid_base_uri = 102,
  lw_error_invalid_hdr_version = 103,
  lw_error_signature_error = 104,
  lw_error_internal_error = 500
};
typedef short lightwave_error_enum_def;
#pragma section lightwave_rq_header
#include <tnsint.h>
#pragma fieldalign shared2 __lightwave_rq_header
typedef struct __lightwave_rq_header {
  short rq_code;
  unsigned short rq_version;
  __uint32_t rq_timeout;
  char reserved[24];
} lightwave_rq_header_def;
#define lightwave_rq_header_def_Size 32
#pragma section lightwave_rp_header
#pragma fieldalign shared2 __lightwave_rp_header
typedef struct __lightwave_rp_header {
  short rp_code;
  short http_status;
  short info_code;
  short info_detail;
  char reserved[24];
} lightwave_rp_header_def;
#define lightwave_rp_header_def_Size 32
#pragma section lightwave_error_rp
#include <tnsint.h>
#pragma fieldalign shared2 __lightwave_error_rp
typedef struct __lightwave_error_rp {
  lightwave_rp_header_def lightwave_rp_header;
  __int32_t error_source;
  __int32_t error_code;
  __int32_t error_subcode;
  char error_message[4096];
} lightwave_error_rp_def;
#define lightwave_error_rp_def_Size 4140
#pragma section com_nuwavetech_demo_ns_val
#pragma fieldalign shared2 __com_nuwavetech_demo_ns_val
typedef struct __com_nuwavetech_demo_ns_val {
  short rq_convert_mt_to_mx;
  /*value is 11*/
  short rq_parse_mt;
  /*value is 10*/
  short rq_parse_mx;
  /*value is 13*/
  short rq_validate_mx;
  /*value is 12*/
} com_nuwavetech_demo_ns_val_def;
#define com_nuwavetech_demo_ns_val_def_Size 8
#pragma section com_nuwavetech_demo_ns_enm
enum {
  rq_convert_mt_to_mx = 11,
  rq_parse_mt = 10,
  rq_parse_mx = 13,
  rq_validate_mx = 12
};
typedef short com_nuwavetech_demo_ns_enm_def;
#pragma section mt_request
#pragma fieldalign shared2 __mt_request
typedef struct __mt_request {
  char mt[100000];
} mt_request_def;
#define mt_request_def_Size 100000
#pragma section mx_request
#pragma fieldalign shared2 __mx_request
typedef struct __mx_request {
  char mx[100000];
} mx_request_def;
#define mx_request_def_Size 100000
#pragma section mx_response
#include <tnsint.h>
#pragma fieldalign shared2 __mx_response
typedef struct __mx_response {
  char mx[100000];
  __int32_t valid;
  short warnings_count;
  char warnings[4][256];
} mx_response_def;
#define mx_response_def_Size 101030
#pragma section fields_type
#pragma fieldalign shared2 __fields_type
typedef struct __fields_type {
  short additional_properties_count;
  struct {
    char map_key[16];
    char map_value[512];
  } additional_properties[32];
} fields_type_def;
#define fields_type_def_Size 16898
#pragma section mt_parse_response
#pragma fieldalign shared2 __mt_parse_response
typedef struct __mt_parse_response {
  char type_rw[32];
  fields_type_def fields;
} mt_parse_response_def;
#define mt_parse_response_def_Size 16930
#pragma section fields_type_01
#pragma fieldalign shared2 __fields_type_01
typedef struct __fields_type_01 {
  short additional_properties_count;
  struct {
    char map_key[16];
    char map_value[512];
  } additional_properties[64];
} fields_type_01_def;
#define fields_type_01_def_Size 33794
#pragma section mx_parse_response
#pragma fieldalign shared2 __mx_parse_response
typedef struct __mx_parse_response {
  char type_rw[32];
  fields_type_01_def fields;
} mx_parse_response_def;
#define mx_parse_response_def_Size 33826
#pragma section mx_validate_response
#include <tnsint.h>
#pragma fieldalign shared2 __mx_validate_response
typedef struct __mx_validate_response {
  __int32_t valid;
  short errors_count;
  char errors[16][256];
} mx_validate_response_def;
#define mx_validate_response_def_Size 4102
#pragma section error_response
#pragma fieldalign shared2 __error_response
typedef struct __error_response {
  char error_rw[128];
} error_response_def;
#define error_response_def_Size 128
#pragma section convert_mt_to_mx_rq
#pragma fieldalign shared2 __convert_mt_to_mx_rq
typedef struct __convert_mt_to_mx_rq {
  lightwave_rq_header_def lightwave_rq_header;
  mt_request_def mt_request;
} convert_mt_to_mx_rq_def;
#define convert_mt_to_mx_rq_def_Size 100032
#pragma section convert_mt_to_mx_200_rp
#pragma fieldalign shared2 __convert_mt_to_mx_200_rp
typedef struct __convert_mt_to_mx_200_rp {
  lightwave_rp_header_def lightwave_rp_header;
  mx_response_def mx_response;
} convert_mt_to_mx_200_rp_def;
#define convert_mt_to_mx_200_rp_def_Size 101062
#pragma section convert_mt_to_mx_400_rp
#pragma fieldalign shared2 __convert_mt_to_mx_400_rp
typedef struct __convert_mt_to_mx_400_rp {
  lightwave_rp_header_def lightwave_rp_header;
  error_response_def error_response;
} convert_mt_to_mx_400_rp_def;
#define convert_mt_to_mx_400_rp_def_Size 160
#pragma section parse_mt_rq
#pragma fieldalign shared2 __parse_mt_rq
typedef struct __parse_mt_rq {
  lightwave_rq_header_def lightwave_rq_header;
  mt_request_def mt_request;
} parse_mt_rq_def;
#define parse_mt_rq_def_Size 100032
#pragma section parse_mt_200_rp
#pragma fieldalign shared2 __parse_mt_200_rp
typedef struct __parse_mt_200_rp {
  lightwave_rp_header_def lightwave_rp_header;
  mt_parse_response_def mt_parse_response;
} parse_mt_200_rp_def;
#define parse_mt_200_rp_def_Size 16962
#pragma section parse_mt_400_rp
#pragma fieldalign shared2 __parse_mt_400_rp
typedef struct __parse_mt_400_rp {
  lightwave_rp_header_def lightwave_rp_header;
  error_response_def error_response;
} parse_mt_400_rp_def;
#define parse_mt_400_rp_def_Size 160
#pragma section parse_mx_rq
#pragma fieldalign shared2 __parse_mx_rq
typedef struct __parse_mx_rq {
  lightwave_rq_header_def lightwave_rq_header;
  mx_request_def mx_request;
} parse_mx_rq_def;
#define parse_mx_rq_def_Size 100032
#pragma section parse_mx_200_rp
#pragma fieldalign shared2 __parse_mx_200_rp
typedef struct __parse_mx_200_rp {
  lightwave_rp_header_def lightwave_rp_header;
  mx_parse_response_def mx_parse_response;
} parse_mx_200_rp_def;
#define parse_mx_200_rp_def_Size 33858
#pragma section parse_mx_400_rp
#pragma fieldalign shared2 __parse_mx_400_rp
typedef struct __parse_mx_400_rp {
  lightwave_rp_header_def lightwave_rp_header;
  error_response_def error_response;
} parse_mx_400_rp_def;
#define parse_mx_400_rp_def_Size 160
#pragma section validate_mx_rq
#pragma fieldalign shared2 __validate_mx_rq
typedef struct __validate_mx_rq {
  lightwave_rq_header_def lightwave_rq_header;
  mx_request_def mx_request;
} validate_mx_rq_def;
#define validate_mx_rq_def_Size 100032
#pragma section validate_mx_200_rp
#pragma fieldalign shared2 __validate_mx_200_rp
typedef struct __validate_mx_200_rp {
  lightwave_rp_header_def lightwave_rp_header;
  mx_validate_response_def mx_validate_response;
} validate_mx_200_rp_def;
#define validate_mx_200_rp_def_Size 4134
#pragma section validate_mx_400_rp
#pragma fieldalign shared2 __validate_mx_400_rp
typedef struct __validate_mx_400_rp {
  lightwave_rp_header_def lightwave_rp_header;
  error_response_def error_response;
} validate_mx_400_rp_def;
#define validate_mx_400_rp_def_Size 160
