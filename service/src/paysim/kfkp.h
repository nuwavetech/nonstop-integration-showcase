/* SCHEMA PRODUCED DATE - TIME : 2/25/2025 - 14:17:50 */
#pragma section kafka_producer_templat_val
/* Definition KAFKA-PRODUCER-TEMPLAT-VAL created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __kafka_producer_templat_val
typedef struct __kafka_producer_templat_val
{
   short                           rq_produce_record;
   /*value is 1*/
} kafka_producer_templat_val_def;
#define kafka_producer_templat_val_def_Size 2
#pragma section kafka_producer_templat_enm
/* Definition KAFKA-PRODUCER-TEMPLAT-ENM created on 02/25/2025 at 14:17 */
enum
{
   rq_produce_record = 1
};
typedef short                           kafka_producer_templat_enm_def;
#pragma section value_type_02
/* Definition VALUE-TYPE-02 created on 02/25/2025 at 14:17 */
#include <tnsint.h>
#pragma fieldalign shared2 __value_type_02
typedef struct __value_type_02
{
   char                            type_rw[32];
   __int32_t                       size_rw;
} value_type_02_def;
#define value_type_02_def_Size 36
#pragma section produce_response
/* Definition PRODUCE-RESPONSE created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_response
typedef struct __produce_response
{
   __int32_t                       error_code;
   char                            cluster_id[32];
   char                            topic_name[32];
   __int32_t                       partition_id;
   __int32_t                       offset;
   long long                       timestamp;
   value_type_02_def               value_rw;
} produce_response_def;
#define produce_response_def_Size 120
#pragma section restproxyerror_response
/* Definition RESTPROXYERROR-RESPONSE created on 02/25/2025 at 14:17 */
#include <tnsint.h>
#pragma fieldalign shared2 __restproxyerror_response
typedef struct __restproxyerror_response
{
   __int32_t                       error_code;
   char                            message_rw[248];
} restproxyerror_response_def;
#define restproxyerror_response_def_Size 252
#pragma section produce_record_rq
/* Definition PRODUCE-RECORD-RQ created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_record_rq
typedef struct __produce_record_rq
{
   lightwave_rq_header_def         lightwave_rq_header;
   __uint32_t                      blob_size;
   char                            blob[32000];
} produce_record_rq_def;
#define produce_record_rq_def_Size 32036
#pragma section produce_record_200_rp
/* Definition PRODUCE-RECORD-200-RP created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_record_200_rp
typedef struct __produce_record_200_rp
{
   lightwave_rp_header_def         lightwave_rp_header;
   produce_response_def            produce_response;
} produce_record_200_rp_def;
#define produce_record_200_rp_def_Size 152
#pragma section produce_record_400_rp
/* Definition PRODUCE-RECORD-400-RP created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_record_400_rp
typedef struct __produce_record_400_rp
{
   lightwave_rp_header_def         lightwave_rp_header;
   restproxyerror_response_def     restproxyerror_response;
} produce_record_400_rp_def;
#define produce_record_400_rp_def_Size 284
#pragma section produce_record_401_rp
/* Definition PRODUCE-RECORD-401-RP created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_record_401_rp
typedef struct __produce_record_401_rp
{
   lightwave_rp_header_def         lightwave_rp_header;
   restproxyerror_response_def     restproxyerror_response;
} produce_record_401_rp_def;
#define produce_record_401_rp_def_Size 284
#pragma section produce_record_415_rp
/* Definition PRODUCE-RECORD-415-RP created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_record_415_rp
typedef struct __produce_record_415_rp
{
   lightwave_rp_header_def         lightwave_rp_header;
   restproxyerror_response_def     restproxyerror_response;
} produce_record_415_rp_def;
#define produce_record_415_rp_def_Size 284
#pragma section produce_record_422_rp
/* Definition PRODUCE-RECORD-422-RP created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_record_422_rp
typedef struct __produce_record_422_rp
{
   lightwave_rp_header_def         lightwave_rp_header;
   restproxyerror_response_def     restproxyerror_response;
} produce_record_422_rp_def;
#define produce_record_422_rp_def_Size 284
#pragma section produce_record_500_rp
/* Definition PRODUCE-RECORD-500-RP created on 02/25/2025 at 14:17 */
#pragma fieldalign shared2 __produce_record_500_rp
typedef struct __produce_record_500_rp
{
   lightwave_rp_header_def         lightwave_rp_header;
   restproxyerror_response_def     restproxyerror_response;
} produce_record_500_rp_def;
#define produce_record_500_rp_def_Size 284