/* SCHEMA PRODUCED DATE - TIME : 7/29/2025 - 09:03:18 */
#pragma section com_nuwavetech_demo_ns_val
/* Definition COM-NUWAVETECH-DEMO-NS-VAL created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __com_nuwavetech_demo_ns_val
typedef struct __com_nuwavetech_demo_ns_val
{
   short                           rq_payment_card_authorize;
   /*value is 1*/
} com_nuwavetech_demo_ns_val_def;
#define com_nuwavetech_demo_ns_val_def_Size 2
#pragma section com_nuwavetech_demo_ns_enm
/* Definition COM-NUWAVETECH-DEMO-NS-ENM created on 07/29/2025 at 09:03 */
enum
{
   rq_payment_card_authorize = 1
};
typedef short                           com_nuwavetech_demo_ns_enm_def;
#pragma section caaa_001_any_type
/* Definition CAAA-001-ANY-TYPE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_any_type
typedef struct __caaa_001_any_type
{
   char                            filler_0;
} caaa_001_any_type_def;
#define caaa_001_any_type_def_Size 1
#pragma section caaa_001_date_and_d_choice
/* Definition CAAA-001-DATE-AND-D-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_date_and_d_choice
typedef struct __caaa_001_date_and_d_choice
{
   long long                       dt;
   long long                       dt_tm;
} caaa_001_date_and_d_choice_def;
#define caaa_001_date_and_d_choice_def_Size 16
#pragma section caaa_001_kekidentifier_1
/* Definition CAAA-001-KEKIDENTIFIER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_kekidentifier_1
typedef struct __caaa_001_kekidentifier_1
{
   char                            key_id[140];
   char                            key_vrsn[32];
   char                            derivtn_id[16];
} caaa_001_kekidentifier_1_def;
#define caaa_001_kekidentifier_1_def_Size 188
#pragma section caaa_001_parameter_1
/* Definition CAAA-001-PARAMETER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_parameter_1
typedef struct __caaa_001_parameter_1
{
   char                            initlstn_vctr[256];
} caaa_001_parameter_1_def;
#define caaa_001_parameter_1_def_Size 256
#pragma section caaa_001_algorithm_ident_9
/* Definition CAAA-001-ALGORITHM-IDENT-9 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_algorithm_ident_9
typedef struct __caaa_001_algorithm_ident_9
{
   char                            algo[32];
   caaa_001_parameter_1_def        param;
} caaa_001_algorithm_ident_9_def;
#define caaa_001_algorithm_ident_9_def_Size 288
#pragma section caaa_001_kek_3
/* Definition CAAA-001-KEK-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_kek_3
typedef struct __caaa_001_kek_3
{
   char                            vrsn[18];
   caaa_001_kekidentifier_1_def    kekid;
   caaa_001_algorithm_ident_9_def  key_ncrptn_algo;
   char                            ncrptd_key[140];
} caaa_001_kek_3_def;
#define caaa_001_kek_3_def_Size 634
#pragma section caaa_001_organisati_choice
/* Definition CAAA-001-ORGANISATI-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_organisati_choice
typedef struct __caaa_001_organisati_choice
{
   char                            cd_rw[4];
   char                            prtry[35];
} caaa_001_organisati_choice_def;
#define caaa_001_organisati_choice_def_Size 39
#pragma section caaa_001_generic_organis_1
/* Definition CAAA-001-GENERIC-ORGANIS-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_organis_1
typedef struct __caaa_001_generic_organis_1
{
   char                            id[35];
   struct
   {
      char                            cd_rw[4];
      char                            prtry[35];
   } schme_nm;
   char                            issr[35];
} caaa_001_generic_organis_1_def;
#define caaa_001_generic_organis_1_def_Size 109
#pragma section caaa_001_organisation_id_6
/* Definition CAAA-001-ORGANISATION-ID-6 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_organisation_id_6
typedef struct __caaa_001_organisation_id_6
{
   char                            bic[12];
   struct
   {
      char                            id[35];
      struct
      {
         char                            cd_rw[4];
         char                            prtry[35];
      } schme_nm;
      char                            issr[35];
   } othr[4];
} caaa_001_organisation_id_6_def;
#define caaa_001_organisation_id_6_def_Size 448
#pragma section caaa_001_date_and_pl_birth
/* Definition CAAA-001-DATE-AND-PL-BIRTH created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_date_and_pl_birth
typedef struct __caaa_001_date_and_pl_birth
{
   long long                       birth_dt;
   char                            prvc_of_birth[35];
   char                            city_of_birth[35];
   char                            ctry_of_birth[2];
} caaa_001_date_and_pl_birth_def;
#define caaa_001_date_and_pl_birth_def_Size 80
#pragma section caaa_001_person_ide_choice
/* Definition CAAA-001-PERSON-IDE-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_person_ide_choice
typedef struct __caaa_001_person_ide_choice
{
   char                            cd_rw[4];
   char                            prtry[35];
} caaa_001_person_ide_choice_def;
#define caaa_001_person_ide_choice_def_Size 39
#pragma section caaa_001_generic_person_1
/* Definition CAAA-001-GENERIC-PERSON-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_person_1
typedef struct __caaa_001_generic_person_1
{
   char                            id[35];
   struct
   {
      char                            cd_rw[4];
      char                            prtry[35];
   } schme_nm;
   char                            issr[35];
} caaa_001_generic_person_1_def;
#define caaa_001_generic_person_1_def_Size 109
#pragma section caaa_001_person_identifi_5
/* Definition CAAA-001-PERSON-IDENTIFI-5 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_person_identifi_5
typedef struct __caaa_001_person_identifi_5
{
   struct
   {
      long long                       birth_dt;
      char                            prvc_of_birth[35];
      char                            city_of_birth[35];
      char                            ctry_of_birth[2];
   } dt_and_plc_of_birth;
   struct
   {
      char                            id[35];
      struct
      {
         char                            cd_rw[4];
         char                            prtry[35];
      } schme_nm;
      char                            issr[35];
   } othr[4];
} caaa_001_person_identifi_5_def;
#define caaa_001_person_identifi_5_def_Size 516
#pragma section caaa_001_party_8_choice
/* Definition CAAA-001-PARTY-8-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_party_8_choice
typedef struct __caaa_001_party_8_choice
{
   struct
   {
      char                            bic[12];
      struct
      {
         char                            id[35];
         struct
         {
            char                            cd_rw[4];
            char                            prtry[35];
         } schme_nm;
         char                            issr[35];
      } othr[4];
   } org_id;
   struct
   {
      struct
      {
         long long                       birth_dt;
         char                            prvc_of_birth[35];
         char                            city_of_birth[35];
         char                            ctry_of_birth[2];
      } dt_and_plc_of_birth;
      struct
      {
         char                            id[35];
         struct
         {
            char                            cd_rw[4];
            char                            prtry[35];
         } schme_nm;
         char                            issr[35];
      } othr[4];
   } prvt_id;
} caaa_001_party_8_choice_def;
#define caaa_001_party_8_choice_def_Size 964
#pragma section caaa_001_postal_address_6
/* Definition CAAA-001-POSTAL-ADDRESS-6 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_postal_address_6
typedef struct __caaa_001_postal_address_6
{
   char                            adr_tp[32];
   char                            dept[70];
   char                            sub_dept[70];
   char                            strt_nm[70];
   char                            bldg_nb[16];
   char                            pst_cd[16];
   char                            twn_nm[35];
   char                            ctry_sub_dvsn[35];
   char                            ctry[2];
   char                            adr_line[2][70];
} caaa_001_postal_address_6_def;
#define caaa_001_postal_address_6_def_Size 486
#pragma section caaa_001_contacts_3
/* Definition CAAA-001-CONTACTS-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_contacts_3
typedef struct __caaa_001_contacts_3
{
   char                            nm_prfx[32];
   char                            nm[140];
   char                            phne_nb[34];
   char                            mob_nb[34];
   char                            fax_nb[34];
   char                            email_adr[256];
   char                            othr[35];
   char                            job_titl[35];
   char                            rspnsblty[35];
   char                            dept[70];
} caaa_001_contacts_3_def;
#define caaa_001_contacts_3_def_Size 705
#pragma section caaa_001_party_identifi_45
/* Definition CAAA-001-PARTY-IDENTIFI-45 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_party_identifi_45
typedef struct __caaa_001_party_identifi_45
{
   struct
   {
      struct
      {
         char                            bic[12];
         struct
         {
            char                            id[35];
            struct
            {
               char                            cd_rw[4];
               char                            prtry[35];
            } schme_nm;
            char                            issr[35];
         } othr[4];
      } org_id;
      struct
      {
         struct
         {
            long long                       birth_dt;
            char                            prvc_of_birth[35];
            char                            city_of_birth[35];
            char                            ctry_of_birth[2];
         } dt_and_plc_of_birth;
         struct
         {
            char                            id[35];
            struct
            {
               char                            cd_rw[4];
               char                            prtry[35];
            } schme_nm;
            char                            issr[35];
         } othr[4];
      } prvt_id;
   } id;
   char                            nm[35];
   struct
   {
      char                            adr_tp[32];
      char                            dept[70];
      char                            sub_dept[70];
      char                            strt_nm[70];
      char                            bldg_nb[16];
      char                            pst_cd[16];
      char                            twn_nm[35];
      char                            ctry_sub_dvsn[35];
      char                            ctry[2];
      char                            adr_line[2][70];
   } pstl_adr;
   char                            ctry_of_res[2];
   struct
   {
      char                            nm_prfx[32];
      char                            nm[140];
      char                            phne_nb[34];
      char                            mob_nb[34];
      char                            fax_nb[34];
      char                            email_adr[256];
      char                            othr[35];
      char                            job_titl[35];
      char                            rspnsblty[35];
      char                            dept[70];
   } ctct_dtls[4];
} caaa_001_party_identifi_45_def;
#define caaa_001_party_identifi_45_def_Size 4307
#pragma section caaa_001_legal_organisat_1
/* Definition CAAA-001-LEGAL-ORGANISAT-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_legal_organisat_1
typedef struct __caaa_001_legal_organisat_1
{
   char                            id[35];
   char                            nm[140];
} caaa_001_legal_organisat_1_def;
#define caaa_001_legal_organisat_1_def_Size 175
#pragma section caaa_001_tax_exempt_choice
/* Definition CAAA-001-TAX-EXEMPT-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_tax_exempt_choice
typedef struct __caaa_001_tax_exempt_choice
{
   char                            ustrd[140];
   char                            strd[32];
} caaa_001_tax_exempt_choice_def;
#define caaa_001_tax_exempt_choice_def_Size 172
#pragma section caaa_001_tax_party_3
/* Definition CAAA-001-TAX-PARTY-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_tax_party_3
typedef struct __caaa_001_tax_party_3
{
   char                            tax_id[35];
   char                            tax_tp[35];
   char                            regn_id[35];
   struct
   {
      char                            ustrd[140];
      char                            strd[32];
   } tax_xmptn_rsn[4];
} caaa_001_tax_party_3_def;
#define caaa_001_tax_party_3_def_Size 793
#pragma section caaa_001_trade_party_1
/* Definition CAAA-001-TRADE-PARTY-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_trade_party_1
typedef struct __caaa_001_trade_party_1
{
   struct
   {
      struct
      {
         struct
         {
            char                            bic[12];
            struct
            {
               char                            id[35];
               struct
               {
                  char                            cd_rw[4];
                  char                            prtry[35];
               } schme_nm;
               char                            issr[35];
            } othr[4];
         } org_id;
         struct
         {
            struct
            {
               long long                       birth_dt;
               char                            prvc_of_birth[35];
               char                            city_of_birth[35];
               char                            ctry_of_birth[2];
            } dt_and_plc_of_birth;
            struct
            {
               char                            id[35];
               struct
               {
                  char                            cd_rw[4];
                  char                            prtry[35];
               } schme_nm;
               char                            issr[35];
            } othr[4];
         } prvt_id;
      } id;
      char                            nm[35];
      struct
      {
         char                            adr_tp[32];
         char                            dept[70];
         char                            sub_dept[70];
         char                            strt_nm[70];
         char                            bldg_nb[16];
         char                            pst_cd[16];
         char                            twn_nm[35];
         char                            ctry_sub_dvsn[35];
         char                            ctry[2];
         char                            adr_line[2][70];
      } pstl_adr;
      char                            ctry_of_res[2];
      struct
      {
         char                            nm_prfx[32];
         char                            nm[140];
         char                            phne_nb[34];
         char                            mob_nb[34];
         char                            fax_nb[34];
         char                            email_adr[256];
         char                            othr[35];
         char                            job_titl[35];
         char                            rspnsblty[35];
         char                            dept[70];
      } ctct_dtls[4];
   } pty_id;
   struct
   {
      char                            id[35];
      char                            nm[140];
   } lgl_org;
   struct
   {
      char                            tax_id[35];
      char                            tax_tp[35];
      char                            regn_id[35];
      struct
      {
         char                            ustrd[140];
         char                            strd[32];
      } tax_xmptn_rsn[4];
   } tax_pty[4];
} caaa_001_trade_party_1_def;
#define caaa_001_trade_party_1_def_Size 7654
#pragma section caaa_001_transport_means_3
/* Definition CAAA-001-TRANSPORT-MEANS-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_transport_means_3
typedef struct __caaa_001_transport_means_3
{
   char                            md_cd[4];
   char                            id[35];
   char                            nm[35];
} caaa_001_transport_means_3_def;
#define caaa_001_transport_means_3_def_Size 74
#pragma section caaa_001_consignment_2
/* Definition CAAA-001-CONSIGNMENT-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_consignment_2
typedef struct __caaa_001_consignment_2
{
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } consgnr;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } consgn;
   struct
   {
      char                            md_cd[4];
      char                            id[35];
      char                            nm[35];
   } trnsprt_means[4];
} caaa_001_consignment_2_def;
#define caaa_001_consignment_2_def_Size 15604
#pragma section caaa_001_document_ident_22
/* Definition CAAA-001-DOCUMENT-IDENT-22 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_document_ident_22
typedef struct __caaa_001_document_ident_22
{
   char                            id[35];
   long long                       dt_of_isse;
} caaa_001_document_ident_22_def;
#define caaa_001_document_ident_22_def_Size 44
#pragma section caaa_001_binary_file_1
/* Definition CAAA-001-BINARY-FILE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_binary_file_1
typedef struct __caaa_001_binary_file_1
{
   char                            mimetp[35];
   char                            ncodg_tp[35];
   char                            char_set[35];
   char                            incl_binry_objct[256];
} caaa_001_binary_file_1_def;
#define caaa_001_binary_file_1_def_Size 361
#pragma section caaa_001_document_genera_2
/* Definition CAAA-001-DOCUMENT-GENERA-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_document_genera_2
typedef struct __caaa_001_document_genera_2
{
   char                            doc_tp[4];
   char                            doc_nb[35];
   char                            sndr_rcvr_seq_id[140];
   char                            filler_0;
   long long                       isse_dt;
   char                            url[256];
   struct
   {
      char                            mimetp[35];
      char                            ncodg_tp[35];
      char                            char_set[35];
      char                            incl_binry_objct[256];
   } attchd_binry_file[4];
} caaa_001_document_genera_2_def;
#define caaa_001_document_genera_2_def_Size 1888
#pragma section caaa_001_generic_identi_13
/* Definition CAAA-001-GENERIC-IDENTI-13 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_identi_13
typedef struct __caaa_001_generic_identi_13
{
   char                            id[4];
   char                            schme_nm[35];
   char                            issr[35];
} caaa_001_generic_identi_13_def;
#define caaa_001_generic_identi_13_def_Size 74
#pragma section caaa_001_incoterms_choice
/* Definition CAAA-001-INCOTERMS-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_incoterms_choice
typedef struct __caaa_001_incoterms_choice
{
   char                            cd_rw[4];
   caaa_001_generic_identi_13_def  prtry;
} caaa_001_incoterms_choice_def;
#define caaa_001_incoterms_choice_def_Size 78
#pragma section caaa_001_incoterms_3
/* Definition CAAA-001-INCOTERMS-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_incoterms_3
typedef struct __caaa_001_incoterms_3
{
   caaa_001_incoterms_choice_def   incotrms_cd;
   char                            lctn[35];
} caaa_001_incoterms_3_def;
#define caaa_001_incoterms_3_def_Size 113
#pragma section caaa_001_trade_agreement_6
/* Definition CAAA-001-TRADE-AGREEMENT-6 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_trade_agreement_6
typedef struct __caaa_001_trade_agreement_6
{
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } buyr;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } sellr;
   struct
   {
      char                            id[35];
      char                            filler_0;
      long long                       dt_of_isse;
   } qtn_doc_id;
   struct
   {
      char                            id[35];
      char                            filler_1;
      long long                       dt_of_isse;
   } ctrct_doc_id;
   struct
   {
      char                            id[35];
      char                            filler_2;
      long long                       dt_of_isse;
   } buyr_ordr_id_doc;
   struct
   {
      char                            doc_tp[4];
      char                            doc_nb[35];
      char                            sndr_rcvr_seq_id[140];
      char                            filler_3;
      long long                       isse_dt;
      char                            url[256];
      struct
      {
         char                            mimetp[35];
         char                            ncodg_tp[35];
         char                            char_set[35];
         char                            incl_binry_objct[256];
      } attchd_binry_file[4];
   } addtl_ref_doc[4];
   struct
   {
      struct
      {
         char                            cd_rw[4];
         struct
         {
            char                            id[4];
            char                            schme_nm[35];
            char                            issr[35];
         } prtry;
      } incotrms_cd;
      char                            lctn[35];
   } incotrms;
} caaa_001_trade_agreement_6_def;
#define caaa_001_trade_agreement_6_def_Size 23105
#pragma section caaa_001_relative_distin_1
/* Definition CAAA-001-RELATIVE-DISTIN-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_relative_distin_1
typedef struct __caaa_001_relative_distin_1
{
   char                            attr_tp[32];
   char                            attr_val[140];
} caaa_001_relative_distin_1_def;
#define caaa_001_relative_distin_1_def_Size 172
#pragma section caaa_001_certificate_iss_1
/* Definition CAAA-001-CERTIFICATE-ISS-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_certificate_iss_1
typedef struct __caaa_001_certificate_iss_1
{
   caaa_001_relative_distin_1_def  rltv_dstngshd_nm[4];
} caaa_001_certificate_iss_1_def;
#define caaa_001_certificate_iss_1_def_Size 688
#pragma section caaa_001_generic_identi_32
/* Definition CAAA-001-GENERIC-IDENTI-32 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_identi_32
typedef struct __caaa_001_generic_identi_32
{
   char                            id[35];
   char                            tp[32];
   char                            issr[32];
   char                            shrt_nm[35];
} caaa_001_generic_identi_32_def;
#define caaa_001_generic_identi_32_def_Size 134
#pragma section caaa_001_generic_identi_31
/* Definition CAAA-001-GENERIC-IDENTI-31 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_identi_31
typedef struct __caaa_001_generic_identi_31
{
   char                            id[35];
   char                            tp[32];
   char                            issr[32];
   char                            shrt_nm[35];
} caaa_001_generic_identi_31_def;
#define caaa_001_generic_identi_31_def_Size 134
#pragma section caaa_001_traceability_1
/* Definition CAAA-001-TRACEABILITY-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_traceability_1
typedef struct __caaa_001_traceability_1
{
   caaa_001_generic_identi_31_def  rlay_id;
   long long                       trac_dt_tm_in;
   long long                       trac_dt_tm_out;
} caaa_001_traceability_1_def;
#define caaa_001_traceability_1_def_Size 150
#pragma section caaa_001_header_7
/* Definition CAAA-001-HEADER-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_header_7
typedef struct __caaa_001_header_7
{
   char                            msg_fctn[32];
   char                            prtcol_vrsn[6];
   char                            xchg_id[3];
   long long                       cre_dt_tm;
   caaa_001_generic_identi_32_def  initg_pty;
   caaa_001_generic_identi_32_def  rcpt_pty;
   caaa_001_traceability_1_def     tracblt[4];
} caaa_001_header_7_def;
#define caaa_001_header_7_def_Size 918
#pragma section caaa_001_acquirer_2
/* Definition CAAA-001-ACQUIRER-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_acquirer_2
typedef struct __caaa_001_acquirer_2
{
   caaa_001_generic_identi_32_def  id;
   char                            params_vrsn[35];
} caaa_001_acquirer_2_def;
#define caaa_001_acquirer_2_def_Size 169
#pragma section caaa_001_organisation_8
/* Definition CAAA-001-ORGANISATION-8 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_organisation_8
typedef struct __caaa_001_organisation_8
{
   caaa_001_generic_identi_32_def  id;
   char                            cmon_nm[70];
   char                            lctn_ctgy[32];
   char                            adr[140];
   char                            ctry_cd[3];
   char                            schme_data[140];
} caaa_001_organisation_8_def;
#define caaa_001_organisation_8_def_Size 519
#pragma section caaa_001_display_capabil_2
/* Definition CAAA-001-DISPLAY-CAPABIL-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_display_capabil_2
typedef struct __caaa_001_display_capabil_2
{
   char                            disp_tp[32];
   char                            nb_of_lines[18];
   char                            line_width[18];
} caaa_001_display_capabil_2_def;
#define caaa_001_display_capabil_2_def_Size 68
#pragma section caaa_001_point_of_inter_2
/* Definition CAAA-001-POINT-OF-INTER-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_point_of_inter_2
typedef struct __caaa_001_point_of_inter_2
{
   char                            card_rdng_cpblties[4][32];
   char                            crdhldr_vrfctn_cpblties[4][32];
   char                            on_line_cpblties[32];
   caaa_001_display_capabil_2_def  disp_cpblties[4];
   char                            prt_line_width[18];
   char                            avlbl_lang[4][2];
} caaa_001_point_of_inter_2_def;
#define caaa_001_point_of_inter_2_def_Size 586
#pragma section caaa_001_point_of_inte_1
/* Definition CAAA-001-POINT-OF-INTE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_point_of_inte_1
typedef struct __caaa_001_point_of_inte_1
{
   char                            itm_nb[35];
   char                            prvdr_id[35];
   char                            id[35];
   char                            srl_nb[35];
} caaa_001_point_of_inte_1_def;
#define caaa_001_point_of_inte_1_def_Size 140
#pragma section caaa_001_point_of_inter_1
/* Definition CAAA-001-POINT-OF-INTER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_point_of_inter_1
typedef struct __caaa_001_point_of_inter_1
{
   char                            vrsn_nb[35];
   char                            sts[32];
} caaa_001_point_of_inter_1_def;
#define caaa_001_point_of_inter_1_def_Size 67
#pragma section caaa_001_generic_identi_48
/* Definition CAAA-001-GENERIC-IDENTI-48 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_identi_48
typedef struct __caaa_001_generic_identi_48
{
   char                            id[35];
   char                            vrsn[35];
   char                            issr[35];
} caaa_001_generic_identi_48_def;
#define caaa_001_generic_identi_48_def_Size 105
#pragma section caaa_001_memory_characte_1
/* Definition CAAA-001-MEMORY-CHARACTE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_memory_characte_1
typedef struct __caaa_001_memory_characte_1
{
   char                            id[35];
   char                            ttl_sz[18];
   char                            free_sz[18];
   char                            unit_rw[32];
} caaa_001_memory_characte_1_def;
#define caaa_001_memory_characte_1_def_Size 103
#pragma section caaa_001_communication_c_2
/* Definition CAAA-001-COMMUNICATION-C-2 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_communication_c_2
typedef struct __caaa_001_communication_c_2
{
   char                            com_tp[32];
   char                            rmot_pty[4][32];
   __int32_t                       actv;
} caaa_001_communication_c_2_def;
#define caaa_001_communication_c_2_def_Size 164
#pragma section caaa_001_point_of_intera_2
/* Definition CAAA-001-POINT-OF-INTERA-2 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_point_of_intera_2
typedef struct __caaa_001_point_of_intera_2
{
   struct
   {
      char                            id[35];
      char                            ttl_sz[18];
      char                            free_sz[18];
      char                            unit_rw[32];
   } mmry[4];
   struct
   {
      char                            com_tp[32];
      char                            rmot_pty[4][32];
      __int32_t                       actv;
   } com[4];
   char                            scty_accs_mdls[18];
   char                            sbcbr_idnty_mdls[18];
   char                            key_chck_val[35];
} caaa_001_point_of_intera_2_def;
#define caaa_001_point_of_intera_2_def_Size 1139
#pragma section caaa_001_point_of_intera_1
/* Definition CAAA-001-POINT-OF-INTERA-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_point_of_intera_1
typedef struct __caaa_001_point_of_intera_1
{
   char                            tp[32];
   char                            assgnr[4][35];
   long long                       dlvry_dt;
   long long                       xprtn_dt;
   char                            nb[35];
} caaa_001_point_of_intera_1_def;
#define caaa_001_point_of_intera_1_def_Size 223
#pragma section caaa_001_point_of_intera_4
/* Definition CAAA-001-POINT-OF-INTERA-4 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_point_of_intera_4
typedef struct __caaa_001_point_of_intera_4
{
   char                            tp[32];
   struct
   {
      char                            itm_nb[35];
      char                            prvdr_id[35];
      char                            id[35];
      char                            srl_nb[35];
   } id;
   struct
   {
      char                            vrsn_nb[35];
      char                            sts[32];
   } sts;
   struct
   {
      char                            id[35];
      char                            vrsn[35];
      char                            issr[35];
   } std_cmplc[4];
   char                            filler_0;
   struct
   {
      struct
      {
         char                            id[35];
         char                            ttl_sz[18];
         char                            free_sz[18];
         char                            unit_rw[32];
      } mmry[4];
      struct
      {
         char                            com_tp[32];
         char                            rmot_pty[4][32];
         __int32_t                       actv;
      } com[4];
      char                            scty_accs_mdls[18];
      char                            sbcbr_idnty_mdls[18];
      char                            key_chck_val[35];
   } chrtcs;
   char                            filler_1;
   struct
   {
      char                            tp[32];
      char                            assgnr[4][35];
      long long                       dlvry_dt;
      long long                       xprtn_dt;
      char                            nb[35];
      char                            filler_2;
   } assmnt[4];
} caaa_001_point_of_intera_4_def;
#define caaa_001_point_of_intera_4_def_Size 2696
#pragma section caaa_001_point_of_intera_3
/* Definition CAAA-001-POINT-OF-INTERA-3 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_point_of_intera_3
typedef struct __caaa_001_point_of_intera_3
{
   struct
   {
      char                            id[35];
      char                            tp[32];
      char                            issr[32];
      char                            shrt_nm[35];
   } id;
   char                            sys_nm[70];
   char                            grp_id[35];
   struct
   {
      char                            card_rdng_cpblties[4][32];
      char                            crdhldr_vrfctn_cpblties[4][32];
      char                            on_line_cpblties[32];
      struct
      {
         char                            disp_tp[32];
         char                            nb_of_lines[18];
         char                            line_width[18];
      } disp_cpblties[4];
      char                            prt_line_width[18];
      char                            avlbl_lang[4][2];
   } cpblties;
   char                            filler_0;
   struct
   {
      char                            tp[32];
      struct
      {
         char                            itm_nb[35];
         char                            prvdr_id[35];
         char                            id[35];
         char                            srl_nb[35];
      } id;
      struct
      {
         char                            vrsn_nb[35];
         char                            sts[32];
      } sts;
      struct
      {
         char                            id[35];
         char                            vrsn[35];
         char                            issr[35];
      } std_cmplc[4];
      char                            filler_1;
      struct
      {
         struct
         {
            char                            id[35];
            char                            ttl_sz[18];
            char                            free_sz[18];
            char                            unit_rw[32];
         } mmry[4];
         struct
         {
            char                            com_tp[32];
            char                            rmot_pty[4][32];
            __int32_t                       actv;
         } com[4];
         char                            scty_accs_mdls[18];
         char                            sbcbr_idnty_mdls[18];
         char                            key_chck_val[35];
      } chrtcs;
      char                            filler_2;
      struct
      {
         char                            tp[32];
         char                            assgnr[4][35];
         long long                       dlvry_dt;
         long long                       xprtn_dt;
         char                            nb[35];
         char                            filler_3;
      } assmnt[4];
   } cmpnt[4];
} caaa_001_point_of_intera_3_def;
#define caaa_001_point_of_intera_3_def_Size 11610
#pragma section caaa_001_issuer_and_seri_1
/* Definition CAAA-001-ISSUER-AND-SERI-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_issuer_and_seri_1
typedef struct __caaa_001_issuer_and_seri_1
{
   caaa_001_certificate_iss_1_def  issr;
   char                            srl_nb[35];
} caaa_001_issuer_and_seri_1_def;
#define caaa_001_issuer_and_seri_1_def_Size 723
#pragma section caaa_001_certificate_ide_1
/* Definition CAAA-001-CERTIFICATE-IDE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_certificate_ide_1
typedef struct __caaa_001_certificate_ide_1
{
   caaa_001_issuer_and_seri_1_def  issr_and_srl_nb;
} caaa_001_certificate_ide_1_def;
#define caaa_001_certificate_ide_1_def_Size 723
#pragma section caaa_001_parameter_3
/* Definition CAAA-001-PARAMETER-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_parameter_3
typedef struct __caaa_001_parameter_3
{
   char                            dgst_algo[32];
} caaa_001_parameter_3_def;
#define caaa_001_parameter_3_def_Size 32
#pragma section caaa_001_algorithm_ident_8
/* Definition CAAA-001-ALGORITHM-IDENT-8 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_algorithm_ident_8
typedef struct __caaa_001_algorithm_ident_8
{
   char                            algo[32];
   caaa_001_parameter_3_def        param;
} caaa_001_algorithm_ident_8_def;
#define caaa_001_algorithm_ident_8_def_Size 64
#pragma section caaa_001_parameter_2
/* Definition CAAA-001-PARAMETER-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_parameter_2
typedef struct __caaa_001_parameter_2
{
   char                            dgst_algo[32];
   caaa_001_algorithm_ident_8_def  msk_gnrtr_algo;
} caaa_001_parameter_2_def;
#define caaa_001_parameter_2_def_Size 96
#pragma section caaa_001_algorithm_ident_7
/* Definition CAAA-001-ALGORITHM-IDENT-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_algorithm_ident_7
typedef struct __caaa_001_algorithm_ident_7
{
   char                            algo[32];
   caaa_001_parameter_2_def        param;
} caaa_001_algorithm_ident_7_def;
#define caaa_001_algorithm_ident_7_def_Size 128
#pragma section caaa_001_key_transport_3
/* Definition CAAA-001-KEY-TRANSPORT-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_key_transport_3
typedef struct __caaa_001_key_transport_3
{
   char                            vrsn[18];
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            attr_tp[32];
               char                            attr_val[140];
            } rltv_dstngshd_nm[4];
         } issr;
         char                            srl_nb[35];
      } issr_and_srl_nb;
   } rcpt_id;
   struct
   {
      char                            algo[32];
      struct
      {
         char                            dgst_algo[32];
         struct
         {
            char                            algo[32];
            struct
            {
               char                            dgst_algo[32];
            } param;
         } msk_gnrtr_algo;
      } param;
   } key_ncrptn_algo;
   char                            ncrptd_key[256];
} caaa_001_key_transport_3_def;
#define caaa_001_key_transport_3_def_Size 1125
#pragma section caaa_001_recipient_choice
/* Definition CAAA-001-RECIPIENT-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_recipient_choice
typedef struct __caaa_001_recipient_choice
{
   struct
   {
      char                            vrsn[18];
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            attr_tp[32];
                  char                            attr_val[140];
               } rltv_dstngshd_nm[4];
            } issr;
            char                            srl_nb[35];
         } issr_and_srl_nb;
      } rcpt_id;
      struct
      {
         char                            algo[32];
         struct
         {
            char                            dgst_algo[32];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            dgst_algo[32];
               } param;
            } msk_gnrtr_algo;
         } param;
      } key_ncrptn_algo;
      char                            ncrptd_key[256];
   } key_trnsprt;
   struct
   {
      char                            vrsn[18];
      struct
      {
         char                            key_id[140];
         char                            key_vrsn[32];
         char                            derivtn_id[16];
      } kekid;
      struct
      {
         char                            algo[32];
         struct
         {
            char                            initlstn_vctr[256];
         } param;
      } key_ncrptn_algo;
      char                            ncrptd_key[140];
   } kek;
   struct
   {
      char                            key_id[140];
      char                            key_vrsn[32];
      char                            derivtn_id[16];
   } key_idr;
} caaa_001_recipient_choice_def;
#define caaa_001_recipient_choice_def_Size 1947
#pragma section caaa_001_algorithm_ident_6
/* Definition CAAA-001-ALGORITHM-IDENT-6 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_algorithm_ident_6
typedef struct __caaa_001_algorithm_ident_6
{
   char                            algo[32];
   caaa_001_parameter_1_def        param;
} caaa_001_algorithm_ident_6_def;
#define caaa_001_algorithm_ident_6_def_Size 288
#pragma section caaa_001_encrypted_conte_2
/* Definition CAAA-001-ENCRYPTED-CONTE-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_encrypted_conte_2
typedef struct __caaa_001_encrypted_conte_2
{
   char                            cntt_tp[32];
   caaa_001_algorithm_ident_6_def  cntt_ncrptn_algo;
   char                            ncrptd_data[256];
} caaa_001_encrypted_conte_2_def;
#define caaa_001_encrypted_conte_2_def_Size 576
#pragma section caaa_001_enveloped_data_3
/* Definition CAAA-001-ENVELOPED-DATA-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_enveloped_data_3
typedef struct __caaa_001_enveloped_data_3
{
   char                            vrsn[18];
   struct
   {
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            attr_tp[32];
                     char                            attr_val[140];
                  } rltv_dstngshd_nm[4];
               } issr;
               char                            srl_nb[35];
            } issr_and_srl_nb;
         } rcpt_id;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            dgst_algo[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                  } param;
               } msk_gnrtr_algo;
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[256];
      } key_trnsprt;
      struct
      {
         char                            vrsn[18];
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } kekid;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[140];
      } kek;
      struct
      {
         char                            key_id[140];
         char                            key_vrsn[32];
         char                            derivtn_id[16];
      } key_idr;
   } rcpt[4];
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            algo[32];
         struct
         {
            char                            initlstn_vctr[256];
         } param;
      } cntt_ncrptn_algo;
      char                            ncrptd_data[256];
   } ncrptd_cntt;
} caaa_001_enveloped_data_3_def;
#define caaa_001_enveloped_data_3_def_Size 8382
#pragma section caaa_001_content_informa_7
/* Definition CAAA-001-CONTENT-INFORMA-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_content_informa_7
typedef struct __caaa_001_content_informa_7
{
   char                            cntt_tp[32];
   struct
   {
      char                            vrsn[18];
      struct
      {
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            attr_tp[32];
                        char                            attr_val[140];
                     } rltv_dstngshd_nm[4];
                  } issr;
                  char                            srl_nb[35];
               } issr_and_srl_nb;
            } rcpt_id;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            dgst_algo[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                     } param;
                  } msk_gnrtr_algo;
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[256];
         } key_trnsprt;
         struct
         {
            char                            vrsn[18];
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } kekid;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[140];
         } kek;
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } key_idr;
      } rcpt[4];
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } cntt_ncrptn_algo;
         char                            ncrptd_data[256];
      } ncrptd_cntt;
   } envlpd_data;
} caaa_001_content_informa_7_def;
#define caaa_001_content_informa_7_def_Size 8414
#pragma section caaa_001_track_data_1
/* Definition CAAA-001-TRACK-DATA-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_track_data_1
typedef struct __caaa_001_track_data_1
{
   char                            trck_nb;
   char                            trck_val[140];
} caaa_001_track_data_1_def;
#define caaa_001_track_data_1_def_Size 141
#pragma section caaa_001_card_security_i_1
/* Definition CAAA-001-CARD-SECURITY-I-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_card_security_i_1
typedef struct __caaa_001_card_security_i_1
{
   char                            cscmgmt[32];
   char                            cscval[4];
} caaa_001_card_security_i_1_def;
#define caaa_001_card_security_i_1_def_Size 36
#pragma section caaa_001_plain_card_data_4
/* Definition CAAA-001-PLAIN-CARD-DATA-4 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_plain_card_data_4
typedef struct __caaa_001_plain_card_data_4
{
   char                            pan[28];
   char                            card_seq_nb[3];
   char                            fctv_dt[10];
   char                            xpry_dt[10];
   char                            svc_cd[3];
   struct
   {
      char                            trck_nb;
      char                            trck_val[140];
   } trck_data[4];
   struct
   {
      char                            cscmgmt[32];
      char                            cscval[4];
   } card_scty_cd;
} caaa_001_plain_card_data_4_def;
#define caaa_001_plain_card_data_4_def_Size 654
#pragma section caaa_001_payment_card_7
/* Definition CAAA-001-PAYMENT-CARD-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_payment_card_7
typedef struct __caaa_001_payment_card_7
{
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            attr_tp[32];
                           char                            attr_val[140];
                        } rltv_dstngshd_nm[4];
                     } issr;
                     char                            srl_nb[35];
                  } issr_and_srl_nb;
               } rcpt_id;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                        } param;
                     } msk_gnrtr_algo;
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[256];
            } key_trnsprt;
            struct
            {
               char                            vrsn[18];
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } kekid;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[140];
            } kek;
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } key_idr;
         } rcpt[4];
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } cntt_ncrptn_algo;
            char                            ncrptd_data[256];
         } ncrptd_cntt;
      } envlpd_data;
   } prtctd_card_data;
   struct
   {
      char                            pan[28];
      char                            card_seq_nb[3];
      char                            fctv_dt[10];
      char                            xpry_dt[10];
      char                            svc_cd[3];
      struct
      {
         char                            trck_nb;
         char                            trck_val[140];
      } trck_data[4];
      struct
      {
         char                            cscmgmt[32];
         char                            cscval[4];
      } card_scty_cd;
   } plain_card_data;
   char                            card_ctry_cd[3];
   char                            card_ccy_cd[3];
   char                            card_pdct_prfl[3];
   char                            card_brnd[35];
   char                            addtl_card_data[70];
} caaa_001_payment_card_7_def;
#define caaa_001_payment_card_7_def_Size 9182
#pragma section caaa_001_generic_identif_4
/* Definition CAAA-001-GENERIC-IDENTIF-4 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_identif_4
typedef struct __caaa_001_generic_identif_4
{
   char                            id[35];
   char                            id_tp[35];
} caaa_001_generic_identif_4_def;
#define caaa_001_generic_identif_4_def_Size 70
#pragma section caaa_001_person_identifi_7
/* Definition CAAA-001-PERSON-IDENTIFI-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_person_identifi_7
typedef struct __caaa_001_person_identifi_7
{
   char                            drvrs_lic_nb[35];
   char                            cstmr_nb[35];
   char                            scl_scty_nb[35];
   char                            aln_regn_nb[35];
   char                            pspt_nb[35];
   char                            tax_id_nb[35];
   char                            idnty_card_nb[35];
   char                            mplyr_id_nb[35];
   char                            mplyee_id_nb[35];
   char                            email_adr[256];
   caaa_001_date_and_pl_birth_def  dt_and_plc_of_birth;
   caaa_001_generic_identif_4_def  othr[4];
} caaa_001_person_identifi_7_def;
#define caaa_001_person_identifi_7_def_Size 932
#pragma section caaa_001_postal_address_13
/* Definition CAAA-001-POSTAL-ADDRESS-13 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_postal_address_13
typedef struct __caaa_001_postal_address_13
{
   char                            adr_line[2][70];
   char                            strt_nm[70];
   char                            bldg_nb[16];
   char                            pst_cd[16];
   char                            twn_nm[35];
   char                            ctry_sub_dvsn[35];
   char                            ctry[2];
} caaa_001_postal_address_13_def;
#define caaa_001_postal_address_13_def_Size 314
#pragma section caaa_001_on_line_pin_3
/* Definition CAAA-001-ON-LINE-PIN-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_on_line_pin_3
typedef struct __caaa_001_on_line_pin_3
{
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            attr_tp[32];
                           char                            attr_val[140];
                        } rltv_dstngshd_nm[4];
                     } issr;
                     char                            srl_nb[35];
                  } issr_and_srl_nb;
               } rcpt_id;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                        } param;
                     } msk_gnrtr_algo;
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[256];
            } key_trnsprt;
            struct
            {
               char                            vrsn[18];
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } kekid;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[140];
            } kek;
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } key_idr;
         } rcpt[4];
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } cntt_ncrptn_algo;
            char                            ncrptd_data[256];
         } ncrptd_cntt;
      } envlpd_data;
   } ncrptd_pinblck;
   char                            pinfrmt[32];
   char                            addtl_inpt[35];
} caaa_001_on_line_pin_3_def;
#define caaa_001_on_line_pin_3_def_Size 8481
#pragma section caaa_001_cardholder_auth_5
/* Definition CAAA-001-CARDHOLDER-AUTH-5 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_cardholder_auth_5
typedef struct __caaa_001_cardholder_auth_5
{
   char                            authntcn_mtd[32];
   char                            authntcn_ntty[32];
   char                            authntcn_val[40];
   struct
   {
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                           } rltv_dstngshd_nm[4];
                        } issr;
                        char                            srl_nb[35];
                     } issr_and_srl_nb;
                  } rcpt_id;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                           } param;
                        } msk_gnrtr_algo;
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[256];
               } key_trnsprt;
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } kekid;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[140];
               } kek;
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } key_idr;
            } rcpt[4];
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } cntt_ncrptn_algo;
               char                            ncrptd_data[256];
            } ncrptd_cntt;
         } envlpd_data;
      } ncrptd_pinblck;
      char                            pinfrmt[32];
      char                            addtl_inpt[35];
   } crdhldr_on_line_pin;
   char                            authntcn_colltn_ind[35];
} caaa_001_cardholder_auth_5_def;
#define caaa_001_cardholder_auth_5_def_Size 8620
#pragma section caaa_001_address_verific_1
/* Definition CAAA-001-ADDRESS-VERIFIC-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_address_verific_1
typedef struct __caaa_001_address_verific_1
{
   char                            adr_dgts[5];
   char                            pstl_cd_dgts[5];
} caaa_001_address_verific_1_def;
#define caaa_001_address_verific_1_def_Size 10
#pragma section caaa_001_cardholder_5
/* Definition CAAA-001-CARDHOLDER-5 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_cardholder_5
typedef struct __caaa_001_cardholder_5
{
   struct
   {
      char                            drvrs_lic_nb[35];
      char                            cstmr_nb[35];
      char                            scl_scty_nb[35];
      char                            aln_regn_nb[35];
      char                            pspt_nb[35];
      char                            tax_id_nb[35];
      char                            idnty_card_nb[35];
      char                            mplyr_id_nb[35];
      char                            mplyee_id_nb[35];
      char                            email_adr[256];
      char                            filler_0;
      struct
      {
         long long                       birth_dt;
         char                            prvc_of_birth[35];
         char                            city_of_birth[35];
         char                            ctry_of_birth[2];
      } dt_and_plc_of_birth;
      struct
      {
         char                            id[35];
         char                            id_tp[35];
      } othr[4];
   } id;
   char                            nm[45];
   char                            lang[2];
   struct
   {
      char                            adr_line[2][70];
      char                            strt_nm[70];
      char                            bldg_nb[16];
      char                            pst_cd[16];
      char                            twn_nm[35];
      char                            ctry_sub_dvsn[35];
      char                            ctry[2];
   } bllg_adr;
   struct
   {
      char                            adr_line[2][70];
      char                            strt_nm[70];
      char                            bldg_nb[16];
      char                            pst_cd[16];
      char                            twn_nm[35];
      char                            ctry_sub_dvsn[35];
      char                            ctry[2];
   } shppg_adr;
   struct
   {
      char                            authntcn_mtd[32];
      char                            authntcn_ntty[32];
      char                            authntcn_val[40];
      struct
      {
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                           } issr;
                           char                            srl_nb[35];
                        } issr_and_srl_nb;
                     } rcpt_id;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                           } msk_gnrtr_algo;
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[256];
                  } key_trnsprt;
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } kekid;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[140];
                  } kek;
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } key_idr;
               } rcpt[4];
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } cntt_ncrptn_algo;
                  char                            ncrptd_data[256];
               } ncrptd_cntt;
            } envlpd_data;
         } ncrptd_pinblck;
         char                            pinfrmt[32];
         char                            addtl_inpt[35];
      } crdhldr_on_line_pin;
      char                            authntcn_colltn_ind[35];
   } authntcn[4];
   struct
   {
      char                            adr_dgts[5];
      char                            pstl_cd_dgts[5];
   } adr_vrfctn;
   char                            prsnl_data[70];
} caaa_001_cardholder_5_def;
#define caaa_001_cardholder_5_def_Size 36167
#pragma section caaa_001_card_payment_e_20
/* Definition CAAA-001-CARD-PAYMENT-E-20 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_card_payment_e_20
typedef struct __caaa_001_card_payment_e_20
{
   struct
   {
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } id;
      char                            params_vrsn[35];
   } acqrr;
   struct
   {
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } id;
      char                            cmon_nm[70];
      char                            lctn_ctgy[32];
      char                            adr[140];
      char                            ctry_cd[3];
      char                            schme_data[140];
   } mrchnt;
   struct
   {
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } id;
      char                            sys_nm[70];
      char                            grp_id[35];
      struct
      {
         char                            card_rdng_cpblties[4][32];
         char                            crdhldr_vrfctn_cpblties[4][32];
         char                            on_line_cpblties[32];
         struct
         {
            char                            disp_tp[32];
            char                            nb_of_lines[18];
            char                            line_width[18];
         } disp_cpblties[4];
         char                            prt_line_width[18];
         char                            avlbl_lang[4][2];
      } cpblties;
      char                            filler_0;
      struct
      {
         char                            tp[32];
         struct
         {
            char                            itm_nb[35];
            char                            prvdr_id[35];
            char                            id[35];
            char                            srl_nb[35];
         } id;
         struct
         {
            char                            vrsn_nb[35];
            char                            sts[32];
         } sts;
         struct
         {
            char                            id[35];
            char                            vrsn[35];
            char                            issr[35];
         } std_cmplc[4];
         char                            filler_1;
         struct
         {
            struct
            {
               char                            id[35];
               char                            ttl_sz[18];
               char                            free_sz[18];
               char                            unit_rw[32];
            } mmry[4];
            struct
            {
               char                            com_tp[32];
               char                            rmot_pty[4][32];
               __int32_t                       actv;
            } com[4];
            char                            scty_accs_mdls[18];
            char                            sbcbr_idnty_mdls[18];
            char                            key_chck_val[35];
         } chrtcs;
         char                            filler_2;
         struct
         {
            char                            tp[32];
            char                            assgnr[4][35];
            long long                       dlvry_dt;
            long long                       xprtn_dt;
            char                            nb[35];
            char                            filler_3;
         } assmnt[4];
      } cmpnt[4];
   } poi;
   struct
   {
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                           } rltv_dstngshd_nm[4];
                        } issr;
                        char                            srl_nb[35];
                     } issr_and_srl_nb;
                  } rcpt_id;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                           } param;
                        } msk_gnrtr_algo;
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[256];
               } key_trnsprt;
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } kekid;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[140];
               } kek;
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } key_idr;
            } rcpt[4];
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } cntt_ncrptn_algo;
               char                            ncrptd_data[256];
            } ncrptd_cntt;
         } envlpd_data;
      } prtctd_card_data;
      struct
      {
         char                            pan[28];
         char                            card_seq_nb[3];
         char                            fctv_dt[10];
         char                            xpry_dt[10];
         char                            svc_cd[3];
         struct
         {
            char                            trck_nb;
            char                            trck_val[140];
         } trck_data[4];
         struct
         {
            char                            cscmgmt[32];
            char                            cscval[4];
         } card_scty_cd;
      } plain_card_data;
      char                            card_ctry_cd[3];
      char                            card_ccy_cd[3];
      char                            card_pdct_prfl[3];
      char                            card_brnd[35];
      char                            addtl_card_data[70];
   } card;
   struct
   {
      struct
      {
         char                            drvrs_lic_nb[35];
         char                            cstmr_nb[35];
         char                            scl_scty_nb[35];
         char                            aln_regn_nb[35];
         char                            pspt_nb[35];
         char                            tax_id_nb[35];
         char                            idnty_card_nb[35];
         char                            mplyr_id_nb[35];
         char                            mplyee_id_nb[35];
         char                            email_adr[256];
         char                            filler_4;
         struct
         {
            long long                       birth_dt;
            char                            prvc_of_birth[35];
            char                            city_of_birth[35];
            char                            ctry_of_birth[2];
         } dt_and_plc_of_birth;
         struct
         {
            char                            id[35];
            char                            id_tp[35];
         } othr[4];
      } id;
      char                            nm[45];
      char                            lang[2];
      struct
      {
         char                            adr_line[2][70];
         char                            strt_nm[70];
         char                            bldg_nb[16];
         char                            pst_cd[16];
         char                            twn_nm[35];
         char                            ctry_sub_dvsn[35];
         char                            ctry[2];
      } bllg_adr;
      struct
      {
         char                            adr_line[2][70];
         char                            strt_nm[70];
         char                            bldg_nb[16];
         char                            pst_cd[16];
         char                            twn_nm[35];
         char                            ctry_sub_dvsn[35];
         char                            ctry[2];
      } shppg_adr;
      struct
      {
         char                            authntcn_mtd[32];
         char                            authntcn_ntty[32];
         char                            authntcn_val[40];
         struct
         {
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                           } issr_and_srl_nb;
                        } rcpt_id;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[256];
                     } key_trnsprt;
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } kekid;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[140];
                     } kek;
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } key_idr;
                  } rcpt[4];
                  struct
                  {
                     char                            cntt_tp[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } cntt_ncrptn_algo;
                     char                            ncrptd_data[256];
                  } ncrptd_cntt;
               } envlpd_data;
            } ncrptd_pinblck;
            char                            pinfrmt[32];
            char                            addtl_inpt[35];
         } crdhldr_on_line_pin;
         char                            authntcn_colltn_ind[35];
      } authntcn[4];
      struct
      {
         char                            adr_dgts[5];
         char                            pstl_cd_dgts[5];
      } adr_vrfctn;
      char                            prsnl_data[70];
   } crdhldr;
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            attr_tp[32];
                           char                            attr_val[140];
                        } rltv_dstngshd_nm[4];
                     } issr;
                     char                            srl_nb[35];
                  } issr_and_srl_nb;
               } rcpt_id;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                        } param;
                     } msk_gnrtr_algo;
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[256];
            } key_trnsprt;
            struct
            {
               char                            vrsn[18];
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } kekid;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[140];
            } kek;
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } key_idr;
         } rcpt[4];
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } cntt_ncrptn_algo;
            char                            ncrptd_data[256];
         } ncrptd_cntt;
      } envlpd_data;
   } prtctd_crdhldr_data;
} caaa_001_card_payment_e_20_def;
#define caaa_001_card_payment_e_20_def_Size 66061
#pragma section caaa_001_payment_context_5
/* Definition CAAA-001-PAYMENT-CONTEXT-5 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_payment_context_5
typedef struct __caaa_001_payment_context_5
{
   __int32_t                       card_pres;
   __int32_t                       crdhldr_pres;
   char                            attndnc_cntxt[32];
   char                            tx_envt[32];
   char                            tx_chanl[32];
   __int32_t                       attndnt_msg_cpbl;
   char                            attndnt_lang[2];
   char                            card_data_ntry_md[32];
   __int32_t                       fllbck_ind;
   char                            spprtd_optn[4][32];
} caaa_001_payment_context_5_def;
#define caaa_001_payment_context_5_def_Size 274
#pragma section caaa_001_sale_context_1
/* Definition CAAA-001-SALE-CONTEXT-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_sale_context_1
typedef struct __caaa_001_sale_context_1
{
   char                            sale_id[35];
   char                            sale_ref_nb[35];
   char                            sale_rcncltn_id[35];
   char                            cshr_id[35];
   char                            shft_nb[2];
   char                            addtl_sale_data[70];
} caaa_001_sale_context_1_def;
#define caaa_001_sale_context_1_def_Size 212
#pragma section caaa_001_card_payment_co_5
/* Definition CAAA-001-CARD-PAYMENT-CO-5 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_card_payment_co_5
typedef struct __caaa_001_card_payment_co_5
{
   caaa_001_payment_context_5_def  pmt_cntxt;
   caaa_001_sale_context_1_def     sale_cntxt;
} caaa_001_card_payment_co_5_def;
#define caaa_001_card_payment_co_5_def_Size 486
#pragma section caaa_001_transaction_ide_1
/* Definition CAAA-001-TRANSACTION-IDE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_transaction_ide_1
typedef struct __caaa_001_transaction_ide_1
{
   long long                       tx_dt_tm;
   char                            tx_ref[35];
} caaa_001_transaction_ide_1_def;
#define caaa_001_transaction_ide_1_def_Size 43
#pragma section caaa_001_generic_identi_33
/* Definition CAAA-001-GENERIC-IDENTI-33 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_generic_identi_33
typedef struct __caaa_001_generic_identi_33
{
   char                            id[35];
   char                            tp[32];
   char                            issr[32];
   char                            shrt_nm[35];
} caaa_001_generic_identi_33_def;
#define caaa_001_generic_identi_33_def_Size 134
#pragma section caaa_001_response_type_1
/* Definition CAAA-001-RESPONSE-TYPE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_response_type_1
typedef struct __caaa_001_response_type_1
{
   char                            rspn[32];
   char                            rspn_rsn[35];
} caaa_001_response_type_1_def;
#define caaa_001_response_type_1_def_Size 67
#pragma section caaa_001_card_payment_tr_1
/* Definition CAAA-001-CARD-PAYMENT-TR-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_card_payment_tr_1
typedef struct __caaa_001_card_payment_tr_1
{
   struct
   {
      char                            id[35];
      char                            tp[32];
      char                            issr[32];
      char                            shrt_nm[35];
   } authstn_ntty;
   struct
   {
      char                            rspn[32];
      char                            rspn_rsn[35];
   } rspn_to_authstn;
   char                            authstn_cd[8];
} caaa_001_card_payment_tr_1_def;
#define caaa_001_card_payment_tr_1_def_Size 209
#pragma section caaa_001_card_payment_t_21
/* Definition CAAA-001-CARD-PAYMENT-T-21 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_card_payment_t_21
typedef struct __caaa_001_card_payment_t_21
{
   char                            sale_ref_id[35];
   char                            filler_0;
   struct
   {
      long long                       tx_dt_tm;
      char                            tx_ref[35];
   } tx_id;
   struct
   {
      char                            id[35];
      char                            tp[32];
      char                            issr[32];
      char                            shrt_nm[35];
   } poiid;
   char                            initr_tx_id[35];
   char                            rcpt_tx_id[35];
   char                            tx_tp[32];
   char                            addtl_svc[4][32];
   char                            svc_attr[32];
   struct
   {
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } authstn_ntty;
      struct
      {
         char                            rspn[32];
         char                            rspn_rsn[35];
      } rspn_to_authstn;
      char                            authstn_cd[8];
   } tx_rslt;
} caaa_001_card_payment_t_21_def;
#define caaa_001_card_payment_t_21_def_Size 684
#pragma section caaa_001_detailed_amount_4
/* Definition CAAA-001-DETAILED-AMOUNT-4 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_detailed_amount_4
typedef struct __caaa_001_detailed_amount_4
{
   char                            amt[18];
   char                            labl[140];
} caaa_001_detailed_amount_4_def;
#define caaa_001_detailed_amount_4_def_Size 158
#pragma section caaa_001_detailed_amount_5
/* Definition CAAA-001-DETAILED-AMOUNT-5 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_detailed_amount_5
typedef struct __caaa_001_detailed_amount_5
{
   char                            csh_bck[18];
   char                            grtty[18];
   caaa_001_detailed_amount_4_def  fees[4];
   caaa_001_detailed_amount_4_def  rbt[4];
   caaa_001_detailed_amount_4_def  val_added_tax[4];
} caaa_001_detailed_amount_5_def;
#define caaa_001_detailed_amount_5_def_Size 1932
#pragma section caaa_001_commission_19
/* Definition CAAA-001-COMMISSION-19 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_commission_19
typedef struct __caaa_001_commission_19
{
   char                            amt[18];
   char                            addtl_inf[256];
} caaa_001_commission_19_def;
#define caaa_001_commission_19_def_Size 274
#pragma section caaa_001_commission_18
/* Definition CAAA-001-COMMISSION-18 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_commission_18
typedef struct __caaa_001_commission_18
{
   char                            rate[18];
   char                            addtl_inf[256];
} caaa_001_commission_18_def;
#define caaa_001_commission_18_def_Size 274
#pragma section caaa_001_currency_conver_1
/* Definition CAAA-001-CURRENCY-CONVER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_currency_conver_1
typedef struct __caaa_001_currency_conver_1
{
   char                            ccy_convs_id[35];
   char                            rslt[32];
   char                            rspn_rsn[35];
   char                            trgt_ccy[3];
   char                            trgt_ccy_nmrc[3];
   char                            trgt_ccy_dcml[18];
   char                            trgt_ccy_nm[35];
   char                            rsltg_amt[18];
   char                            xchg_rate[18];
   char                            nvrtd_xchg_rate[18];
   char                            filler_0;
   long long                       qtn_dt;
   long long                       vld_until;
   char                            src_ccy[3];
   char                            src_ccy_nmrc[3];
   char                            src_ccy_dcml[18];
   char                            src_ccy_nm[35];
   char                            orgnl_amt[18];
   struct
   {
      char                            amt[18];
      char                            addtl_inf[256];
   } comssn_dtls[4];
   struct
   {
      char                            rate[18];
      char                            addtl_inf[256];
   } mrk_up_dtls[4];
   char                            dclrtn_dtls[256];
} caaa_001_currency_conver_1_def;
#define caaa_001_currency_conver_1_def_Size 2757
#pragma section caaa_001_currency_a_amount
/* Definition CAAA-001-CURRENCY-A-AMOUNT created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_currency_a_amount
typedef struct __caaa_001_currency_a_amount
{
   char                            filler_0;
} caaa_001_currency_a_amount_def;
#define caaa_001_currency_a_amount_def_Size 1
#pragma section caaa_001_recurring_trans_2
/* Definition CAAA-001-RECURRING-TRANS-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_recurring_trans_2
typedef struct __caaa_001_recurring_trans_2
{
   char                            instlmt_plan[4][32];
   char                            plan_id[35];
   char                            seq_nb[18];
   char                            prd_unit[32];
   char                            instlmt_prd[18];
   char                            ttl_nb_of_pmts[18];
   char                            filler_0;
   long long                       frst_pmt_dt;
   struct
   {
      char                            filler_1;
   } ttl_amt;
   char                            frst_amt[18];
   char                            chrgs[18];
} caaa_001_recurring_trans_2_def;
#define caaa_001_recurring_trans_2_def_Size 295
#pragma section caaa_001_detailed_amount_6
/* Definition CAAA-001-DETAILED-AMOUNT-6 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_detailed_amount_6
typedef struct __caaa_001_detailed_amount_6
{
   char                            amt[18];
   long long                       dt_tm;
   char                            card_data_ntry_md[32];
   char                            iccrltd_data[256];
   char                            labl[140];
} caaa_001_detailed_amount_6_def;
#define caaa_001_detailed_amount_6_def_Size 454
#pragma section caaa_001_aggregation_tra_1
/* Definition CAAA-001-AGGREGATION-TRA-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_aggregation_tra_1
typedef struct __caaa_001_aggregation_tra_1
{
   long long                       frst_pmt_dt_tm;
   long long                       last_pmt_dt_tm;
   char                            nb_of_pmts[18];
   caaa_001_detailed_amount_6_def  indv_pmt[4];
} caaa_001_aggregation_tra_1_def;
#define caaa_001_aggregation_tra_1_def_Size 1850
#pragma section caaa_001_product_1
/* Definition CAAA-001-PRODUCT-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_1
typedef struct __caaa_001_product_1
{
   char                            pdct_cd[70];
   char                            unit_of_measr[32];
   char                            pdct_qty[18];
   char                            unit_pric[18];
   char                            pdct_amt[18];
   char                            tax_tp[35];
   char                            addtl_pdct_inf[35];
} caaa_001_product_1_def;
#define caaa_001_product_1_def_Size 226
#pragma section caaa_001_additional_info_6
/* Definition CAAA-001-ADDITIONAL-INFO-6 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_additional_info_6
typedef struct __caaa_001_additional_info_6
{
   char                            inf_tp[4];
   char                            inf_val[256];
} caaa_001_additional_info_6_def;
#define caaa_001_additional_info_6_def_Size 260
#pragma section caaa_001_invoice_header_1
/* Definition CAAA-001-INVOICE-HEADER-1 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_invoice_header_1
typedef struct __caaa_001_invoice_header_1
{
   char                            id[35];
   char                            tp_cd[4];
   char                            nm[35];
   long long                       isse_dt_tm;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } issr;
   char                            lang_cd[32];
   __int32_t                       cpy_ind;
   char                            doc_purp[4];
   struct
   {
      char                            inf_tp[4];
      char                            inf_val[256];
   } incl_note[4];
} caaa_001_invoice_header_1_def;
#define caaa_001_invoice_header_1_def_Size 8816
#pragma section caaa_001_date_forma_choice
/* Definition CAAA-001-DATE-FORMA-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_date_forma_choice
typedef struct __caaa_001_date_forma_choice
{
   caaa_001_date_and_d_choice_def  dt;
   char                            not_spcfd_dt[32];
   caaa_001_generic_identi_13_def  prtry;
} caaa_001_date_forma_choice_def;
#define caaa_001_date_forma_choice_def_Size 122
#pragma section caaa_001_period_1
/* Definition CAAA-001-PERIOD-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_period_1
typedef struct __caaa_001_period_1
{
   caaa_001_date_forma_choice_def  start_dt;
   caaa_001_date_forma_choice_def  end_dt;
} caaa_001_period_1_def;
#define caaa_001_period_1_def_Size 244
#pragma section caaa_001_trade_delivery_1
/* Definition CAAA-001-TRADE-DELIVERY-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_trade_delivery_1
typedef struct __caaa_001_trade_delivery_1
{
   struct
   {
      struct
      {
         struct
         {
            long long                       dt;
            long long                       dt_tm;
         } dt;
         char                            not_spcfd_dt[32];
         struct
         {
            char                            id[4];
            char                            schme_nm[35];
            char                            issr[35];
         } prtry;
      } start_dt;
      struct
      {
         struct
         {
            long long                       dt;
            long long                       dt_tm;
         } dt;
         char                            not_spcfd_dt[32];
         struct
         {
            char                            id[4];
            char                            schme_nm[35];
            char                            issr[35];
         } prtry;
      } end_dt;
   } dlvry_prd;
   long long                       dlvry_dt_tm;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } ship_fr;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } ship_to;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } ultmt_ship_to;
   struct
   {
      char                            id[35];
      char                            filler_0;
      long long                       dt_of_isse;
   } dlvry_note;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } consgnr;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } consgn;
      struct
      {
         char                            md_cd[4];
         char                            id[35];
         char                            nm[35];
      } trnsprt_means[4];
   } consgnmt[4];
} caaa_001_trade_delivery_1_def;
#define caaa_001_trade_delivery_1_def_Size 85674
#pragma section caaa_001_product_identif_2
/* Definition CAAA-001-PRODUCT-IDENTIF-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_identif_2
typedef struct __caaa_001_product_identif_2
{
   char                            tp[32];
   char                            idr[35];
} caaa_001_product_identif_2_def;
#define caaa_001_product_identif_2_def_Size 67
#pragma section caaa_001_product_id_choice
/* Definition CAAA-001-PRODUCT-ID-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_id_choice
typedef struct __caaa_001_product_id_choice
{
   struct
   {
      char                            tp[32];
      char                            idr[35];
   } strd_pdct_idr;
   struct
   {
      char                            id[35];
      char                            id_tp[35];
   } othr_pdct_idr;
} caaa_001_product_id_choice_def;
#define caaa_001_product_id_choice_def_Size 137
#pragma section caaa_001_country_code_an_1
/* Definition CAAA-001-COUNTRY-CODE-AN-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_country_code_an_1
typedef struct __caaa_001_country_code_an_1
{
   char                            cd_rw[2];
   char                            nm[35];
} caaa_001_country_code_an_1_def;
#define caaa_001_country_code_an_1_def_Size 37
#pragma section caaa_001_product_charact_1
/* Definition CAAA-001-PRODUCT-CHARACT-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_charact_1
typedef struct __caaa_001_product_charact_1
{
   char                            tp[32];
   char                            chrtcs[35];
} caaa_001_product_charact_1_def;
#define caaa_001_product_charact_1_def_Size 67
#pragma section caaa_001_product_ch_choice
/* Definition CAAA-001-PRODUCT-CH-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_ch_choice
typedef struct __caaa_001_product_ch_choice
{
   struct
   {
      char                            tp[32];
      char                            chrtcs[35];
   } strd_pdct_chrtcs;
   struct
   {
      char                            id[35];
      char                            id_tp[35];
   } othr_pdct_chrtcs;
} caaa_001_product_ch_choice_def;
#define caaa_001_product_ch_choice_def_Size 137
#pragma section caaa_001_quantity_3
/* Definition CAAA-001-QUANTITY-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_quantity_3
typedef struct __caaa_001_quantity_3
{
   char                            val[18];
} caaa_001_quantity_3_def;
#define caaa_001_quantity_3_def_Size 18
#pragma section caaa_001_product_charact_2
/* Definition CAAA-001-PRODUCT-CHARACT-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_charact_2
typedef struct __caaa_001_product_charact_2
{
   struct
   {
      struct
      {
         char                            tp[32];
         char                            chrtcs[35];
      } strd_pdct_chrtcs;
      struct
      {
         char                            id[35];
         char                            id_tp[35];
      } othr_pdct_chrtcs;
   } chrtc;
   struct
   {
      char                            val[18];
   } val_measr;
} caaa_001_product_charact_2_def;
#define caaa_001_product_charact_2_def_Size 155
#pragma section caaa_001_product_categor_1
/* Definition CAAA-001-PRODUCT-CATEGOR-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_categor_1
typedef struct __caaa_001_product_categor_1
{
   char                            tp[32];
   char                            ctgy[35];
} caaa_001_product_categor_1_def;
#define caaa_001_product_categor_1_def_Size 67
#pragma section caaa_001_product_ca_choice
/* Definition CAAA-001-PRODUCT-CA-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_product_ca_choice
typedef struct __caaa_001_product_ca_choice
{
   struct
   {
      char                            tp[32];
      char                            ctgy[35];
   } strd_pdct_ctgy;
   struct
   {
      char                            id[35];
      char                            id_tp[35];
   } othr_pdct_ctgy;
} caaa_001_product_ca_choice_def;
#define caaa_001_product_ca_choice_def_Size 137
#pragma section caaa_001_trade_product_1
/* Definition CAAA-001-TRADE-PRODUCT-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_trade_product_1
typedef struct __caaa_001_trade_product_1
{
   struct
   {
      struct
      {
         char                            tp[32];
         char                            idr[35];
      } strd_pdct_idr;
      struct
      {
         char                            id[35];
         char                            id_tp[35];
      } othr_pdct_idr;
   } id[4];
   char                            nm[35];
   char                            desc[140];
   struct
   {
      char                            cd_rw[2];
      char                            nm[35];
   } ctry_of_orgn[4];
   struct
   {
      struct
      {
         struct
         {
            char                            tp[32];
            char                            chrtcs[35];
         } strd_pdct_chrtcs;
         struct
         {
            char                            id[35];
            char                            id_tp[35];
         } othr_pdct_chrtcs;
      } chrtc;
      struct
      {
         char                            val[18];
      } val_measr;
   } pdct_chrtcs[4];
   struct
   {
      struct
      {
         char                            tp[32];
         char                            ctgy[35];
      } strd_pdct_ctgy;
      struct
      {
         char                            id[35];
         char                            id_tp[35];
      } othr_pdct_ctgy;
   } pdct_ctgy[4];
   char                            gbl_srl_idr[4][35];
} caaa_001_trade_product_1_def;
#define caaa_001_trade_product_1_def_Size 2179
#pragma section caaa_001_document_ident_23
/* Definition CAAA-001-DOCUMENT-IDENT-23 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_document_ident_23
typedef struct __caaa_001_document_ident_23
{
   char                            id[35];
   long long                       dt_of_isse;
   char                            ordr_line_id[35];
} caaa_001_document_ident_23_def;
#define caaa_001_document_ident_23_def_Size 79
#pragma section caaa_001_accounting_acco_1
/* Definition CAAA-001-ACCOUNTING-ACCO-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_accounting_acco_1
typedef struct __caaa_001_accounting_acco_1
{
   char                            id[35];
   char                            cost_ref_pttrn[35];
} caaa_001_accounting_acco_1_def;
#define caaa_001_accounting_acco_1_def_Size 70
#pragma section caaa_001_quantity_4
/* Definition CAAA-001-QUANTITY-4 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_quantity_4
typedef struct __caaa_001_quantity_4
{
   char                            val[18];
   char                            fctr[15];
} caaa_001_quantity_4_def;
#define caaa_001_quantity_4_def_Size 33
#pragma section caaa_001_charge_typ_choice
/* Definition CAAA-001-CHARGE-TYP-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_charge_typ_choice
typedef struct __caaa_001_charge_typ_choice
{
   char                            cd_rw[32];
   caaa_001_generic_identi_13_def  prtry;
} caaa_001_charge_typ_choice_def;
#define caaa_001_charge_typ_choice_def_Size 106
#pragma section caaa_001_discount_t_choice
/* Definition CAAA-001-DISCOUNT-T-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_discount_t_choice
typedef struct __caaa_001_discount_t_choice
{
   char                            cd_rw[32];
   caaa_001_generic_identi_13_def  prtry;
} caaa_001_discount_t_choice_def;
#define caaa_001_discount_t_choice_def_Size 106
#pragma section caaa_001_discount_o_choice
/* Definition CAAA-001-DISCOUNT-O-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_discount_o_choice
typedef struct __caaa_001_discount_o_choice
{
   caaa_001_charge_typ_choice_def  chrg_tp;
   caaa_001_discount_t_choice_def  dscnt_tp;
} caaa_001_discount_o_choice_def;
#define caaa_001_discount_o_choice_def_Size 212
#pragma section caaa_001_line_item_allow_1
/* Definition CAAA-001-LINE-ITEM-ALLOW-1 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_line_item_allow_1
typedef struct __caaa_001_line_item_allow_1
{
   __int32_t                       chrg_ind;
   struct
   {
      char                            filler_0;
   } actl_amt[4];
   struct
   {
      char                            val[18];
   } bsis_qty;
   char                            clctn_pct[18];
   char                            seq_nb[18];
   struct
   {
      struct
      {
         char                            cd_rw[32];
         struct
         {
            char                            id[4];
            char                            schme_nm[35];
            char                            issr[35];
         } prtry;
      } chrg_tp;
      struct
      {
         char                            cd_rw[32];
         struct
         {
            char                            id[4];
            char                            schme_nm[35];
            char                            issr[35];
         } prtry;
      } dscnt_tp;
   } rsn;
} caaa_001_line_item_allow_1_def;
#define caaa_001_line_item_allow_1_def_Size 274
#pragma section caaa_001_charges_details_2
/* Definition CAAA-001-CHARGES-DETAILS-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_charges_details_2
typedef struct __caaa_001_charges_details_2
{
   caaa_001_currency_a_amount_def  amt;
} caaa_001_charges_details_2_def;
#define caaa_001_charges_details_2_def_Size 1
#pragma section caaa_001_tax_type_f_choice
/* Definition CAAA-001-TAX-TYPE-F-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_tax_type_f_choice
typedef struct __caaa_001_tax_type_f_choice
{
   char                            cd_rw[32];
   caaa_001_generic_identi_13_def  prtry;
} caaa_001_tax_type_f_choice_def;
#define caaa_001_tax_type_f_choice_def_Size 106
#pragma section caaa_001_line_item_tax_1
/* Definition CAAA-001-LINE-ITEM-TAX-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_line_item_tax_1
typedef struct __caaa_001_line_item_tax_1
{
   struct
   {
      char                            filler_0;
   } clctd_amt[4];
   struct
   {
      char                            cd_rw[32];
      struct
      {
         char                            id[4];
         char                            schme_nm[35];
         char                            issr[35];
      } prtry;
   } tp_cd;
   long long                       tax_pt_dt;
   char                            clctd_rate[18];
   char                            ctgy_cd[4];
   char                            ctgy_nm[4][35];
} caaa_001_line_item_tax_1_def;
#define caaa_001_line_item_tax_1_def_Size 280
#pragma section caaa_001_adjustment_4
/* Definition CAAA-001-ADJUSTMENT-4 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_adjustment_4
typedef struct __caaa_001_adjustment_4
{
   char                            drctn[32];
   caaa_001_currency_a_amount_def  amt;
} caaa_001_adjustment_4_def;
#define caaa_001_adjustment_4_def_Size 33
#pragma section caaa_001_packaging_1
/* Definition CAAA-001-PACKAGING-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_packaging_1
typedef struct __caaa_001_packaging_1
{
   char                            tp[4];
   char                            nm[35];
} caaa_001_packaging_1_def;
#define caaa_001_packaging_1_def_Size 39
#pragma section caaa_001_line_item_monet_1
/* Definition CAAA-001-LINE-ITEM-MONET-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_line_item_monet_1
typedef struct __caaa_001_line_item_monet_1
{
   struct
   {
      char                            filler_0;
   } line_ttl_amt[4];
   struct
   {
      char                            filler_1;
   } allwnc_ttl_amt[4];
   struct
   {
      char                            filler_2;
   } chrg_ttl_amt[4];
   struct
   {
      char                            filler_3;
   } tax_ttl_amt[4];
   struct
   {
      char                            filler_4;
   } tax_bsis_ttl_amt[4];
   struct
   {
      char                            filler_5;
   } inf_amt[4];
} caaa_001_line_item_monet_1_def;
#define caaa_001_line_item_monet_1_def_Size 24
#pragma section caaa_001_informatio_choice
/* Definition CAAA-001-INFORMATIO-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_informatio_choice
typedef struct __caaa_001_informatio_choice
{
   char                            cd_rw[32];
   char                            prtry[140];
} caaa_001_informatio_choice_def;
#define caaa_001_informatio_choice_def_Size 172
#pragma section caaa_001_additional_info_1
/* Definition CAAA-001-ADDITIONAL-INFO-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_additional_info_1
typedef struct __caaa_001_additional_info_1
{
   caaa_001_informatio_choice_def  inf_tp;
   char                            inf_val[256];
} caaa_001_additional_info_1_def;
#define caaa_001_additional_info_1_def_Size 428
#pragma section caaa_001_line_item_10
/* Definition CAAA-001-LINE-ITEM-10 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_line_item_10
typedef struct __caaa_001_line_item_10
{
   char                            id[35];
   struct
   {
      struct
      {
         struct
         {
            char                            tp[32];
            char                            idr[35];
         } strd_pdct_idr;
         struct
         {
            char                            id[35];
            char                            id_tp[35];
         } othr_pdct_idr;
      } id[4];
      char                            nm[35];
      char                            desc[140];
      struct
      {
         char                            cd_rw[2];
         char                            nm[35];
      } ctry_of_orgn[4];
      struct
      {
         struct
         {
            struct
            {
               char                            tp[32];
               char                            chrtcs[35];
            } strd_pdct_chrtcs;
            struct
            {
               char                            id[35];
               char                            id_tp[35];
            } othr_pdct_chrtcs;
         } chrtc;
         struct
         {
            char                            val[18];
         } val_measr;
      } pdct_chrtcs[4];
      struct
      {
         struct
         {
            char                            tp[32];
            char                            ctgy[35];
         } strd_pdct_ctgy;
         struct
         {
            char                            id[35];
            char                            id_tp[35];
         } othr_pdct_ctgy;
      } pdct_ctgy[4];
      char                            gbl_srl_idr[4][35];
   } trad_pdct;
   struct
   {
      char                            id[35];
      char                            filler_0;
      long long                       dt_of_isse;
      char                            ordr_line_id[35];
   } buyr_ordr_id;
   char                            filler_1;
   struct
   {
      char                            id[35];
      char                            filler_2;
      long long                       dt_of_isse;
   } ctrct_id;
   struct
   {
      char                            id[35];
      char                            cost_ref_pttrn[35];
   } purchs_acctg_acct[4];
   struct
   {
      char                            filler_3;
   } net_pric[4];
   struct
   {
      char                            val[18];
      char                            fctr[15];
   } net_pric_qty;
   char                            filler_4;
   struct
   {
      __int32_t                       chrg_ind;
      struct
      {
         char                            filler_5;
      } actl_amt[4];
      struct
      {
         char                            val[18];
      } bsis_qty;
      char                            clctn_pct[18];
      char                            seq_nb[18];
      struct
      {
         struct
         {
            char                            cd_rw[32];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } chrg_tp;
         struct
         {
            char                            cd_rw[32];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } dscnt_tp;
      } rsn;
   } net_pric_allwnc_chrg[4];
   struct
   {
      char                            val[18];
   } net_wght;
   struct
   {
      char                            filler_6;
   } grss_pric[4];
   struct
   {
      char                            val[18];
      char                            fctr[15];
   } grss_pric_qty;
   struct
   {
      char                            val[18];
   } grss_wght;
   struct
   {
      struct
      {
         char                            filler_7;
      } amt;
   } logstcs_chrg[4];
   char                            filler_8;
   struct
   {
      struct
      {
         char                            filler_9;
      } clctd_amt[4];
      struct
      {
         char                            cd_rw[32];
         struct
         {
            char                            id[4];
            char                            schme_nm[35];
            char                            issr[35];
         } prtry;
      } tp_cd;
      long long                       tax_pt_dt;
      char                            clctd_rate[18];
      char                            ctgy_cd[4];
      char                            ctgy_nm[4][35];
   } tax[4];
   struct
   {
      __int32_t                       chrg_ind;
      struct
      {
         char                            filler_10;
      } actl_amt[4];
      struct
      {
         char                            val[18];
      } bsis_qty;
      char                            clctn_pct[18];
      char                            seq_nb[18];
      struct
      {
         struct
         {
            char                            cd_rw[32];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } chrg_tp;
         struct
         {
            char                            cd_rw[32];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } dscnt_tp;
      } rsn;
   } allwnc_chrg[4];
   struct
   {
      char                            drctn[32];
      struct
      {
         char                            filler_11;
      } amt;
   } fin_adjstmnt[4];
   struct
   {
      char                            val[18];
   } blld_qty;
   char                            packg_qty[18];
   struct
   {
      char                            val[18];
   } per_packg_unit_qty;
   struct
   {
      char                            tp[4];
      char                            nm[35];
   } packgng[4];
   struct
   {
      char                            val[18];
   } chrg_free_qty;
   struct
   {
      char                            val[18];
   } measr_qty_start;
   struct
   {
      char                            val[18];
   } measr_qty_end;
   long long                       measr_dt_tm_start;
   long long                       measr_dt_tm_end;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            bic[12];
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } org_id;
            struct
            {
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     char                            cd_rw[4];
                     char                            prtry[35];
                  } schme_nm;
                  char                            issr[35];
               } othr[4];
            } prvt_id;
         } id;
         char                            nm[35];
         struct
         {
            char                            adr_tp[32];
            char                            dept[70];
            char                            sub_dept[70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
            char                            adr_line[2][70];
         } pstl_adr;
         char                            ctry_of_res[2];
         struct
         {
            char                            nm_prfx[32];
            char                            nm[140];
            char                            phne_nb[34];
            char                            mob_nb[34];
            char                            fax_nb[34];
            char                            email_adr[256];
            char                            othr[35];
            char                            job_titl[35];
            char                            rspnsblty[35];
            char                            dept[70];
         } ctct_dtls[4];
      } pty_id;
      struct
      {
         char                            id[35];
         char                            nm[140];
      } lgl_org;
      struct
      {
         char                            tax_id[35];
         char                            tax_tp[35];
         char                            regn_id[35];
         struct
         {
            char                            ustrd[140];
            char                            strd[32];
         } tax_xmptn_rsn[4];
      } tax_pty[4];
   } ship_to;
   struct
   {
      struct
      {
         char                            cd_rw[4];
         struct
         {
            char                            id[4];
            char                            schme_nm[35];
            char                            issr[35];
         } prtry;
      } incotrms_cd;
      char                            lctn[35];
   } incotrms;
   char                            filler_12;
   long long                       dlvry_dt_tm;
   struct
   {
      char                            id[35];
      char                            filler_13;
      long long                       dt_of_isse;
   } dlvry_note_id;
   struct
   {
      struct
      {
         char                            filler_14;
      } line_ttl_amt[4];
      struct
      {
         char                            filler_15;
      } allwnc_ttl_amt[4];
      struct
      {
         char                            filler_16;
      } chrg_ttl_amt[4];
      struct
      {
         char                            filler_17;
      } tax_ttl_amt[4];
      struct
      {
         char                            filler_18;
      } tax_bsis_ttl_amt[4];
      struct
      {
         char                            filler_19;
      } inf_amt[4];
   } mntry_summtn;
   struct
   {
      struct
      {
         char                            cd_rw[32];
         char                            prtry[140];
      } inf_tp;
      char                            inf_val[256];
   } incl_note[4];
} caaa_001_line_item_10_def;
#define caaa_001_line_item_10_def_Size 16014
#pragma section caaa_001_card_payment_in_1
/* Definition CAAA-001-CARD-PAYMENT-IN-1 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_card_payment_in_1
typedef struct __caaa_001_card_payment_in_1
{
   struct
   {
      char                            id[35];
      char                            tp_cd[4];
      char                            nm[35];
      long long                       isse_dt_tm;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } issr;
      char                            lang_cd[32];
      __int32_t                       cpy_ind;
      char                            doc_purp[4];
      struct
      {
         char                            inf_tp[4];
         char                            inf_val[256];
      } incl_note[4];
   } invc_hdr;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } buyr;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } sellr;
      struct
      {
         char                            id[35];
         char                            filler_0;
         long long                       dt_of_isse;
      } qtn_doc_id;
      struct
      {
         char                            id[35];
         char                            filler_1;
         long long                       dt_of_isse;
      } ctrct_doc_id;
      struct
      {
         char                            id[35];
         char                            filler_2;
         long long                       dt_of_isse;
      } buyr_ordr_id_doc;
      struct
      {
         char                            doc_tp[4];
         char                            doc_nb[35];
         char                            sndr_rcvr_seq_id[140];
         char                            filler_3;
         long long                       isse_dt;
         char                            url[256];
         struct
         {
            char                            mimetp[35];
            char                            ncodg_tp[35];
            char                            char_set[35];
            char                            incl_binry_objct[256];
         } attchd_binry_file[4];
      } addtl_ref_doc[4];
      struct
      {
         struct
         {
            char                            cd_rw[4];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } incotrms_cd;
         char                            lctn[35];
      } incotrms;
   } trad_agrmt;
   char                            filler_4;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               long long                       dt;
               long long                       dt_tm;
            } dt;
            char                            not_spcfd_dt[32];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } start_dt;
         struct
         {
            struct
            {
               long long                       dt;
               long long                       dt_tm;
            } dt;
            char                            not_spcfd_dt[32];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } end_dt;
      } dlvry_prd;
      long long                       dlvry_dt_tm;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } ship_fr;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } ship_to;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } ultmt_ship_to;
      struct
      {
         char                            id[35];
         char                            filler_5;
         long long                       dt_of_isse;
      } dlvry_note;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } consgnr;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } consgn;
         struct
         {
            char                            md_cd[4];
            char                            id[35];
            char                            nm[35];
         } trnsprt_means[4];
      } consgnmt[4];
   } trad_dlvry;
   struct
   {
      char                            id[35];
      struct
      {
         struct
         {
            struct
            {
               char                            tp[32];
               char                            idr[35];
            } strd_pdct_idr;
            struct
            {
               char                            id[35];
               char                            id_tp[35];
            } othr_pdct_idr;
         } id[4];
         char                            nm[35];
         char                            desc[140];
         struct
         {
            char                            cd_rw[2];
            char                            nm[35];
         } ctry_of_orgn[4];
         struct
         {
            struct
            {
               struct
               {
                  char                            tp[32];
                  char                            chrtcs[35];
               } strd_pdct_chrtcs;
               struct
               {
                  char                            id[35];
                  char                            id_tp[35];
               } othr_pdct_chrtcs;
            } chrtc;
            struct
            {
               char                            val[18];
            } val_measr;
         } pdct_chrtcs[4];
         struct
         {
            struct
            {
               char                            tp[32];
               char                            ctgy[35];
            } strd_pdct_ctgy;
            struct
            {
               char                            id[35];
               char                            id_tp[35];
            } othr_pdct_ctgy;
         } pdct_ctgy[4];
         char                            gbl_srl_idr[4][35];
      } trad_pdct;
      struct
      {
         char                            id[35];
         char                            filler_6;
         long long                       dt_of_isse;
         char                            ordr_line_id[35];
      } buyr_ordr_id;
      char                            filler_7;
      struct
      {
         char                            id[35];
         char                            filler_8;
         long long                       dt_of_isse;
      } ctrct_id;
      struct
      {
         char                            id[35];
         char                            cost_ref_pttrn[35];
      } purchs_acctg_acct[4];
      struct
      {
         char                            filler_9;
      } net_pric[4];
      struct
      {
         char                            val[18];
         char                            fctr[15];
      } net_pric_qty;
      char                            filler_10;
      struct
      {
         __int32_t                       chrg_ind;
         struct
         {
            char                            filler_11;
         } actl_amt[4];
         struct
         {
            char                            val[18];
         } bsis_qty;
         char                            clctn_pct[18];
         char                            seq_nb[18];
         struct
         {
            struct
            {
               char                            cd_rw[32];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } chrg_tp;
            struct
            {
               char                            cd_rw[32];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } dscnt_tp;
         } rsn;
      } net_pric_allwnc_chrg[4];
      struct
      {
         char                            val[18];
      } net_wght;
      struct
      {
         char                            filler_12;
      } grss_pric[4];
      struct
      {
         char                            val[18];
         char                            fctr[15];
      } grss_pric_qty;
      struct
      {
         char                            val[18];
      } grss_wght;
      struct
      {
         struct
         {
            char                            filler_13;
         } amt;
      } logstcs_chrg[4];
      char                            filler_14;
      struct
      {
         struct
         {
            char                            filler_15;
         } clctd_amt[4];
         struct
         {
            char                            cd_rw[32];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } tp_cd;
         long long                       tax_pt_dt;
         char                            clctd_rate[18];
         char                            ctgy_cd[4];
         char                            ctgy_nm[4][35];
      } tax[4];
      struct
      {
         __int32_t                       chrg_ind;
         struct
         {
            char                            filler_16;
         } actl_amt[4];
         struct
         {
            char                            val[18];
         } bsis_qty;
         char                            clctn_pct[18];
         char                            seq_nb[18];
         struct
         {
            struct
            {
               char                            cd_rw[32];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } chrg_tp;
            struct
            {
               char                            cd_rw[32];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } dscnt_tp;
         } rsn;
      } allwnc_chrg[4];
      struct
      {
         char                            drctn[32];
         struct
         {
            char                            filler_17;
         } amt;
      } fin_adjstmnt[4];
      struct
      {
         char                            val[18];
      } blld_qty;
      char                            packg_qty[18];
      struct
      {
         char                            val[18];
      } per_packg_unit_qty;
      struct
      {
         char                            tp[4];
         char                            nm[35];
      } packgng[4];
      struct
      {
         char                            val[18];
      } chrg_free_qty;
      struct
      {
         char                            val[18];
      } measr_qty_start;
      struct
      {
         char                            val[18];
      } measr_qty_end;
      long long                       measr_dt_tm_start;
      long long                       measr_dt_tm_end;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            bic[12];
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } org_id;
               struct
               {
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        char                            cd_rw[4];
                        char                            prtry[35];
                     } schme_nm;
                     char                            issr[35];
                  } othr[4];
               } prvt_id;
            } id;
            char                            nm[35];
            struct
            {
               char                            adr_tp[32];
               char                            dept[70];
               char                            sub_dept[70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
               char                            adr_line[2][70];
            } pstl_adr;
            char                            ctry_of_res[2];
            struct
            {
               char                            nm_prfx[32];
               char                            nm[140];
               char                            phne_nb[34];
               char                            mob_nb[34];
               char                            fax_nb[34];
               char                            email_adr[256];
               char                            othr[35];
               char                            job_titl[35];
               char                            rspnsblty[35];
               char                            dept[70];
            } ctct_dtls[4];
         } pty_id;
         struct
         {
            char                            id[35];
            char                            nm[140];
         } lgl_org;
         struct
         {
            char                            tax_id[35];
            char                            tax_tp[35];
            char                            regn_id[35];
            struct
            {
               char                            ustrd[140];
               char                            strd[32];
            } tax_xmptn_rsn[4];
         } tax_pty[4];
      } ship_to;
      struct
      {
         struct
         {
            char                            cd_rw[4];
            struct
            {
               char                            id[4];
               char                            schme_nm[35];
               char                            issr[35];
            } prtry;
         } incotrms_cd;
         char                            lctn[35];
      } incotrms;
      char                            filler_18;
      long long                       dlvry_dt_tm;
      struct
      {
         char                            id[35];
         char                            filler_19;
         long long                       dt_of_isse;
      } dlvry_note_id;
      struct
      {
         struct
         {
            char                            filler_20;
         } line_ttl_amt[4];
         struct
         {
            char                            filler_21;
         } allwnc_ttl_amt[4];
         struct
         {
            char                            filler_22;
         } chrg_ttl_amt[4];
         struct
         {
            char                            filler_23;
         } tax_ttl_amt[4];
         struct
         {
            char                            filler_24;
         } tax_bsis_ttl_amt[4];
         struct
         {
            char                            filler_25;
         } inf_amt[4];
      } mntry_summtn;
      struct
      {
         struct
         {
            char                            cd_rw[32];
            char                            prtry[140];
         } inf_tp;
         char                            inf_val[256];
      } incl_note[4];
   } line_itm[4];
} caaa_001_card_payment_in_1_def;
#define caaa_001_card_payment_in_1_def_Size 181652
#pragma section caaa_001_card_payment_t_12
/* Definition CAAA-001-CARD-PAYMENT-T-12 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_card_payment_t_12
typedef struct __caaa_001_card_payment_t_12
{
   char                            ccy[3];
   char                            ttl_amt[18];
   char                            amt_qlfr[32];
   struct
   {
      char                            csh_bck[18];
      char                            grtty[18];
      struct
      {
         char                            amt[18];
         char                            labl[140];
      } fees[4];
      struct
      {
         char                            amt[18];
         char                            labl[140];
      } rbt[4];
      struct
      {
         char                            amt[18];
         char                            labl[140];
      } val_added_tax[4];
   } dtld_amt;
   char                            filler_0;
   long long                       vldty_dt;
   char                            on_line_rsn[32];
   char                            uattndd_lvl_ctgy[35];
   char                            acct_tp[32];
   char                            filler_1;
   __int32_t                       convs_accptd;
   struct
   {
      char                            ccy_convs_id[35];
      char                            rslt[32];
      char                            rspn_rsn[35];
      char                            trgt_ccy[3];
      char                            trgt_ccy_nmrc[3];
      char                            trgt_ccy_dcml[18];
      char                            trgt_ccy_nm[35];
      char                            rsltg_amt[18];
      char                            xchg_rate[18];
      char                            nvrtd_xchg_rate[18];
      char                            filler_2;
      long long                       qtn_dt;
      long long                       vld_until;
      char                            src_ccy[3];
      char                            src_ccy_nmrc[3];
      char                            src_ccy_dcml[18];
      char                            src_ccy_nm[35];
      char                            orgnl_amt[18];
      struct
      {
         char                            amt[18];
         char                            addtl_inf[256];
      } comssn_dtls[4];
      struct
      {
         char                            rate[18];
         char                            addtl_inf[256];
      } mrk_up_dtls[4];
      char                            dclrtn_dtls[256];
   } ccy_convs;
   char                            filler_3;
   struct
   {
      char                            instlmt_plan[4][32];
      char                            plan_id[35];
      char                            seq_nb[18];
      char                            prd_unit[32];
      char                            instlmt_prd[18];
      char                            ttl_nb_of_pmts[18];
      char                            filler_4;
      long long                       frst_pmt_dt;
      struct
      {
         char                            filler_5;
      } ttl_amt;
      char                            frst_amt[18];
      char                            chrgs[18];
   } instlmt;
   char                            filler_6;
   struct
   {
      long long                       frst_pmt_dt_tm;
      long long                       last_pmt_dt_tm;
      char                            nb_of_pmts[18];
      struct
      {
         char                            amt[18];
         long long                       dt_tm;
         char                            card_data_ntry_md[32];
         char                            iccrltd_data[256];
         char                            labl[140];
      } indv_pmt[4];
   } aggtn_tx;
   struct
   {
      char                            pdct_cd[70];
      char                            unit_of_measr[32];
      char                            pdct_qty[18];
      char                            unit_pric[18];
      char                            pdct_amt[18];
      char                            tax_tp[35];
      char                            addtl_pdct_inf[35];
   } pdct[4];
   struct
   {
      struct
      {
         char                            id[35];
         char                            tp_cd[4];
         char                            nm[35];
         long long                       isse_dt_tm;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } issr;
         char                            lang_cd[32];
         __int32_t                       cpy_ind;
         char                            doc_purp[4];
         struct
         {
            char                            inf_tp[4];
            char                            inf_val[256];
         } incl_note[4];
      } invc_hdr;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } buyr;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } sellr;
         struct
         {
            char                            id[35];
            char                            filler_7;
            long long                       dt_of_isse;
         } qtn_doc_id;
         struct
         {
            char                            id[35];
            char                            filler_8;
            long long                       dt_of_isse;
         } ctrct_doc_id;
         struct
         {
            char                            id[35];
            char                            filler_9;
            long long                       dt_of_isse;
         } buyr_ordr_id_doc;
         struct
         {
            char                            doc_tp[4];
            char                            doc_nb[35];
            char                            sndr_rcvr_seq_id[140];
            char                            filler_10;
            long long                       isse_dt;
            char                            url[256];
            struct
            {
               char                            mimetp[35];
               char                            ncodg_tp[35];
               char                            char_set[35];
               char                            incl_binry_objct[256];
            } attchd_binry_file[4];
         } addtl_ref_doc[4];
         struct
         {
            struct
            {
               char                            cd_rw[4];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } incotrms_cd;
            char                            lctn[35];
         } incotrms;
      } trad_agrmt;
      char                            filler_11;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  long long                       dt;
                  long long                       dt_tm;
               } dt;
               char                            not_spcfd_dt[32];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } start_dt;
            struct
            {
               struct
               {
                  long long                       dt;
                  long long                       dt_tm;
               } dt;
               char                            not_spcfd_dt[32];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } end_dt;
         } dlvry_prd;
         long long                       dlvry_dt_tm;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } ship_fr;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } ship_to;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } ultmt_ship_to;
         struct
         {
            char                            id[35];
            char                            filler_12;
            long long                       dt_of_isse;
         } dlvry_note;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } consgnr;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } consgn;
            struct
            {
               char                            md_cd[4];
               char                            id[35];
               char                            nm[35];
            } trnsprt_means[4];
         } consgnmt[4];
      } trad_dlvry;
      struct
      {
         char                            id[35];
         struct
         {
            struct
            {
               struct
               {
                  char                            tp[32];
                  char                            idr[35];
               } strd_pdct_idr;
               struct
               {
                  char                            id[35];
                  char                            id_tp[35];
               } othr_pdct_idr;
            } id[4];
            char                            nm[35];
            char                            desc[140];
            struct
            {
               char                            cd_rw[2];
               char                            nm[35];
            } ctry_of_orgn[4];
            struct
            {
               struct
               {
                  struct
                  {
                     char                            tp[32];
                     char                            chrtcs[35];
                  } strd_pdct_chrtcs;
                  struct
                  {
                     char                            id[35];
                     char                            id_tp[35];
                  } othr_pdct_chrtcs;
               } chrtc;
               struct
               {
                  char                            val[18];
               } val_measr;
            } pdct_chrtcs[4];
            struct
            {
               struct
               {
                  char                            tp[32];
                  char                            ctgy[35];
               } strd_pdct_ctgy;
               struct
               {
                  char                            id[35];
                  char                            id_tp[35];
               } othr_pdct_ctgy;
            } pdct_ctgy[4];
            char                            gbl_srl_idr[4][35];
         } trad_pdct;
         struct
         {
            char                            id[35];
            char                            filler_13;
            long long                       dt_of_isse;
            char                            ordr_line_id[35];
         } buyr_ordr_id;
         char                            filler_14;
         struct
         {
            char                            id[35];
            char                            filler_15;
            long long                       dt_of_isse;
         } ctrct_id;
         struct
         {
            char                            id[35];
            char                            cost_ref_pttrn[35];
         } purchs_acctg_acct[4];
         struct
         {
            char                            filler_16;
         } net_pric[4];
         struct
         {
            char                            val[18];
            char                            fctr[15];
         } net_pric_qty;
         char                            filler_17;
         struct
         {
            __int32_t                       chrg_ind;
            struct
            {
               char                            filler_18;
            } actl_amt[4];
            struct
            {
               char                            val[18];
            } bsis_qty;
            char                            clctn_pct[18];
            char                            seq_nb[18];
            struct
            {
               struct
               {
                  char                            cd_rw[32];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } chrg_tp;
               struct
               {
                  char                            cd_rw[32];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } dscnt_tp;
            } rsn;
         } net_pric_allwnc_chrg[4];
         struct
         {
            char                            val[18];
         } net_wght;
         struct
         {
            char                            filler_19;
         } grss_pric[4];
         struct
         {
            char                            val[18];
            char                            fctr[15];
         } grss_pric_qty;
         struct
         {
            char                            val[18];
         } grss_wght;
         struct
         {
            struct
            {
               char                            filler_20;
            } amt;
         } logstcs_chrg[4];
         char                            filler_21;
         struct
         {
            struct
            {
               char                            filler_22;
            } clctd_amt[4];
            struct
            {
               char                            cd_rw[32];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } tp_cd;
            long long                       tax_pt_dt;
            char                            clctd_rate[18];
            char                            ctgy_cd[4];
            char                            ctgy_nm[4][35];
         } tax[4];
         struct
         {
            __int32_t                       chrg_ind;
            struct
            {
               char                            filler_23;
            } actl_amt[4];
            struct
            {
               char                            val[18];
            } bsis_qty;
            char                            clctn_pct[18];
            char                            seq_nb[18];
            struct
            {
               struct
               {
                  char                            cd_rw[32];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } chrg_tp;
               struct
               {
                  char                            cd_rw[32];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } dscnt_tp;
            } rsn;
         } allwnc_chrg[4];
         struct
         {
            char                            drctn[32];
            struct
            {
               char                            filler_24;
            } amt;
         } fin_adjstmnt[4];
         struct
         {
            char                            val[18];
         } blld_qty;
         char                            packg_qty[18];
         struct
         {
            char                            val[18];
         } per_packg_unit_qty;
         struct
         {
            char                            tp[4];
            char                            nm[35];
         } packgng[4];
         struct
         {
            char                            val[18];
         } chrg_free_qty;
         struct
         {
            char                            val[18];
         } measr_qty_start;
         struct
         {
            char                            val[18];
         } measr_qty_end;
         long long                       measr_dt_tm_start;
         long long                       measr_dt_tm_end;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            bic[12];
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } org_id;
                  struct
                  {
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           char                            cd_rw[4];
                           char                            prtry[35];
                        } schme_nm;
                        char                            issr[35];
                     } othr[4];
                  } prvt_id;
               } id;
               char                            nm[35];
               struct
               {
                  char                            adr_tp[32];
                  char                            dept[70];
                  char                            sub_dept[70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
                  char                            adr_line[2][70];
               } pstl_adr;
               char                            ctry_of_res[2];
               struct
               {
                  char                            nm_prfx[32];
                  char                            nm[140];
                  char                            phne_nb[34];
                  char                            mob_nb[34];
                  char                            fax_nb[34];
                  char                            email_adr[256];
                  char                            othr[35];
                  char                            job_titl[35];
                  char                            rspnsblty[35];
                  char                            dept[70];
               } ctct_dtls[4];
            } pty_id;
            struct
            {
               char                            id[35];
               char                            nm[140];
            } lgl_org;
            struct
            {
               char                            tax_id[35];
               char                            tax_tp[35];
               char                            regn_id[35];
               struct
               {
                  char                            ustrd[140];
                  char                            strd[32];
               } tax_xmptn_rsn[4];
            } tax_pty[4];
         } ship_to;
         struct
         {
            struct
            {
               char                            cd_rw[4];
               struct
               {
                  char                            id[4];
                  char                            schme_nm[35];
                  char                            issr[35];
               } prtry;
            } incotrms_cd;
            char                            lctn[35];
         } incotrms;
         char                            filler_25;
         long long                       dlvry_dt_tm;
         struct
         {
            char                            id[35];
            char                            filler_26;
            long long                       dt_of_isse;
         } dlvry_note_id;
         struct
         {
            struct
            {
               char                            filler_27;
            } line_ttl_amt[4];
            struct
            {
               char                            filler_28;
            } allwnc_ttl_amt[4];
            struct
            {
               char                            filler_29;
            } chrg_ttl_amt[4];
            struct
            {
               char                            filler_30;
            } tax_ttl_amt[4];
            struct
            {
               char                            filler_31;
            } tax_bsis_ttl_amt[4];
            struct
            {
               char                            filler_32;
            } inf_amt[4];
         } mntry_summtn;
         struct
         {
            struct
            {
               char                            cd_rw[32];
               char                            prtry[140];
            } inf_tp;
            char                            inf_val[256];
         } incl_note[4];
      } line_itm[4];
   } card_pmt_invc;
   char                            iccrltd_data[256];
} caaa_001_card_payment_t_12_def;
#define caaa_001_card_payment_t_12_def_Size 189814
#pragma section caaa_001_card_payment_t_22
/* Definition CAAA-001-CARD-PAYMENT-T-22 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_card_payment_t_22
typedef struct __caaa_001_card_payment_t_22
{
   __int32_t                       tx_captr;
   char                            tx_tp[32];
   char                            addtl_svc[4][32];
   char                            svc_attr[32];
   char                            mrchnt_ctgy_cd[4];
   char                            sale_ref_id[35];
   char                            filler_0;
   struct
   {
      long long                       tx_dt_tm;
      char                            tx_ref[35];
   } tx_id;
   char                            filler_1;
   struct
   {
      char                            sale_ref_id[35];
      char                            filler_2;
      struct
      {
         long long                       tx_dt_tm;
         char                            tx_ref[35];
      } tx_id;
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } poiid;
      char                            initr_tx_id[35];
      char                            rcpt_tx_id[35];
      char                            tx_tp[32];
      char                            addtl_svc[4][32];
      char                            svc_attr[32];
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } authstn_ntty;
         struct
         {
            char                            rspn[32];
            char                            rspn_rsn[35];
         } rspn_to_authstn;
         char                            authstn_cd[8];
      } tx_rslt;
   } orgnl_tx;
   char                            initr_tx_id[35];
   char                            rcncltn_id[35];
   struct
   {
      char                            ccy[3];
      char                            ttl_amt[18];
      char                            amt_qlfr[32];
      struct
      {
         char                            csh_bck[18];
         char                            grtty[18];
         struct
         {
            char                            amt[18];
            char                            labl[140];
         } fees[4];
         struct
         {
            char                            amt[18];
            char                            labl[140];
         } rbt[4];
         struct
         {
            char                            amt[18];
            char                            labl[140];
         } val_added_tax[4];
      } dtld_amt;
      char                            filler_3;
      long long                       vldty_dt;
      char                            on_line_rsn[32];
      char                            uattndd_lvl_ctgy[35];
      char                            acct_tp[32];
      char                            filler_4;
      __int32_t                       convs_accptd;
      struct
      {
         char                            ccy_convs_id[35];
         char                            rslt[32];
         char                            rspn_rsn[35];
         char                            trgt_ccy[3];
         char                            trgt_ccy_nmrc[3];
         char                            trgt_ccy_dcml[18];
         char                            trgt_ccy_nm[35];
         char                            rsltg_amt[18];
         char                            xchg_rate[18];
         char                            nvrtd_xchg_rate[18];
         char                            filler_5;
         long long                       qtn_dt;
         long long                       vld_until;
         char                            src_ccy[3];
         char                            src_ccy_nmrc[3];
         char                            src_ccy_dcml[18];
         char                            src_ccy_nm[35];
         char                            orgnl_amt[18];
         struct
         {
            char                            amt[18];
            char                            addtl_inf[256];
         } comssn_dtls[4];
         struct
         {
            char                            rate[18];
            char                            addtl_inf[256];
         } mrk_up_dtls[4];
         char                            dclrtn_dtls[256];
      } ccy_convs;
      char                            filler_6;
      struct
      {
         char                            instlmt_plan[4][32];
         char                            plan_id[35];
         char                            seq_nb[18];
         char                            prd_unit[32];
         char                            instlmt_prd[18];
         char                            ttl_nb_of_pmts[18];
         char                            filler_7;
         long long                       frst_pmt_dt;
         struct
         {
            char                            filler_8;
         } ttl_amt;
         char                            frst_amt[18];
         char                            chrgs[18];
      } instlmt;
      char                            filler_9;
      struct
      {
         long long                       frst_pmt_dt_tm;
         long long                       last_pmt_dt_tm;
         char                            nb_of_pmts[18];
         struct
         {
            char                            amt[18];
            long long                       dt_tm;
            char                            card_data_ntry_md[32];
            char                            iccrltd_data[256];
            char                            labl[140];
         } indv_pmt[4];
      } aggtn_tx;
      struct
      {
         char                            pdct_cd[70];
         char                            unit_of_measr[32];
         char                            pdct_qty[18];
         char                            unit_pric[18];
         char                            pdct_amt[18];
         char                            tax_tp[35];
         char                            addtl_pdct_inf[35];
      } pdct[4];
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp_cd[4];
            char                            nm[35];
            long long                       isse_dt_tm;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } issr;
            char                            lang_cd[32];
            __int32_t                       cpy_ind;
            char                            doc_purp[4];
            struct
            {
               char                            inf_tp[4];
               char                            inf_val[256];
            } incl_note[4];
         } invc_hdr;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } buyr;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } sellr;
            struct
            {
               char                            id[35];
               char                            filler_10;
               long long                       dt_of_isse;
            } qtn_doc_id;
            struct
            {
               char                            id[35];
               char                            filler_11;
               long long                       dt_of_isse;
            } ctrct_doc_id;
            struct
            {
               char                            id[35];
               char                            filler_12;
               long long                       dt_of_isse;
            } buyr_ordr_id_doc;
            struct
            {
               char                            doc_tp[4];
               char                            doc_nb[35];
               char                            sndr_rcvr_seq_id[140];
               char                            filler_13;
               long long                       isse_dt;
               char                            url[256];
               struct
               {
                  char                            mimetp[35];
                  char                            ncodg_tp[35];
                  char                            char_set[35];
                  char                            incl_binry_objct[256];
               } attchd_binry_file[4];
            } addtl_ref_doc[4];
            struct
            {
               struct
               {
                  char                            cd_rw[4];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } incotrms_cd;
               char                            lctn[35];
            } incotrms;
         } trad_agrmt;
         char                            filler_14;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     long long                       dt;
                     long long                       dt_tm;
                  } dt;
                  char                            not_spcfd_dt[32];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } start_dt;
               struct
               {
                  struct
                  {
                     long long                       dt;
                     long long                       dt_tm;
                  } dt;
                  char                            not_spcfd_dt[32];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } end_dt;
            } dlvry_prd;
            long long                       dlvry_dt_tm;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } ship_fr;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } ship_to;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } ultmt_ship_to;
            struct
            {
               char                            id[35];
               char                            filler_15;
               long long                       dt_of_isse;
            } dlvry_note;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } consgnr;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } consgn;
               struct
               {
                  char                            md_cd[4];
                  char                            id[35];
                  char                            nm[35];
               } trnsprt_means[4];
            } consgnmt[4];
         } trad_dlvry;
         struct
         {
            char                            id[35];
            struct
            {
               struct
               {
                  struct
                  {
                     char                            tp[32];
                     char                            idr[35];
                  } strd_pdct_idr;
                  struct
                  {
                     char                            id[35];
                     char                            id_tp[35];
                  } othr_pdct_idr;
               } id[4];
               char                            nm[35];
               char                            desc[140];
               struct
               {
                  char                            cd_rw[2];
                  char                            nm[35];
               } ctry_of_orgn[4];
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            tp[32];
                        char                            chrtcs[35];
                     } strd_pdct_chrtcs;
                     struct
                     {
                        char                            id[35];
                        char                            id_tp[35];
                     } othr_pdct_chrtcs;
                  } chrtc;
                  struct
                  {
                     char                            val[18];
                  } val_measr;
               } pdct_chrtcs[4];
               struct
               {
                  struct
                  {
                     char                            tp[32];
                     char                            ctgy[35];
                  } strd_pdct_ctgy;
                  struct
                  {
                     char                            id[35];
                     char                            id_tp[35];
                  } othr_pdct_ctgy;
               } pdct_ctgy[4];
               char                            gbl_srl_idr[4][35];
            } trad_pdct;
            struct
            {
               char                            id[35];
               char                            filler_16;
               long long                       dt_of_isse;
               char                            ordr_line_id[35];
            } buyr_ordr_id;
            char                            filler_17;
            struct
            {
               char                            id[35];
               char                            filler_18;
               long long                       dt_of_isse;
            } ctrct_id;
            struct
            {
               char                            id[35];
               char                            cost_ref_pttrn[35];
            } purchs_acctg_acct[4];
            struct
            {
               char                            filler_19;
            } net_pric[4];
            struct
            {
               char                            val[18];
               char                            fctr[15];
            } net_pric_qty;
            char                            filler_20;
            struct
            {
               __int32_t                       chrg_ind;
               struct
               {
                  char                            filler_21;
               } actl_amt[4];
               struct
               {
                  char                            val[18];
               } bsis_qty;
               char                            clctn_pct[18];
               char                            seq_nb[18];
               struct
               {
                  struct
                  {
                     char                            cd_rw[32];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } chrg_tp;
                  struct
                  {
                     char                            cd_rw[32];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } dscnt_tp;
               } rsn;
            } net_pric_allwnc_chrg[4];
            struct
            {
               char                            val[18];
            } net_wght;
            struct
            {
               char                            filler_22;
            } grss_pric[4];
            struct
            {
               char                            val[18];
               char                            fctr[15];
            } grss_pric_qty;
            struct
            {
               char                            val[18];
            } grss_wght;
            struct
            {
               struct
               {
                  char                            filler_23;
               } amt;
            } logstcs_chrg[4];
            char                            filler_24;
            struct
            {
               struct
               {
                  char                            filler_25;
               } clctd_amt[4];
               struct
               {
                  char                            cd_rw[32];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } tp_cd;
               long long                       tax_pt_dt;
               char                            clctd_rate[18];
               char                            ctgy_cd[4];
               char                            ctgy_nm[4][35];
            } tax[4];
            struct
            {
               __int32_t                       chrg_ind;
               struct
               {
                  char                            filler_26;
               } actl_amt[4];
               struct
               {
                  char                            val[18];
               } bsis_qty;
               char                            clctn_pct[18];
               char                            seq_nb[18];
               struct
               {
                  struct
                  {
                     char                            cd_rw[32];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } chrg_tp;
                  struct
                  {
                     char                            cd_rw[32];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } dscnt_tp;
               } rsn;
            } allwnc_chrg[4];
            struct
            {
               char                            drctn[32];
               struct
               {
                  char                            filler_27;
               } amt;
            } fin_adjstmnt[4];
            struct
            {
               char                            val[18];
            } blld_qty;
            char                            packg_qty[18];
            struct
            {
               char                            val[18];
            } per_packg_unit_qty;
            struct
            {
               char                            tp[4];
               char                            nm[35];
            } packgng[4];
            struct
            {
               char                            val[18];
            } chrg_free_qty;
            struct
            {
               char                            val[18];
            } measr_qty_start;
            struct
            {
               char                            val[18];
            } measr_qty_end;
            long long                       measr_dt_tm_start;
            long long                       measr_dt_tm_end;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            bic[12];
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } org_id;
                     struct
                     {
                        struct
                        {
                           long long                       birth_dt;
                           char                            prvc_of_birth[35];
                           char                            city_of_birth[35];
                           char                            ctry_of_birth[2];
                        } dt_and_plc_of_birth;
                        struct
                        {
                           char                            id[35];
                           struct
                           {
                              char                            cd_rw[4];
                              char                            prtry[35];
                           } schme_nm;
                           char                            issr[35];
                        } othr[4];
                     } prvt_id;
                  } id;
                  char                            nm[35];
                  struct
                  {
                     char                            adr_tp[32];
                     char                            dept[70];
                     char                            sub_dept[70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                     char                            adr_line[2][70];
                  } pstl_adr;
                  char                            ctry_of_res[2];
                  struct
                  {
                     char                            nm_prfx[32];
                     char                            nm[140];
                     char                            phne_nb[34];
                     char                            mob_nb[34];
                     char                            fax_nb[34];
                     char                            email_adr[256];
                     char                            othr[35];
                     char                            job_titl[35];
                     char                            rspnsblty[35];
                     char                            dept[70];
                  } ctct_dtls[4];
               } pty_id;
               struct
               {
                  char                            id[35];
                  char                            nm[140];
               } lgl_org;
               struct
               {
                  char                            tax_id[35];
                  char                            tax_tp[35];
                  char                            regn_id[35];
                  struct
                  {
                     char                            ustrd[140];
                     char                            strd[32];
                  } tax_xmptn_rsn[4];
               } tax_pty[4];
            } ship_to;
            struct
            {
               struct
               {
                  char                            cd_rw[4];
                  struct
                  {
                     char                            id[4];
                     char                            schme_nm[35];
                     char                            issr[35];
                  } prtry;
               } incotrms_cd;
               char                            lctn[35];
            } incotrms;
            char                            filler_28;
            long long                       dlvry_dt_tm;
            struct
            {
               char                            id[35];
               char                            filler_29;
               long long                       dt_of_isse;
            } dlvry_note_id;
            struct
            {
               struct
               {
                  char                            filler_30;
               } line_ttl_amt[4];
               struct
               {
                  char                            filler_31;
               } allwnc_ttl_amt[4];
               struct
               {
                  char                            filler_32;
               } chrg_ttl_amt[4];
               struct
               {
                  char                            filler_33;
               } tax_ttl_amt[4];
               struct
               {
                  char                            filler_34;
               } tax_bsis_ttl_amt[4];
               struct
               {
                  char                            filler_35;
               } inf_amt[4];
            } mntry_summtn;
            struct
            {
               struct
               {
                  char                            cd_rw[32];
                  char                            prtry[140];
               } inf_tp;
               char                            inf_val[256];
            } incl_note[4];
         } line_itm[4];
      } card_pmt_invc;
      char                            iccrltd_data[256];
   } tx_dtls;
   char                            addtl_tx_data[4][70];
} caaa_001_card_payment_t_22_def;
#define caaa_001_card_payment_t_22_def_Size 191128
#pragma section caaa_001_acceptor_author_3
/* Definition CAAA-001-ACCEPTOR-AUTHOR-3 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_acceptor_author_3
typedef struct __caaa_001_acceptor_author_3
{
   struct
   {
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } id;
         char                            params_vrsn[35];
      } acqrr;
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } id;
         char                            cmon_nm[70];
         char                            lctn_ctgy[32];
         char                            adr[140];
         char                            ctry_cd[3];
         char                            schme_data[140];
      } mrchnt;
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } id;
         char                            sys_nm[70];
         char                            grp_id[35];
         struct
         {
            char                            card_rdng_cpblties[4][32];
            char                            crdhldr_vrfctn_cpblties[4][32];
            char                            on_line_cpblties[32];
            struct
            {
               char                            disp_tp[32];
               char                            nb_of_lines[18];
               char                            line_width[18];
            } disp_cpblties[4];
            char                            prt_line_width[18];
            char                            avlbl_lang[4][2];
         } cpblties;
         char                            filler_0;
         struct
         {
            char                            tp[32];
            struct
            {
               char                            itm_nb[35];
               char                            prvdr_id[35];
               char                            id[35];
               char                            srl_nb[35];
            } id;
            struct
            {
               char                            vrsn_nb[35];
               char                            sts[32];
            } sts;
            struct
            {
               char                            id[35];
               char                            vrsn[35];
               char                            issr[35];
            } std_cmplc[4];
            char                            filler_1;
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            ttl_sz[18];
                  char                            free_sz[18];
                  char                            unit_rw[32];
               } mmry[4];
               struct
               {
                  char                            com_tp[32];
                  char                            rmot_pty[4][32];
                  __int32_t                       actv;
               } com[4];
               char                            scty_accs_mdls[18];
               char                            sbcbr_idnty_mdls[18];
               char                            key_chck_val[35];
            } chrtcs;
            char                            filler_2;
            struct
            {
               char                            tp[32];
               char                            assgnr[4][35];
               long long                       dlvry_dt;
               long long                       xprtn_dt;
               char                            nb[35];
               char                            filler_3;
            } assmnt[4];
         } cmpnt[4];
      } poi;
      struct
      {
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                           } issr;
                           char                            srl_nb[35];
                        } issr_and_srl_nb;
                     } rcpt_id;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                           } msk_gnrtr_algo;
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[256];
                  } key_trnsprt;
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } kekid;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[140];
                  } kek;
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } key_idr;
               } rcpt[4];
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } cntt_ncrptn_algo;
                  char                            ncrptd_data[256];
               } ncrptd_cntt;
            } envlpd_data;
         } prtctd_card_data;
         struct
         {
            char                            pan[28];
            char                            card_seq_nb[3];
            char                            fctv_dt[10];
            char                            xpry_dt[10];
            char                            svc_cd[3];
            struct
            {
               char                            trck_nb;
               char                            trck_val[140];
            } trck_data[4];
            struct
            {
               char                            cscmgmt[32];
               char                            cscval[4];
            } card_scty_cd;
         } plain_card_data;
         char                            card_ctry_cd[3];
         char                            card_ccy_cd[3];
         char                            card_pdct_prfl[3];
         char                            card_brnd[35];
         char                            addtl_card_data[70];
      } card;
      struct
      {
         struct
         {
            char                            drvrs_lic_nb[35];
            char                            cstmr_nb[35];
            char                            scl_scty_nb[35];
            char                            aln_regn_nb[35];
            char                            pspt_nb[35];
            char                            tax_id_nb[35];
            char                            idnty_card_nb[35];
            char                            mplyr_id_nb[35];
            char                            mplyee_id_nb[35];
            char                            email_adr[256];
            char                            filler_4;
            struct
            {
               long long                       birth_dt;
               char                            prvc_of_birth[35];
               char                            city_of_birth[35];
               char                            ctry_of_birth[2];
            } dt_and_plc_of_birth;
            struct
            {
               char                            id[35];
               char                            id_tp[35];
            } othr[4];
         } id;
         char                            nm[45];
         char                            lang[2];
         struct
         {
            char                            adr_line[2][70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
         } bllg_adr;
         struct
         {
            char                            adr_line[2][70];
            char                            strt_nm[70];
            char                            bldg_nb[16];
            char                            pst_cd[16];
            char                            twn_nm[35];
            char                            ctry_sub_dvsn[35];
            char                            ctry[2];
         } shppg_adr;
         struct
         {
            char                            authntcn_mtd[32];
            char                            authntcn_ntty[32];
            char                            authntcn_val[40];
            struct
            {
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                           } rcpt_id;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[256];
                        } key_trnsprt;
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                           } kekid;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[140];
                        } kek;
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } key_idr;
                     } rcpt[4];
                     struct
                     {
                        char                            cntt_tp[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } cntt_ncrptn_algo;
                        char                            ncrptd_data[256];
                     } ncrptd_cntt;
                  } envlpd_data;
               } ncrptd_pinblck;
               char                            pinfrmt[32];
               char                            addtl_inpt[35];
            } crdhldr_on_line_pin;
            char                            authntcn_colltn_ind[35];
         } authntcn[4];
         struct
         {
            char                            adr_dgts[5];
            char                            pstl_cd_dgts[5];
         } adr_vrfctn;
         char                            prsnl_data[70];
      } crdhldr;
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                           } rltv_dstngshd_nm[4];
                        } issr;
                        char                            srl_nb[35];
                     } issr_and_srl_nb;
                  } rcpt_id;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                           } param;
                        } msk_gnrtr_algo;
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[256];
               } key_trnsprt;
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } kekid;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[140];
               } kek;
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } key_idr;
            } rcpt[4];
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } cntt_ncrptn_algo;
               char                            ncrptd_data[256];
            } ncrptd_cntt;
         } envlpd_data;
      } prtctd_crdhldr_data;
   } envt;
   char                            filler_5;
   struct
   {
      struct
      {
         __int32_t                       card_pres;
         __int32_t                       crdhldr_pres;
         char                            attndnc_cntxt[32];
         char                            tx_envt[32];
         char                            tx_chanl[32];
         __int32_t                       attndnt_msg_cpbl;
         char                            attndnt_lang[2];
         char                            card_data_ntry_md[32];
         __int32_t                       fllbck_ind;
         char                            spprtd_optn[4][32];
      } pmt_cntxt;
      struct
      {
         char                            sale_id[35];
         char                            sale_ref_nb[35];
         char                            sale_rcncltn_id[35];
         char                            cshr_id[35];
         char                            shft_nb[2];
         char                            addtl_sale_data[70];
      } sale_cntxt;
   } cntxt;
   struct
   {
      __int32_t                       tx_captr;
      char                            tx_tp[32];
      char                            addtl_svc[4][32];
      char                            svc_attr[32];
      char                            mrchnt_ctgy_cd[4];
      char                            sale_ref_id[35];
      char                            filler_6;
      struct
      {
         long long                       tx_dt_tm;
         char                            tx_ref[35];
      } tx_id;
      char                            filler_7;
      struct
      {
         char                            sale_ref_id[35];
         char                            filler_8;
         struct
         {
            long long                       tx_dt_tm;
            char                            tx_ref[35];
         } tx_id;
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } poiid;
         char                            initr_tx_id[35];
         char                            rcpt_tx_id[35];
         char                            tx_tp[32];
         char                            addtl_svc[4][32];
         char                            svc_attr[32];
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } authstn_ntty;
            struct
            {
               char                            rspn[32];
               char                            rspn_rsn[35];
            } rspn_to_authstn;
            char                            authstn_cd[8];
         } tx_rslt;
      } orgnl_tx;
      char                            initr_tx_id[35];
      char                            rcncltn_id[35];
      struct
      {
         char                            ccy[3];
         char                            ttl_amt[18];
         char                            amt_qlfr[32];
         struct
         {
            char                            csh_bck[18];
            char                            grtty[18];
            struct
            {
               char                            amt[18];
               char                            labl[140];
            } fees[4];
            struct
            {
               char                            amt[18];
               char                            labl[140];
            } rbt[4];
            struct
            {
               char                            amt[18];
               char                            labl[140];
            } val_added_tax[4];
         } dtld_amt;
         char                            filler_9;
         long long                       vldty_dt;
         char                            on_line_rsn[32];
         char                            uattndd_lvl_ctgy[35];
         char                            acct_tp[32];
         char                            filler_10;
         __int32_t                       convs_accptd;
         struct
         {
            char                            ccy_convs_id[35];
            char                            rslt[32];
            char                            rspn_rsn[35];
            char                            trgt_ccy[3];
            char                            trgt_ccy_nmrc[3];
            char                            trgt_ccy_dcml[18];
            char                            trgt_ccy_nm[35];
            char                            rsltg_amt[18];
            char                            xchg_rate[18];
            char                            nvrtd_xchg_rate[18];
            char                            filler_11;
            long long                       qtn_dt;
            long long                       vld_until;
            char                            src_ccy[3];
            char                            src_ccy_nmrc[3];
            char                            src_ccy_dcml[18];
            char                            src_ccy_nm[35];
            char                            orgnl_amt[18];
            struct
            {
               char                            amt[18];
               char                            addtl_inf[256];
            } comssn_dtls[4];
            struct
            {
               char                            rate[18];
               char                            addtl_inf[256];
            } mrk_up_dtls[4];
            char                            dclrtn_dtls[256];
         } ccy_convs;
         char                            filler_12;
         struct
         {
            char                            instlmt_plan[4][32];
            char                            plan_id[35];
            char                            seq_nb[18];
            char                            prd_unit[32];
            char                            instlmt_prd[18];
            char                            ttl_nb_of_pmts[18];
            char                            filler_13;
            long long                       frst_pmt_dt;
            struct
            {
               char                            filler_14;
            } ttl_amt;
            char                            frst_amt[18];
            char                            chrgs[18];
         } instlmt;
         char                            filler_15;
         struct
         {
            long long                       frst_pmt_dt_tm;
            long long                       last_pmt_dt_tm;
            char                            nb_of_pmts[18];
            struct
            {
               char                            amt[18];
               long long                       dt_tm;
               char                            card_data_ntry_md[32];
               char                            iccrltd_data[256];
               char                            labl[140];
            } indv_pmt[4];
         } aggtn_tx;
         struct
         {
            char                            pdct_cd[70];
            char                            unit_of_measr[32];
            char                            pdct_qty[18];
            char                            unit_pric[18];
            char                            pdct_amt[18];
            char                            tax_tp[35];
            char                            addtl_pdct_inf[35];
         } pdct[4];
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp_cd[4];
               char                            nm[35];
               long long                       isse_dt_tm;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } issr;
               char                            lang_cd[32];
               __int32_t                       cpy_ind;
               char                            doc_purp[4];
               struct
               {
                  char                            inf_tp[4];
                  char                            inf_val[256];
               } incl_note[4];
            } invc_hdr;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } buyr;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } sellr;
               struct
               {
                  char                            id[35];
                  char                            filler_16;
                  long long                       dt_of_isse;
               } qtn_doc_id;
               struct
               {
                  char                            id[35];
                  char                            filler_17;
                  long long                       dt_of_isse;
               } ctrct_doc_id;
               struct
               {
                  char                            id[35];
                  char                            filler_18;
                  long long                       dt_of_isse;
               } buyr_ordr_id_doc;
               struct
               {
                  char                            doc_tp[4];
                  char                            doc_nb[35];
                  char                            sndr_rcvr_seq_id[140];
                  char                            filler_19;
                  long long                       isse_dt;
                  char                            url[256];
                  struct
                  {
                     char                            mimetp[35];
                     char                            ncodg_tp[35];
                     char                            char_set[35];
                     char                            incl_binry_objct[256];
                  } attchd_binry_file[4];
               } addtl_ref_doc[4];
               struct
               {
                  struct
                  {
                     char                            cd_rw[4];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } incotrms_cd;
                  char                            lctn[35];
               } incotrms;
            } trad_agrmt;
            char                            filler_20;
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        long long                       dt;
                        long long                       dt_tm;
                     } dt;
                     char                            not_spcfd_dt[32];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } start_dt;
                  struct
                  {
                     struct
                     {
                        long long                       dt;
                        long long                       dt_tm;
                     } dt;
                     char                            not_spcfd_dt[32];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } end_dt;
               } dlvry_prd;
               long long                       dlvry_dt_tm;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } ship_fr;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } ship_to;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } ultmt_ship_to;
               struct
               {
                  char                            id[35];
                  char                            filler_21;
                  long long                       dt_of_isse;
               } dlvry_note;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } consgnr;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } consgn;
                  struct
                  {
                     char                            md_cd[4];
                     char                            id[35];
                     char                            nm[35];
                  } trnsprt_means[4];
               } consgnmt[4];
            } trad_dlvry;
            struct
            {
               char                            id[35];
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            tp[32];
                        char                            idr[35];
                     } strd_pdct_idr;
                     struct
                     {
                        char                            id[35];
                        char                            id_tp[35];
                     } othr_pdct_idr;
                  } id[4];
                  char                            nm[35];
                  char                            desc[140];
                  struct
                  {
                     char                            cd_rw[2];
                     char                            nm[35];
                  } ctry_of_orgn[4];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            tp[32];
                           char                            chrtcs[35];
                        } strd_pdct_chrtcs;
                        struct
                        {
                           char                            id[35];
                           char                            id_tp[35];
                        } othr_pdct_chrtcs;
                     } chrtc;
                     struct
                     {
                        char                            val[18];
                     } val_measr;
                  } pdct_chrtcs[4];
                  struct
                  {
                     struct
                     {
                        char                            tp[32];
                        char                            ctgy[35];
                     } strd_pdct_ctgy;
                     struct
                     {
                        char                            id[35];
                        char                            id_tp[35];
                     } othr_pdct_ctgy;
                  } pdct_ctgy[4];
                  char                            gbl_srl_idr[4][35];
               } trad_pdct;
               struct
               {
                  char                            id[35];
                  char                            filler_22;
                  long long                       dt_of_isse;
                  char                            ordr_line_id[35];
               } buyr_ordr_id;
               char                            filler_23;
               struct
               {
                  char                            id[35];
                  char                            filler_24;
                  long long                       dt_of_isse;
               } ctrct_id;
               struct
               {
                  char                            id[35];
                  char                            cost_ref_pttrn[35];
               } purchs_acctg_acct[4];
               struct
               {
                  char                            filler_25;
               } net_pric[4];
               struct
               {
                  char                            val[18];
                  char                            fctr[15];
               } net_pric_qty;
               char                            filler_26;
               struct
               {
                  __int32_t                       chrg_ind;
                  struct
                  {
                     char                            filler_27;
                  } actl_amt[4];
                  struct
                  {
                     char                            val[18];
                  } bsis_qty;
                  char                            clctn_pct[18];
                  char                            seq_nb[18];
                  struct
                  {
                     struct
                     {
                        char                            cd_rw[32];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } chrg_tp;
                     struct
                     {
                        char                            cd_rw[32];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } dscnt_tp;
                  } rsn;
               } net_pric_allwnc_chrg[4];
               struct
               {
                  char                            val[18];
               } net_wght;
               struct
               {
                  char                            filler_28;
               } grss_pric[4];
               struct
               {
                  char                            val[18];
                  char                            fctr[15];
               } grss_pric_qty;
               struct
               {
                  char                            val[18];
               } grss_wght;
               struct
               {
                  struct
                  {
                     char                            filler_29;
                  } amt;
               } logstcs_chrg[4];
               char                            filler_30;
               struct
               {
                  struct
                  {
                     char                            filler_31;
                  } clctd_amt[4];
                  struct
                  {
                     char                            cd_rw[32];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } tp_cd;
                  long long                       tax_pt_dt;
                  char                            clctd_rate[18];
                  char                            ctgy_cd[4];
                  char                            ctgy_nm[4][35];
               } tax[4];
               struct
               {
                  __int32_t                       chrg_ind;
                  struct
                  {
                     char                            filler_32;
                  } actl_amt[4];
                  struct
                  {
                     char                            val[18];
                  } bsis_qty;
                  char                            clctn_pct[18];
                  char                            seq_nb[18];
                  struct
                  {
                     struct
                     {
                        char                            cd_rw[32];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } chrg_tp;
                     struct
                     {
                        char                            cd_rw[32];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } dscnt_tp;
                  } rsn;
               } allwnc_chrg[4];
               struct
               {
                  char                            drctn[32];
                  struct
                  {
                     char                            filler_33;
                  } amt;
               } fin_adjstmnt[4];
               struct
               {
                  char                            val[18];
               } blld_qty;
               char                            packg_qty[18];
               struct
               {
                  char                            val[18];
               } per_packg_unit_qty;
               struct
               {
                  char                            tp[4];
                  char                            nm[35];
               } packgng[4];
               struct
               {
                  char                            val[18];
               } chrg_free_qty;
               struct
               {
                  char                            val[18];
               } measr_qty_start;
               struct
               {
                  char                            val[18];
               } measr_qty_end;
               long long                       measr_dt_tm_start;
               long long                       measr_dt_tm_end;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            bic[12];
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } org_id;
                        struct
                        {
                           struct
                           {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                           } dt_and_plc_of_birth;
                           struct
                           {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                           } othr[4];
                        } prvt_id;
                     } id;
                     char                            nm[35];
                     struct
                     {
                        char                            adr_tp[32];
                        char                            dept[70];
                        char                            sub_dept[70];
                        char                            strt_nm[70];
                        char                            bldg_nb[16];
                        char                            pst_cd[16];
                        char                            twn_nm[35];
                        char                            ctry_sub_dvsn[35];
                        char                            ctry[2];
                        char                            adr_line[2][70];
                     } pstl_adr;
                     char                            ctry_of_res[2];
                     struct
                     {
                        char                            nm_prfx[32];
                        char                            nm[140];
                        char                            phne_nb[34];
                        char                            mob_nb[34];
                        char                            fax_nb[34];
                        char                            email_adr[256];
                        char                            othr[35];
                        char                            job_titl[35];
                        char                            rspnsblty[35];
                        char                            dept[70];
                     } ctct_dtls[4];
                  } pty_id;
                  struct
                  {
                     char                            id[35];
                     char                            nm[140];
                  } lgl_org;
                  struct
                  {
                     char                            tax_id[35];
                     char                            tax_tp[35];
                     char                            regn_id[35];
                     struct
                     {
                        char                            ustrd[140];
                        char                            strd[32];
                     } tax_xmptn_rsn[4];
                  } tax_pty[4];
               } ship_to;
               struct
               {
                  struct
                  {
                     char                            cd_rw[4];
                     struct
                     {
                        char                            id[4];
                        char                            schme_nm[35];
                        char                            issr[35];
                     } prtry;
                  } incotrms_cd;
                  char                            lctn[35];
               } incotrms;
               char                            filler_34;
               long long                       dlvry_dt_tm;
               struct
               {
                  char                            id[35];
                  char                            filler_35;
                  long long                       dt_of_isse;
               } dlvry_note_id;
               struct
               {
                  struct
                  {
                     char                            filler_36;
                  } line_ttl_amt[4];
                  struct
                  {
                     char                            filler_37;
                  } allwnc_ttl_amt[4];
                  struct
                  {
                     char                            filler_38;
                  } chrg_ttl_amt[4];
                  struct
                  {
                     char                            filler_39;
                  } tax_ttl_amt[4];
                  struct
                  {
                     char                            filler_40;
                  } tax_bsis_ttl_amt[4];
                  struct
                  {
                     char                            filler_41;
                  } inf_amt[4];
               } mntry_summtn;
               struct
               {
                  struct
                  {
                     char                            cd_rw[32];
                     char                            prtry[140];
                  } inf_tp;
                  char                            inf_val[256];
               } incl_note[4];
            } line_itm[4];
         } card_pmt_invc;
         char                            iccrltd_data[256];
      } tx_dtls;
      char                            addtl_tx_data[4][70];
   } tx;
} caaa_001_acceptor_author_3_def;
#define caaa_001_acceptor_author_3_def_Size 257676
#pragma section caaa_001_algorithm_iden_10
/* Definition CAAA-001-ALGORITHM-IDEN-10 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_algorithm_iden_10
typedef struct __caaa_001_algorithm_iden_10
{
   char                            algo[32];
   caaa_001_parameter_1_def        param;
} caaa_001_algorithm_iden_10_def;
#define caaa_001_algorithm_iden_10_def_Size 288
#pragma section caaa_001_encapsulated_co_2
/* Definition CAAA-001-ENCAPSULATED-CO-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_encapsulated_co_2
typedef struct __caaa_001_encapsulated_co_2
{
   char                            cntt_tp[32];
   char                            cntt[256];
} caaa_001_encapsulated_co_2_def;
#define caaa_001_encapsulated_co_2_def_Size 288
#pragma section caaa_001_authenticated_d_3
/* Definition CAAA-001-AUTHENTICATED-D-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_authenticated_d_3
typedef struct __caaa_001_authenticated_d_3
{
   char                            vrsn[18];
   struct
   {
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            attr_tp[32];
                     char                            attr_val[140];
                  } rltv_dstngshd_nm[4];
               } issr;
               char                            srl_nb[35];
            } issr_and_srl_nb;
         } rcpt_id;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            dgst_algo[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                  } param;
               } msk_gnrtr_algo;
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[256];
      } key_trnsprt;
      struct
      {
         char                            vrsn[18];
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } kekid;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[140];
      } kek;
      struct
      {
         char                            key_id[140];
         char                            key_vrsn[32];
         char                            derivtn_id[16];
      } key_idr;
   } rcpt[4];
   struct
   {
      char                            algo[32];
      struct
      {
         char                            initlstn_vctr[256];
      } param;
   } macalgo;
   struct
   {
      char                            cntt_tp[32];
      char                            cntt[256];
   } ncpsltd_cntt;
   char                            mac[35];
} caaa_001_authenticated_d_3_def;
#define caaa_001_authenticated_d_3_def_Size 8417
#pragma section caaa_001_content_informa_8
/* Definition CAAA-001-CONTENT-INFORMA-8 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_001_content_informa_8
typedef struct __caaa_001_content_informa_8
{
   char                            cntt_tp[32];
   struct
   {
      char                            vrsn[18];
      struct
      {
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            attr_tp[32];
                        char                            attr_val[140];
                     } rltv_dstngshd_nm[4];
                  } issr;
                  char                            srl_nb[35];
               } issr_and_srl_nb;
            } rcpt_id;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            dgst_algo[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                     } param;
                  } msk_gnrtr_algo;
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[256];
         } key_trnsprt;
         struct
         {
            char                            vrsn[18];
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } kekid;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[140];
         } kek;
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } key_idr;
      } rcpt[4];
      struct
      {
         char                            algo[32];
         struct
         {
            char                            initlstn_vctr[256];
         } param;
      } macalgo;
      struct
      {
         char                            cntt_tp[32];
         char                            cntt[256];
      } ncpsltd_cntt;
      char                            mac[35];
   } authntcd_data[4];
} caaa_001_content_informa_8_def;
#define caaa_001_content_informa_8_def_Size 33700
#pragma section caaa_001_acceptor_autho_03
/* Definition CAAA-001-ACCEPTOR-AUTHO-03 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_acceptor_autho_03
typedef struct __caaa_001_acceptor_autho_03
{
   struct
   {
      char                            msg_fctn[32];
      char                            prtcol_vrsn[6];
      char                            xchg_id[3];
      char                            filler_0;
      long long                       cre_dt_tm;
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } initg_pty;
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } rcpt_pty;
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } rlay_id;
         long long                       trac_dt_tm_in;
         long long                       trac_dt_tm_out;
      } tracblt[4];
   } hdr;
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } id;
            char                            params_vrsn[35];
         } acqrr;
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } id;
            char                            cmon_nm[70];
            char                            lctn_ctgy[32];
            char                            adr[140];
            char                            ctry_cd[3];
            char                            schme_data[140];
         } mrchnt;
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } id;
            char                            sys_nm[70];
            char                            grp_id[35];
            struct
            {
               char                            card_rdng_cpblties[4][32];
               char                            crdhldr_vrfctn_cpblties[4][32];
               char                            on_line_cpblties[32];
               struct
               {
                  char                            disp_tp[32];
                  char                            nb_of_lines[18];
                  char                            line_width[18];
               } disp_cpblties[4];
               char                            prt_line_width[18];
               char                            avlbl_lang[4][2];
            } cpblties;
            char                            filler_1;
            struct
            {
               char                            tp[32];
               struct
               {
                  char                            itm_nb[35];
                  char                            prvdr_id[35];
                  char                            id[35];
                  char                            srl_nb[35];
               } id;
               struct
               {
                  char                            vrsn_nb[35];
                  char                            sts[32];
               } sts;
               struct
               {
                  char                            id[35];
                  char                            vrsn[35];
                  char                            issr[35];
               } std_cmplc[4];
               char                            filler_2;
               struct
               {
                  struct
                  {
                     char                            id[35];
                     char                            ttl_sz[18];
                     char                            free_sz[18];
                     char                            unit_rw[32];
                  } mmry[4];
                  struct
                  {
                     char                            com_tp[32];
                     char                            rmot_pty[4][32];
                     __int32_t                       actv;
                  } com[4];
                  char                            scty_accs_mdls[18];
                  char                            sbcbr_idnty_mdls[18];
                  char                            key_chck_val[35];
               } chrtcs;
               char                            filler_3;
               struct
               {
                  char                            tp[32];
                  char                            assgnr[4][35];
                  long long                       dlvry_dt;
                  long long                       xprtn_dt;
                  char                            nb[35];
                  char                            filler_4;
               } assmnt[4];
            } cmpnt[4];
         } poi;
         struct
         {
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                           } issr_and_srl_nb;
                        } rcpt_id;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[256];
                     } key_trnsprt;
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } kekid;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[140];
                     } kek;
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } key_idr;
                  } rcpt[4];
                  struct
                  {
                     char                            cntt_tp[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } cntt_ncrptn_algo;
                     char                            ncrptd_data[256];
                  } ncrptd_cntt;
               } envlpd_data;
            } prtctd_card_data;
            struct
            {
               char                            pan[28];
               char                            card_seq_nb[3];
               char                            fctv_dt[10];
               char                            xpry_dt[10];
               char                            svc_cd[3];
               struct
               {
                  char                            trck_nb;
                  char                            trck_val[140];
               } trck_data[4];
               struct
               {
                  char                            cscmgmt[32];
                  char                            cscval[4];
               } card_scty_cd;
            } plain_card_data;
            char                            card_ctry_cd[3];
            char                            card_ccy_cd[3];
            char                            card_pdct_prfl[3];
            char                            card_brnd[35];
            char                            addtl_card_data[70];
         } card;
         struct
         {
            struct
            {
               char                            drvrs_lic_nb[35];
               char                            cstmr_nb[35];
               char                            scl_scty_nb[35];
               char                            aln_regn_nb[35];
               char                            pspt_nb[35];
               char                            tax_id_nb[35];
               char                            idnty_card_nb[35];
               char                            mplyr_id_nb[35];
               char                            mplyee_id_nb[35];
               char                            email_adr[256];
               char                            filler_5;
               struct
               {
                  long long                       birth_dt;
                  char                            prvc_of_birth[35];
                  char                            city_of_birth[35];
                  char                            ctry_of_birth[2];
               } dt_and_plc_of_birth;
               struct
               {
                  char                            id[35];
                  char                            id_tp[35];
               } othr[4];
            } id;
            char                            nm[45];
            char                            lang[2];
            struct
            {
               char                            adr_line[2][70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
            } bllg_adr;
            struct
            {
               char                            adr_line[2][70];
               char                            strt_nm[70];
               char                            bldg_nb[16];
               char                            pst_cd[16];
               char                            twn_nm[35];
               char                            ctry_sub_dvsn[35];
               char                            ctry[2];
            } shppg_adr;
            struct
            {
               char                            authntcn_mtd[32];
               char                            authntcn_ntty[32];
               char                            authntcn_val[40];
               struct
               {
                  struct
                  {
                     char                            cntt_tp[32];
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           struct
                           {
                              char                            vrsn[18];
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                              } rcpt_id;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[256];
                           } key_trnsprt;
                           struct
                           {
                              char                            vrsn[18];
                              struct
                              {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                              } kekid;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[140];
                           } kek;
                           struct
                           {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                           } key_idr;
                        } rcpt[4];
                        struct
                        {
                           char                            cntt_tp[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                           } cntt_ncrptn_algo;
                           char                            ncrptd_data[256];
                        } ncrptd_cntt;
                     } envlpd_data;
                  } ncrptd_pinblck;
                  char                            pinfrmt[32];
                  char                            addtl_inpt[35];
               } crdhldr_on_line_pin;
               char                            authntcn_colltn_ind[35];
            } authntcn[4];
            struct
            {
               char                            adr_dgts[5];
               char                            pstl_cd_dgts[5];
            } adr_vrfctn;
            char                            prsnl_data[70];
         } crdhldr;
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                           } issr;
                           char                            srl_nb[35];
                        } issr_and_srl_nb;
                     } rcpt_id;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                           } msk_gnrtr_algo;
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[256];
                  } key_trnsprt;
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } kekid;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[140];
                  } kek;
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } key_idr;
               } rcpt[4];
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } cntt_ncrptn_algo;
                  char                            ncrptd_data[256];
               } ncrptd_cntt;
            } envlpd_data;
         } prtctd_crdhldr_data;
      } envt;
      char                            filler_6;
      struct
      {
         struct
         {
            __int32_t                       card_pres;
            __int32_t                       crdhldr_pres;
            char                            attndnc_cntxt[32];
            char                            tx_envt[32];
            char                            tx_chanl[32];
            __int32_t                       attndnt_msg_cpbl;
            char                            attndnt_lang[2];
            char                            card_data_ntry_md[32];
            __int32_t                       fllbck_ind;
            char                            spprtd_optn[4][32];
         } pmt_cntxt;
         struct
         {
            char                            sale_id[35];
            char                            sale_ref_nb[35];
            char                            sale_rcncltn_id[35];
            char                            cshr_id[35];
            char                            shft_nb[2];
            char                            addtl_sale_data[70];
         } sale_cntxt;
      } cntxt;
      struct
      {
         __int32_t                       tx_captr;
         char                            tx_tp[32];
         char                            addtl_svc[4][32];
         char                            svc_attr[32];
         char                            mrchnt_ctgy_cd[4];
         char                            sale_ref_id[35];
         char                            filler_7;
         struct
         {
            long long                       tx_dt_tm;
            char                            tx_ref[35];
         } tx_id;
         char                            filler_8;
         struct
         {
            char                            sale_ref_id[35];
            char                            filler_9;
            struct
            {
               long long                       tx_dt_tm;
               char                            tx_ref[35];
            } tx_id;
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } poiid;
            char                            initr_tx_id[35];
            char                            rcpt_tx_id[35];
            char                            tx_tp[32];
            char                            addtl_svc[4][32];
            char                            svc_attr[32];
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } authstn_ntty;
               struct
               {
                  char                            rspn[32];
                  char                            rspn_rsn[35];
               } rspn_to_authstn;
               char                            authstn_cd[8];
            } tx_rslt;
         } orgnl_tx;
         char                            initr_tx_id[35];
         char                            rcncltn_id[35];
         struct
         {
            char                            ccy[3];
            char                            ttl_amt[18];
            char                            amt_qlfr[32];
            struct
            {
               char                            csh_bck[18];
               char                            grtty[18];
               struct
               {
                  char                            amt[18];
                  char                            labl[140];
               } fees[4];
               struct
               {
                  char                            amt[18];
                  char                            labl[140];
               } rbt[4];
               struct
               {
                  char                            amt[18];
                  char                            labl[140];
               } val_added_tax[4];
            } dtld_amt;
            char                            filler_10;
            long long                       vldty_dt;
            char                            on_line_rsn[32];
            char                            uattndd_lvl_ctgy[35];
            char                            acct_tp[32];
            char                            filler_11;
            __int32_t                       convs_accptd;
            struct
            {
               char                            ccy_convs_id[35];
               char                            rslt[32];
               char                            rspn_rsn[35];
               char                            trgt_ccy[3];
               char                            trgt_ccy_nmrc[3];
               char                            trgt_ccy_dcml[18];
               char                            trgt_ccy_nm[35];
               char                            rsltg_amt[18];
               char                            xchg_rate[18];
               char                            nvrtd_xchg_rate[18];
               char                            filler_12;
               long long                       qtn_dt;
               long long                       vld_until;
               char                            src_ccy[3];
               char                            src_ccy_nmrc[3];
               char                            src_ccy_dcml[18];
               char                            src_ccy_nm[35];
               char                            orgnl_amt[18];
               struct
               {
                  char                            amt[18];
                  char                            addtl_inf[256];
               } comssn_dtls[4];
               struct
               {
                  char                            rate[18];
                  char                            addtl_inf[256];
               } mrk_up_dtls[4];
               char                            dclrtn_dtls[256];
            } ccy_convs;
            char                            filler_13;
            struct
            {
               char                            instlmt_plan[4][32];
               char                            plan_id[35];
               char                            seq_nb[18];
               char                            prd_unit[32];
               char                            instlmt_prd[18];
               char                            ttl_nb_of_pmts[18];
               char                            filler_14;
               long long                       frst_pmt_dt;
               struct
               {
                  char                            filler_15;
               } ttl_amt;
               char                            frst_amt[18];
               char                            chrgs[18];
            } instlmt;
            char                            filler_16;
            struct
            {
               long long                       frst_pmt_dt_tm;
               long long                       last_pmt_dt_tm;
               char                            nb_of_pmts[18];
               struct
               {
                  char                            amt[18];
                  long long                       dt_tm;
                  char                            card_data_ntry_md[32];
                  char                            iccrltd_data[256];
                  char                            labl[140];
               } indv_pmt[4];
            } aggtn_tx;
            struct
            {
               char                            pdct_cd[70];
               char                            unit_of_measr[32];
               char                            pdct_qty[18];
               char                            unit_pric[18];
               char                            pdct_amt[18];
               char                            tax_tp[35];
               char                            addtl_pdct_inf[35];
            } pdct[4];
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp_cd[4];
                  char                            nm[35];
                  long long                       isse_dt_tm;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } issr;
                  char                            lang_cd[32];
                  __int32_t                       cpy_ind;
                  char                            doc_purp[4];
                  struct
                  {
                     char                            inf_tp[4];
                     char                            inf_val[256];
                  } incl_note[4];
               } invc_hdr;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } buyr;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } sellr;
                  struct
                  {
                     char                            id[35];
                     char                            filler_17;
                     long long                       dt_of_isse;
                  } qtn_doc_id;
                  struct
                  {
                     char                            id[35];
                     char                            filler_18;
                     long long                       dt_of_isse;
                  } ctrct_doc_id;
                  struct
                  {
                     char                            id[35];
                     char                            filler_19;
                     long long                       dt_of_isse;
                  } buyr_ordr_id_doc;
                  struct
                  {
                     char                            doc_tp[4];
                     char                            doc_nb[35];
                     char                            sndr_rcvr_seq_id[140];
                     char                            filler_20;
                     long long                       isse_dt;
                     char                            url[256];
                     struct
                     {
                        char                            mimetp[35];
                        char                            ncodg_tp[35];
                        char                            char_set[35];
                        char                            incl_binry_objct[256];
                     } attchd_binry_file[4];
                  } addtl_ref_doc[4];
                  struct
                  {
                     struct
                     {
                        char                            cd_rw[4];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } incotrms_cd;
                     char                            lctn[35];
                  } incotrms;
               } trad_agrmt;
               char                            filler_21;
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           long long                       dt;
                           long long                       dt_tm;
                        } dt;
                        char                            not_spcfd_dt[32];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } start_dt;
                     struct
                     {
                        struct
                        {
                           long long                       dt;
                           long long                       dt_tm;
                        } dt;
                        char                            not_spcfd_dt[32];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } end_dt;
                  } dlvry_prd;
                  long long                       dlvry_dt_tm;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } ship_fr;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } ship_to;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } ultmt_ship_to;
                  struct
                  {
                     char                            id[35];
                     char                            filler_22;
                     long long                       dt_of_isse;
                  } dlvry_note;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } consgnr;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } consgn;
                     struct
                     {
                        char                            md_cd[4];
                        char                            id[35];
                        char                            nm[35];
                     } trnsprt_means[4];
                  } consgnmt[4];
               } trad_dlvry;
               struct
               {
                  char                            id[35];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            tp[32];
                           char                            idr[35];
                        } strd_pdct_idr;
                        struct
                        {
                           char                            id[35];
                           char                            id_tp[35];
                        } othr_pdct_idr;
                     } id[4];
                     char                            nm[35];
                     char                            desc[140];
                     struct
                     {
                        char                            cd_rw[2];
                        char                            nm[35];
                     } ctry_of_orgn[4];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            tp[32];
                              char                            chrtcs[35];
                           } strd_pdct_chrtcs;
                           struct
                           {
                              char                            id[35];
                              char                            id_tp[35];
                           } othr_pdct_chrtcs;
                        } chrtc;
                        struct
                        {
                           char                            val[18];
                        } val_measr;
                     } pdct_chrtcs[4];
                     struct
                     {
                        struct
                        {
                           char                            tp[32];
                           char                            ctgy[35];
                        } strd_pdct_ctgy;
                        struct
                        {
                           char                            id[35];
                           char                            id_tp[35];
                        } othr_pdct_ctgy;
                     } pdct_ctgy[4];
                     char                            gbl_srl_idr[4][35];
                  } trad_pdct;
                  struct
                  {
                     char                            id[35];
                     char                            filler_23;
                     long long                       dt_of_isse;
                     char                            ordr_line_id[35];
                  } buyr_ordr_id;
                  char                            filler_24;
                  struct
                  {
                     char                            id[35];
                     char                            filler_25;
                     long long                       dt_of_isse;
                  } ctrct_id;
                  struct
                  {
                     char                            id[35];
                     char                            cost_ref_pttrn[35];
                  } purchs_acctg_acct[4];
                  struct
                  {
                     char                            filler_26;
                  } net_pric[4];
                  struct
                  {
                     char                            val[18];
                     char                            fctr[15];
                  } net_pric_qty;
                  char                            filler_27;
                  struct
                  {
                     __int32_t                       chrg_ind;
                     struct
                     {
                        char                            filler_28;
                     } actl_amt[4];
                     struct
                     {
                        char                            val[18];
                     } bsis_qty;
                     char                            clctn_pct[18];
                     char                            seq_nb[18];
                     struct
                     {
                        struct
                        {
                           char                            cd_rw[32];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } chrg_tp;
                        struct
                        {
                           char                            cd_rw[32];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } dscnt_tp;
                     } rsn;
                  } net_pric_allwnc_chrg[4];
                  struct
                  {
                     char                            val[18];
                  } net_wght;
                  struct
                  {
                     char                            filler_29;
                  } grss_pric[4];
                  struct
                  {
                     char                            val[18];
                     char                            fctr[15];
                  } grss_pric_qty;
                  struct
                  {
                     char                            val[18];
                  } grss_wght;
                  struct
                  {
                     struct
                     {
                        char                            filler_30;
                     } amt;
                  } logstcs_chrg[4];
                  char                            filler_31;
                  struct
                  {
                     struct
                     {
                        char                            filler_32;
                     } clctd_amt[4];
                     struct
                     {
                        char                            cd_rw[32];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } tp_cd;
                     long long                       tax_pt_dt;
                     char                            clctd_rate[18];
                     char                            ctgy_cd[4];
                     char                            ctgy_nm[4][35];
                  } tax[4];
                  struct
                  {
                     __int32_t                       chrg_ind;
                     struct
                     {
                        char                            filler_33;
                     } actl_amt[4];
                     struct
                     {
                        char                            val[18];
                     } bsis_qty;
                     char                            clctn_pct[18];
                     char                            seq_nb[18];
                     struct
                     {
                        struct
                        {
                           char                            cd_rw[32];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } chrg_tp;
                        struct
                        {
                           char                            cd_rw[32];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } dscnt_tp;
                     } rsn;
                  } allwnc_chrg[4];
                  struct
                  {
                     char                            drctn[32];
                     struct
                     {
                        char                            filler_34;
                     } amt;
                  } fin_adjstmnt[4];
                  struct
                  {
                     char                            val[18];
                  } blld_qty;
                  char                            packg_qty[18];
                  struct
                  {
                     char                            val[18];
                  } per_packg_unit_qty;
                  struct
                  {
                     char                            tp[4];
                     char                            nm[35];
                  } packgng[4];
                  struct
                  {
                     char                            val[18];
                  } chrg_free_qty;
                  struct
                  {
                     char                            val[18];
                  } measr_qty_start;
                  struct
                  {
                     char                            val[18];
                  } measr_qty_end;
                  long long                       measr_dt_tm_start;
                  long long                       measr_dt_tm_end;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } org_id;
                           struct
                           {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                           } prvt_id;
                        } id;
                        char                            nm[35];
                        struct
                        {
                           char                            adr_tp[32];
                           char                            dept[70];
                           char                            sub_dept[70];
                           char                            strt_nm[70];
                           char                            bldg_nb[16];
                           char                            pst_cd[16];
                           char                            twn_nm[35];
                           char                            ctry_sub_dvsn[35];
                           char                            ctry[2];
                           char                            adr_line[2][70];
                        } pstl_adr;
                        char                            ctry_of_res[2];
                        struct
                        {
                           char                            nm_prfx[32];
                           char                            nm[140];
                           char                            phne_nb[34];
                           char                            mob_nb[34];
                           char                            fax_nb[34];
                           char                            email_adr[256];
                           char                            othr[35];
                           char                            job_titl[35];
                           char                            rspnsblty[35];
                           char                            dept[70];
                        } ctct_dtls[4];
                     } pty_id;
                     struct
                     {
                        char                            id[35];
                        char                            nm[140];
                     } lgl_org;
                     struct
                     {
                        char                            tax_id[35];
                        char                            tax_tp[35];
                        char                            regn_id[35];
                        struct
                        {
                           char                            ustrd[140];
                           char                            strd[32];
                        } tax_xmptn_rsn[4];
                     } tax_pty[4];
                  } ship_to;
                  struct
                  {
                     struct
                     {
                        char                            cd_rw[4];
                        struct
                        {
                           char                            id[4];
                           char                            schme_nm[35];
                           char                            issr[35];
                        } prtry;
                     } incotrms_cd;
                     char                            lctn[35];
                  } incotrms;
                  char                            filler_35;
                  long long                       dlvry_dt_tm;
                  struct
                  {
                     char                            id[35];
                     char                            filler_36;
                     long long                       dt_of_isse;
                  } dlvry_note_id;
                  struct
                  {
                     struct
                     {
                        char                            filler_37;
                     } line_ttl_amt[4];
                     struct
                     {
                        char                            filler_38;
                     } allwnc_ttl_amt[4];
                     struct
                     {
                        char                            filler_39;
                     } chrg_ttl_amt[4];
                     struct
                     {
                        char                            filler_40;
                     } tax_ttl_amt[4];
                     struct
                     {
                        char                            filler_41;
                     } tax_bsis_ttl_amt[4];
                     struct
                     {
                        char                            filler_42;
                     } inf_amt[4];
                  } mntry_summtn;
                  struct
                  {
                     struct
                     {
                        char                            cd_rw[32];
                        char                            prtry[140];
                     } inf_tp;
                     char                            inf_val[256];
                  } incl_note[4];
               } line_itm[4];
            } card_pmt_invc;
            char                            iccrltd_data[256];
         } tx_dtls;
         char                            addtl_tx_data[4][70];
      } tx;
   } authstn_req;
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            attr_tp[32];
                           char                            attr_val[140];
                        } rltv_dstngshd_nm[4];
                     } issr;
                     char                            srl_nb[35];
                  } issr_and_srl_nb;
               } rcpt_id;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                        } param;
                     } msk_gnrtr_algo;
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[256];
            } key_trnsprt;
            struct
            {
               char                            vrsn[18];
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } kekid;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[140];
            } kek;
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } key_idr;
         } rcpt[4];
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } macalgo;
         struct
         {
            char                            cntt_tp[32];
            char                            cntt[256];
         } ncpsltd_cntt;
         char                            mac[35];
      } authntcd_data[4];
   } scty_trlr;
} caaa_001_acceptor_autho_03_def;
#define caaa_001_acceptor_autho_03_def_Size 292294
#pragma section caaa_001_document
/* Definition CAAA-001-DOCUMENT created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_001_document
typedef struct __caaa_001_document
{
   struct
   {
      struct
      {
         char                            msg_fctn[32];
         char                            prtcol_vrsn[6];
         char                            xchg_id[3];
         char                            filler_0;
         long long                       cre_dt_tm;
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } initg_pty;
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } rcpt_pty;
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } rlay_id;
            long long                       trac_dt_tm_in;
            long long                       trac_dt_tm_out;
         } tracblt[4];
      } hdr;
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } id;
               char                            params_vrsn[35];
            } acqrr;
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } id;
               char                            cmon_nm[70];
               char                            lctn_ctgy[32];
               char                            adr[140];
               char                            ctry_cd[3];
               char                            schme_data[140];
            } mrchnt;
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } id;
               char                            sys_nm[70];
               char                            grp_id[35];
               struct
               {
                  char                            card_rdng_cpblties[4][32];
                  char                            crdhldr_vrfctn_cpblties[4][32];
                  char                            on_line_cpblties[32];
                  struct
                  {
                     char                            disp_tp[32];
                     char                            nb_of_lines[18];
                     char                            line_width[18];
                  } disp_cpblties[4];
                  char                            prt_line_width[18];
                  char                            avlbl_lang[4][2];
               } cpblties;
               char                            filler_1;
               struct
               {
                  char                            tp[32];
                  struct
                  {
                     char                            itm_nb[35];
                     char                            prvdr_id[35];
                     char                            id[35];
                     char                            srl_nb[35];
                  } id;
                  struct
                  {
                     char                            vrsn_nb[35];
                     char                            sts[32];
                  } sts;
                  struct
                  {
                     char                            id[35];
                     char                            vrsn[35];
                     char                            issr[35];
                  } std_cmplc[4];
                  char                            filler_2;
                  struct
                  {
                     struct
                     {
                        char                            id[35];
                        char                            ttl_sz[18];
                        char                            free_sz[18];
                        char                            unit_rw[32];
                     } mmry[4];
                     struct
                     {
                        char                            com_tp[32];
                        char                            rmot_pty[4][32];
                        __int32_t                       actv;
                     } com[4];
                     char                            scty_accs_mdls[18];
                     char                            sbcbr_idnty_mdls[18];
                     char                            key_chck_val[35];
                  } chrtcs;
                  char                            filler_3;
                  struct
                  {
                     char                            tp[32];
                     char                            assgnr[4][35];
                     long long                       dlvry_dt;
                     long long                       xprtn_dt;
                     char                            nb[35];
                     char                            filler_4;
                  } assmnt[4];
               } cmpnt[4];
            } poi;
            struct
            {
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                           } rcpt_id;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[256];
                        } key_trnsprt;
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                           } kekid;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[140];
                        } kek;
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } key_idr;
                     } rcpt[4];
                     struct
                     {
                        char                            cntt_tp[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } cntt_ncrptn_algo;
                        char                            ncrptd_data[256];
                     } ncrptd_cntt;
                  } envlpd_data;
               } prtctd_card_data;
               struct
               {
                  char                            pan[28];
                  char                            card_seq_nb[3];
                  char                            fctv_dt[10];
                  char                            xpry_dt[10];
                  char                            svc_cd[3];
                  struct
                  {
                     char                            trck_nb;
                     char                            trck_val[140];
                  } trck_data[4];
                  struct
                  {
                     char                            cscmgmt[32];
                     char                            cscval[4];
                  } card_scty_cd;
               } plain_card_data;
               char                            card_ctry_cd[3];
               char                            card_ccy_cd[3];
               char                            card_pdct_prfl[3];
               char                            card_brnd[35];
               char                            addtl_card_data[70];
            } card;
            struct
            {
               struct
               {
                  char                            drvrs_lic_nb[35];
                  char                            cstmr_nb[35];
                  char                            scl_scty_nb[35];
                  char                            aln_regn_nb[35];
                  char                            pspt_nb[35];
                  char                            tax_id_nb[35];
                  char                            idnty_card_nb[35];
                  char                            mplyr_id_nb[35];
                  char                            mplyee_id_nb[35];
                  char                            email_adr[256];
                  char                            filler_5;
                  struct
                  {
                     long long                       birth_dt;
                     char                            prvc_of_birth[35];
                     char                            city_of_birth[35];
                     char                            ctry_of_birth[2];
                  } dt_and_plc_of_birth;
                  struct
                  {
                     char                            id[35];
                     char                            id_tp[35];
                  } othr[4];
               } id;
               char                            nm[45];
               char                            lang[2];
               struct
               {
                  char                            adr_line[2][70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
               } bllg_adr;
               struct
               {
                  char                            adr_line[2][70];
                  char                            strt_nm[70];
                  char                            bldg_nb[16];
                  char                            pst_cd[16];
                  char                            twn_nm[35];
                  char                            ctry_sub_dvsn[35];
                  char                            ctry[2];
               } shppg_adr;
               struct
               {
                  char                            authntcn_mtd[32];
                  char                            authntcn_ntty[32];
                  char                            authntcn_val[40];
                  struct
                  {
                     struct
                     {
                        char                            cntt_tp[32];
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              struct
                              {
                              char                            vrsn[18];
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                              } rcpt_id;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[256];
                              } key_trnsprt;
                              struct
                              {
                              char                            vrsn[18];
                              struct
                              {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                              } kekid;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[140];
                              } kek;
                              struct
                              {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                              } key_idr;
                           } rcpt[4];
                           struct
                           {
                              char                            cntt_tp[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                              } cntt_ncrptn_algo;
                              char                            ncrptd_data[256];
                           } ncrptd_cntt;
                        } envlpd_data;
                     } ncrptd_pinblck;
                     char                            pinfrmt[32];
                     char                            addtl_inpt[35];
                  } crdhldr_on_line_pin;
                  char                            authntcn_colltn_ind[35];
               } authntcn[4];
               struct
               {
                  char                            adr_dgts[5];
                  char                            pstl_cd_dgts[5];
               } adr_vrfctn;
               char                            prsnl_data[70];
            } crdhldr;
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                           } issr_and_srl_nb;
                        } rcpt_id;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[256];
                     } key_trnsprt;
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } kekid;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[140];
                     } kek;
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } key_idr;
                  } rcpt[4];
                  struct
                  {
                     char                            cntt_tp[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } cntt_ncrptn_algo;
                     char                            ncrptd_data[256];
                  } ncrptd_cntt;
               } envlpd_data;
            } prtctd_crdhldr_data;
         } envt;
         char                            filler_6;
         struct
         {
            struct
            {
               __int32_t                       card_pres;
               __int32_t                       crdhldr_pres;
               char                            attndnc_cntxt[32];
               char                            tx_envt[32];
               char                            tx_chanl[32];
               __int32_t                       attndnt_msg_cpbl;
               char                            attndnt_lang[2];
               char                            card_data_ntry_md[32];
               __int32_t                       fllbck_ind;
               char                            spprtd_optn[4][32];
            } pmt_cntxt;
            struct
            {
               char                            sale_id[35];
               char                            sale_ref_nb[35];
               char                            sale_rcncltn_id[35];
               char                            cshr_id[35];
               char                            shft_nb[2];
               char                            addtl_sale_data[70];
            } sale_cntxt;
         } cntxt;
         struct
         {
            __int32_t                       tx_captr;
            char                            tx_tp[32];
            char                            addtl_svc[4][32];
            char                            svc_attr[32];
            char                            mrchnt_ctgy_cd[4];
            char                            sale_ref_id[35];
            char                            filler_7;
            struct
            {
               long long                       tx_dt_tm;
               char                            tx_ref[35];
            } tx_id;
            char                            filler_8;
            struct
            {
               char                            sale_ref_id[35];
               char                            filler_9;
               struct
               {
                  long long                       tx_dt_tm;
                  char                            tx_ref[35];
               } tx_id;
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } poiid;
               char                            initr_tx_id[35];
               char                            rcpt_tx_id[35];
               char                            tx_tp[32];
               char                            addtl_svc[4][32];
               char                            svc_attr[32];
               struct
               {
                  struct
                  {
                     char                            id[35];
                     char                            tp[32];
                     char                            issr[32];
                     char                            shrt_nm[35];
                  } authstn_ntty;
                  struct
                  {
                     char                            rspn[32];
                     char                            rspn_rsn[35];
                  } rspn_to_authstn;
                  char                            authstn_cd[8];
               } tx_rslt;
            } orgnl_tx;
            char                            initr_tx_id[35];
            char                            rcncltn_id[35];
            struct
            {
               char                            ccy[3];
               char                            ttl_amt[18];
               char                            amt_qlfr[32];
               struct
               {
                  char                            csh_bck[18];
                  char                            grtty[18];
                  struct
                  {
                     char                            amt[18];
                     char                            labl[140];
                  } fees[4];
                  struct
                  {
                     char                            amt[18];
                     char                            labl[140];
                  } rbt[4];
                  struct
                  {
                     char                            amt[18];
                     char                            labl[140];
                  } val_added_tax[4];
               } dtld_amt;
               char                            filler_10;
               long long                       vldty_dt;
               char                            on_line_rsn[32];
               char                            uattndd_lvl_ctgy[35];
               char                            acct_tp[32];
               char                            filler_11;
               __int32_t                       convs_accptd;
               struct
               {
                  char                            ccy_convs_id[35];
                  char                            rslt[32];
                  char                            rspn_rsn[35];
                  char                            trgt_ccy[3];
                  char                            trgt_ccy_nmrc[3];
                  char                            trgt_ccy_dcml[18];
                  char                            trgt_ccy_nm[35];
                  char                            rsltg_amt[18];
                  char                            xchg_rate[18];
                  char                            nvrtd_xchg_rate[18];
                  char                            filler_12;
                  long long                       qtn_dt;
                  long long                       vld_until;
                  char                            src_ccy[3];
                  char                            src_ccy_nmrc[3];
                  char                            src_ccy_dcml[18];
                  char                            src_ccy_nm[35];
                  char                            orgnl_amt[18];
                  struct
                  {
                     char                            amt[18];
                     char                            addtl_inf[256];
                  } comssn_dtls[4];
                  struct
                  {
                     char                            rate[18];
                     char                            addtl_inf[256];
                  } mrk_up_dtls[4];
                  char                            dclrtn_dtls[256];
               } ccy_convs;
               char                            filler_13;
               struct
               {
                  char                            instlmt_plan[4][32];
                  char                            plan_id[35];
                  char                            seq_nb[18];
                  char                            prd_unit[32];
                  char                            instlmt_prd[18];
                  char                            ttl_nb_of_pmts[18];
                  char                            filler_14;
                  long long                       frst_pmt_dt;
                  struct
                  {
                     char                            filler_15;
                  } ttl_amt;
                  char                            frst_amt[18];
                  char                            chrgs[18];
               } instlmt;
               char                            filler_16;
               struct
               {
                  long long                       frst_pmt_dt_tm;
                  long long                       last_pmt_dt_tm;
                  char                            nb_of_pmts[18];
                  struct
                  {
                     char                            amt[18];
                     long long                       dt_tm;
                     char                            card_data_ntry_md[32];
                     char                            iccrltd_data[256];
                     char                            labl[140];
                  } indv_pmt[4];
               } aggtn_tx;
               struct
               {
                  char                            pdct_cd[70];
                  char                            unit_of_measr[32];
                  char                            pdct_qty[18];
                  char                            unit_pric[18];
                  char                            pdct_amt[18];
                  char                            tax_tp[35];
                  char                            addtl_pdct_inf[35];
               } pdct[4];
               struct
               {
                  struct
                  {
                     char                            id[35];
                     char                            tp_cd[4];
                     char                            nm[35];
                     long long                       isse_dt_tm;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } issr;
                     char                            lang_cd[32];
                     __int32_t                       cpy_ind;
                     char                            doc_purp[4];
                     struct
                     {
                        char                            inf_tp[4];
                        char                            inf_val[256];
                     } incl_note[4];
                  } invc_hdr;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } buyr;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } sellr;
                     struct
                     {
                        char                            id[35];
                        char                            filler_17;
                        long long                       dt_of_isse;
                     } qtn_doc_id;
                     struct
                     {
                        char                            id[35];
                        char                            filler_18;
                        long long                       dt_of_isse;
                     } ctrct_doc_id;
                     struct
                     {
                        char                            id[35];
                        char                            filler_19;
                        long long                       dt_of_isse;
                     } buyr_ordr_id_doc;
                     struct
                     {
                        char                            doc_tp[4];
                        char                            doc_nb[35];
                        char                            sndr_rcvr_seq_id[140];
                        char                            filler_20;
                        long long                       isse_dt;
                        char                            url[256];
                        struct
                        {
                           char                            mimetp[35];
                           char                            ncodg_tp[35];
                           char                            char_set[35];
                           char                            incl_binry_objct[256];
                        } attchd_binry_file[4];
                     } addtl_ref_doc[4];
                     struct
                     {
                        struct
                        {
                           char                            cd_rw[4];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } incotrms_cd;
                        char                            lctn[35];
                     } incotrms;
                  } trad_agrmt;
                  char                            filler_21;
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              long long                       dt;
                              long long                       dt_tm;
                           } dt;
                           char                            not_spcfd_dt[32];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } start_dt;
                        struct
                        {
                           struct
                           {
                              long long                       dt;
                              long long                       dt_tm;
                           } dt;
                           char                            not_spcfd_dt[32];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } end_dt;
                     } dlvry_prd;
                     long long                       dlvry_dt_tm;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } ship_fr;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } ship_to;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } ultmt_ship_to;
                     struct
                     {
                        char                            id[35];
                        char                            filler_22;
                        long long                       dt_of_isse;
                     } dlvry_note;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } consgnr;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } consgn;
                        struct
                        {
                           char                            md_cd[4];
                           char                            id[35];
                           char                            nm[35];
                        } trnsprt_means[4];
                     } consgnmt[4];
                  } trad_dlvry;
                  struct
                  {
                     char                            id[35];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            tp[32];
                              char                            idr[35];
                           } strd_pdct_idr;
                           struct
                           {
                              char                            id[35];
                              char                            id_tp[35];
                           } othr_pdct_idr;
                        } id[4];
                        char                            nm[35];
                        char                            desc[140];
                        struct
                        {
                           char                            cd_rw[2];
                           char                            nm[35];
                        } ctry_of_orgn[4];
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            tp[32];
                              char                            chrtcs[35];
                              } strd_pdct_chrtcs;
                              struct
                              {
                              char                            id[35];
                              char                            id_tp[35];
                              } othr_pdct_chrtcs;
                           } chrtc;
                           struct
                           {
                              char                            val[18];
                           } val_measr;
                        } pdct_chrtcs[4];
                        struct
                        {
                           struct
                           {
                              char                            tp[32];
                              char                            ctgy[35];
                           } strd_pdct_ctgy;
                           struct
                           {
                              char                            id[35];
                              char                            id_tp[35];
                           } othr_pdct_ctgy;
                        } pdct_ctgy[4];
                        char                            gbl_srl_idr[4][35];
                     } trad_pdct;
                     struct
                     {
                        char                            id[35];
                        char                            filler_23;
                        long long                       dt_of_isse;
                        char                            ordr_line_id[35];
                     } buyr_ordr_id;
                     char                            filler_24;
                     struct
                     {
                        char                            id[35];
                        char                            filler_25;
                        long long                       dt_of_isse;
                     } ctrct_id;
                     struct
                     {
                        char                            id[35];
                        char                            cost_ref_pttrn[35];
                     } purchs_acctg_acct[4];
                     struct
                     {
                        char                            filler_26;
                     } net_pric[4];
                     struct
                     {
                        char                            val[18];
                        char                            fctr[15];
                     } net_pric_qty;
                     char                            filler_27;
                     struct
                     {
                        __int32_t                       chrg_ind;
                        struct
                        {
                           char                            filler_28;
                        } actl_amt[4];
                        struct
                        {
                           char                            val[18];
                        } bsis_qty;
                        char                            clctn_pct[18];
                        char                            seq_nb[18];
                        struct
                        {
                           struct
                           {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } chrg_tp;
                           struct
                           {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } dscnt_tp;
                        } rsn;
                     } net_pric_allwnc_chrg[4];
                     struct
                     {
                        char                            val[18];
                     } net_wght;
                     struct
                     {
                        char                            filler_29;
                     } grss_pric[4];
                     struct
                     {
                        char                            val[18];
                        char                            fctr[15];
                     } grss_pric_qty;
                     struct
                     {
                        char                            val[18];
                     } grss_wght;
                     struct
                     {
                        struct
                        {
                           char                            filler_30;
                        } amt;
                     } logstcs_chrg[4];
                     char                            filler_31;
                     struct
                     {
                        struct
                        {
                           char                            filler_32;
                        } clctd_amt[4];
                        struct
                        {
                           char                            cd_rw[32];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } tp_cd;
                        long long                       tax_pt_dt;
                        char                            clctd_rate[18];
                        char                            ctgy_cd[4];
                        char                            ctgy_nm[4][35];
                     } tax[4];
                     struct
                     {
                        __int32_t                       chrg_ind;
                        struct
                        {
                           char                            filler_33;
                        } actl_amt[4];
                        struct
                        {
                           char                            val[18];
                        } bsis_qty;
                        char                            clctn_pct[18];
                        char                            seq_nb[18];
                        struct
                        {
                           struct
                           {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } chrg_tp;
                           struct
                           {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } dscnt_tp;
                        } rsn;
                     } allwnc_chrg[4];
                     struct
                     {
                        char                            drctn[32];
                        struct
                        {
                           char                            filler_34;
                        } amt;
                     } fin_adjstmnt[4];
                     struct
                     {
                        char                            val[18];
                     } blld_qty;
                     char                            packg_qty[18];
                     struct
                     {
                        char                            val[18];
                     } per_packg_unit_qty;
                     struct
                     {
                        char                            tp[4];
                        char                            nm[35];
                     } packgng[4];
                     struct
                     {
                        char                            val[18];
                     } chrg_free_qty;
                     struct
                     {
                        char                            val[18];
                     } measr_qty_start;
                     struct
                     {
                        char                            val[18];
                     } measr_qty_end;
                     long long                       measr_dt_tm_start;
                     long long                       measr_dt_tm_end;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                           } id;
                           char                            nm[35];
                           struct
                           {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                           } pstl_adr;
                           char                            ctry_of_res[2];
                           struct
                           {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                           } ctct_dtls[4];
                        } pty_id;
                        struct
                        {
                           char                            id[35];
                           char                            nm[140];
                        } lgl_org;
                        struct
                        {
                           char                            tax_id[35];
                           char                            tax_tp[35];
                           char                            regn_id[35];
                           struct
                           {
                              char                            ustrd[140];
                              char                            strd[32];
                           } tax_xmptn_rsn[4];
                        } tax_pty[4];
                     } ship_to;
                     struct
                     {
                        struct
                        {
                           char                            cd_rw[4];
                           struct
                           {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                           } prtry;
                        } incotrms_cd;
                        char                            lctn[35];
                     } incotrms;
                     char                            filler_35;
                     long long                       dlvry_dt_tm;
                     struct
                     {
                        char                            id[35];
                        char                            filler_36;
                        long long                       dt_of_isse;
                     } dlvry_note_id;
                     struct
                     {
                        struct
                        {
                           char                            filler_37;
                        } line_ttl_amt[4];
                        struct
                        {
                           char                            filler_38;
                        } allwnc_ttl_amt[4];
                        struct
                        {
                           char                            filler_39;
                        } chrg_ttl_amt[4];
                        struct
                        {
                           char                            filler_40;
                        } tax_ttl_amt[4];
                        struct
                        {
                           char                            filler_41;
                        } tax_bsis_ttl_amt[4];
                        struct
                        {
                           char                            filler_42;
                        } inf_amt[4];
                     } mntry_summtn;
                     struct
                     {
                        struct
                        {
                           char                            cd_rw[32];
                           char                            prtry[140];
                        } inf_tp;
                        char                            inf_val[256];
                     } incl_note[4];
                  } line_itm[4];
               } card_pmt_invc;
               char                            iccrltd_data[256];
            } tx_dtls;
            char                            addtl_tx_data[4][70];
         } tx;
      } authstn_req;
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                           } rltv_dstngshd_nm[4];
                        } issr;
                        char                            srl_nb[35];
                     } issr_and_srl_nb;
                  } rcpt_id;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                           } param;
                        } msk_gnrtr_algo;
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[256];
               } key_trnsprt;
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } kekid;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[140];
               } kek;
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } key_idr;
            } rcpt[4];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } macalgo;
            struct
            {
               char                            cntt_tp[32];
               char                            cntt[256];
            } ncpsltd_cntt;
            char                            mac[35];
         } authntcd_data[4];
      } scty_trlr;
   } accptr_authstn_req;
} caaa_001_document_def;
#define caaa_001_document_def_Size 292294
#pragma section caaa_002_any_type
/* Definition CAAA-002-ANY-TYPE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_any_type
typedef struct __caaa_002_any_type
{
   char                            filler_0;
} caaa_002_any_type_def;
#define caaa_002_any_type_def_Size 1
#pragma section caaa_002_generic_identi_31
/* Definition CAAA-002-GENERIC-IDENTI-31 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_generic_identi_31
typedef struct __caaa_002_generic_identi_31
{
   char                            id[35];
   char                            tp[32];
   char                            issr[32];
   char                            shrt_nm[35];
} caaa_002_generic_identi_31_def;
#define caaa_002_generic_identi_31_def_Size 134
#pragma section caaa_002_traceability_1
/* Definition CAAA-002-TRACEABILITY-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_traceability_1
typedef struct __caaa_002_traceability_1
{
   caaa_002_generic_identi_31_def  rlay_id;
   long long                       trac_dt_tm_in;
   long long                       trac_dt_tm_out;
} caaa_002_traceability_1_def;
#define caaa_002_traceability_1_def_Size 150
#pragma section caaa_002_kekidentifier_1
/* Definition CAAA-002-KEKIDENTIFIER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_kekidentifier_1
typedef struct __caaa_002_kekidentifier_1
{
   char                            key_id[140];
   char                            key_vrsn[32];
   char                            derivtn_id[16];
} caaa_002_kekidentifier_1_def;
#define caaa_002_kekidentifier_1_def_Size 188
#pragma section caaa_002_parameter_1
/* Definition CAAA-002-PARAMETER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_parameter_1
typedef struct __caaa_002_parameter_1
{
   char                            initlstn_vctr[256];
} caaa_002_parameter_1_def;
#define caaa_002_parameter_1_def_Size 256
#pragma section caaa_002_algorithm_ident_9
/* Definition CAAA-002-ALGORITHM-IDENT-9 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_algorithm_ident_9
typedef struct __caaa_002_algorithm_ident_9
{
   char                            algo[32];
   caaa_002_parameter_1_def        param;
} caaa_002_algorithm_ident_9_def;
#define caaa_002_algorithm_ident_9_def_Size 288
#pragma section caaa_002_kek_3
/* Definition CAAA-002-KEK-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_kek_3
typedef struct __caaa_002_kek_3
{
   char                            vrsn[18];
   caaa_002_kekidentifier_1_def    kekid;
   caaa_002_algorithm_ident_9_def  key_ncrptn_algo;
   char                            ncrptd_key[140];
} caaa_002_kek_3_def;
#define caaa_002_kek_3_def_Size 634
#pragma section caaa_002_plain_card_data_5
/* Definition CAAA-002-PLAIN-CARD-DATA-5 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_plain_card_data_5
typedef struct __caaa_002_plain_card_data_5
{
   char                            pan[28];
   char                            card_seq_nb[3];
   char                            fctv_dt[10];
   char                            xpry_dt[10];
} caaa_002_plain_card_data_5_def;
#define caaa_002_plain_card_data_5_def_Size 51
#pragma section caaa_002_algorithm_ident_6
/* Definition CAAA-002-ALGORITHM-IDENT-6 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_algorithm_ident_6
typedef struct __caaa_002_algorithm_ident_6
{
   char                            algo[32];
   caaa_002_parameter_1_def        param;
} caaa_002_algorithm_ident_6_def;
#define caaa_002_algorithm_ident_6_def_Size 288
#pragma section caaa_002_encrypted_conte_2
/* Definition CAAA-002-ENCRYPTED-CONTE-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_encrypted_conte_2
typedef struct __caaa_002_encrypted_conte_2
{
   char                            cntt_tp[32];
   caaa_002_algorithm_ident_6_def  cntt_ncrptn_algo;
   char                            ncrptd_data[256];
} caaa_002_encrypted_conte_2_def;
#define caaa_002_encrypted_conte_2_def_Size 576
#pragma section caaa_002_generic_identi_32
/* Definition CAAA-002-GENERIC-IDENTI-32 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_generic_identi_32
typedef struct __caaa_002_generic_identi_32
{
   char                            id[35];
   char                            tp[32];
   char                            issr[32];
   char                            shrt_nm[35];
} caaa_002_generic_identi_32_def;
#define caaa_002_generic_identi_32_def_Size 134
#pragma section caaa_002_header_7
/* Definition CAAA-002-HEADER-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_header_7
typedef struct __caaa_002_header_7
{
   char                            msg_fctn[32];
   char                            prtcol_vrsn[6];
   char                            xchg_id[3];
   long long                       cre_dt_tm;
   caaa_002_generic_identi_32_def  initg_pty;
   caaa_002_generic_identi_32_def  rcpt_pty;
   caaa_002_traceability_1_def     tracblt[4];
} caaa_002_header_7_def;
#define caaa_002_header_7_def_Size 918
#pragma section caaa_002_relative_distin_1
/* Definition CAAA-002-RELATIVE-DISTIN-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_relative_distin_1
typedef struct __caaa_002_relative_distin_1
{
   char                            attr_tp[32];
   char                            attr_val[140];
} caaa_002_relative_distin_1_def;
#define caaa_002_relative_distin_1_def_Size 172
#pragma section caaa_002_certificate_iss_1
/* Definition CAAA-002-CERTIFICATE-ISS-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_certificate_iss_1
typedef struct __caaa_002_certificate_iss_1
{
   caaa_002_relative_distin_1_def  rltv_dstngshd_nm[4];
} caaa_002_certificate_iss_1_def;
#define caaa_002_certificate_iss_1_def_Size 688
#pragma section caaa_002_issuer_and_seri_1
/* Definition CAAA-002-ISSUER-AND-SERI-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_issuer_and_seri_1
typedef struct __caaa_002_issuer_and_seri_1
{
   caaa_002_certificate_iss_1_def  issr;
   char                            srl_nb[35];
} caaa_002_issuer_and_seri_1_def;
#define caaa_002_issuer_and_seri_1_def_Size 723
#pragma section caaa_002_certificate_ide_1
/* Definition CAAA-002-CERTIFICATE-IDE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_certificate_ide_1
typedef struct __caaa_002_certificate_ide_1
{
   caaa_002_issuer_and_seri_1_def  issr_and_srl_nb;
} caaa_002_certificate_ide_1_def;
#define caaa_002_certificate_ide_1_def_Size 723
#pragma section caaa_002_parameter_3
/* Definition CAAA-002-PARAMETER-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_parameter_3
typedef struct __caaa_002_parameter_3
{
   char                            dgst_algo[32];
} caaa_002_parameter_3_def;
#define caaa_002_parameter_3_def_Size 32
#pragma section caaa_002_algorithm_ident_8
/* Definition CAAA-002-ALGORITHM-IDENT-8 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_algorithm_ident_8
typedef struct __caaa_002_algorithm_ident_8
{
   char                            algo[32];
   caaa_002_parameter_3_def        param;
} caaa_002_algorithm_ident_8_def;
#define caaa_002_algorithm_ident_8_def_Size 64
#pragma section caaa_002_parameter_2
/* Definition CAAA-002-PARAMETER-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_parameter_2
typedef struct __caaa_002_parameter_2
{
   char                            dgst_algo[32];
   caaa_002_algorithm_ident_8_def  msk_gnrtr_algo;
} caaa_002_parameter_2_def;
#define caaa_002_parameter_2_def_Size 96
#pragma section caaa_002_algorithm_ident_7
/* Definition CAAA-002-ALGORITHM-IDENT-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_algorithm_ident_7
typedef struct __caaa_002_algorithm_ident_7
{
   char                            algo[32];
   caaa_002_parameter_2_def        param;
} caaa_002_algorithm_ident_7_def;
#define caaa_002_algorithm_ident_7_def_Size 128
#pragma section caaa_002_key_transport_3
/* Definition CAAA-002-KEY-TRANSPORT-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_key_transport_3
typedef struct __caaa_002_key_transport_3
{
   char                            vrsn[18];
   struct
   {
      struct
      {
         struct
         {
            struct
            {
               char                            attr_tp[32];
               char                            attr_val[140];
            } rltv_dstngshd_nm[4];
         } issr;
         char                            srl_nb[35];
      } issr_and_srl_nb;
   } rcpt_id;
   struct
   {
      char                            algo[32];
      struct
      {
         char                            dgst_algo[32];
         struct
         {
            char                            algo[32];
            struct
            {
               char                            dgst_algo[32];
            } param;
         } msk_gnrtr_algo;
      } param;
   } key_ncrptn_algo;
   char                            ncrptd_key[256];
} caaa_002_key_transport_3_def;
#define caaa_002_key_transport_3_def_Size 1125
#pragma section caaa_002_recipient_choice
/* Definition CAAA-002-RECIPIENT-CHOICE created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_recipient_choice
typedef struct __caaa_002_recipient_choice
{
   struct
   {
      char                            vrsn[18];
      struct
      {
         struct
         {
            struct
            {
               struct
               {
                  char                            attr_tp[32];
                  char                            attr_val[140];
               } rltv_dstngshd_nm[4];
            } issr;
            char                            srl_nb[35];
         } issr_and_srl_nb;
      } rcpt_id;
      struct
      {
         char                            algo[32];
         struct
         {
            char                            dgst_algo[32];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            dgst_algo[32];
               } param;
            } msk_gnrtr_algo;
         } param;
      } key_ncrptn_algo;
      char                            ncrptd_key[256];
   } key_trnsprt;
   struct
   {
      char                            vrsn[18];
      struct
      {
         char                            key_id[140];
         char                            key_vrsn[32];
         char                            derivtn_id[16];
      } kekid;
      struct
      {
         char                            algo[32];
         struct
         {
            char                            initlstn_vctr[256];
         } param;
      } key_ncrptn_algo;
      char                            ncrptd_key[140];
   } kek;
   struct
   {
      char                            key_id[140];
      char                            key_vrsn[32];
      char                            derivtn_id[16];
   } key_idr;
} caaa_002_recipient_choice_def;
#define caaa_002_recipient_choice_def_Size 1947
#pragma section caaa_002_enveloped_data_3
/* Definition CAAA-002-ENVELOPED-DATA-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_enveloped_data_3
typedef struct __caaa_002_enveloped_data_3
{
   char                            vrsn[18];
   struct
   {
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            attr_tp[32];
                     char                            attr_val[140];
                  } rltv_dstngshd_nm[4];
               } issr;
               char                            srl_nb[35];
            } issr_and_srl_nb;
         } rcpt_id;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            dgst_algo[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                  } param;
               } msk_gnrtr_algo;
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[256];
      } key_trnsprt;
      struct
      {
         char                            vrsn[18];
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } kekid;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[140];
      } kek;
      struct
      {
         char                            key_id[140];
         char                            key_vrsn[32];
         char                            derivtn_id[16];
      } key_idr;
   } rcpt[4];
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            algo[32];
         struct
         {
            char                            initlstn_vctr[256];
         } param;
      } cntt_ncrptn_algo;
      char                            ncrptd_data[256];
   } ncrptd_cntt;
} caaa_002_enveloped_data_3_def;
#define caaa_002_enveloped_data_3_def_Size 8382
#pragma section caaa_002_content_informa_7
/* Definition CAAA-002-CONTENT-INFORMA-7 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_content_informa_7
typedef struct __caaa_002_content_informa_7
{
   char                            cntt_tp[32];
   struct
   {
      char                            vrsn[18];
      struct
      {
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            attr_tp[32];
                        char                            attr_val[140];
                     } rltv_dstngshd_nm[4];
                  } issr;
                  char                            srl_nb[35];
               } issr_and_srl_nb;
            } rcpt_id;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            dgst_algo[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                     } param;
                  } msk_gnrtr_algo;
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[256];
         } key_trnsprt;
         struct
         {
            char                            vrsn[18];
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } kekid;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[140];
         } kek;
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } key_idr;
      } rcpt[4];
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } cntt_ncrptn_algo;
         char                            ncrptd_data[256];
      } ncrptd_cntt;
   } envlpd_data;
} caaa_002_content_informa_7_def;
#define caaa_002_content_informa_7_def_Size 8414
#pragma section caaa_002_card_payment_e_21
/* Definition CAAA-002-CARD-PAYMENT-E-21 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_card_payment_e_21
typedef struct __caaa_002_card_payment_e_21
{
   struct
   {
      char                            id[35];
      char                            tp[32];
      char                            issr[32];
      char                            shrt_nm[35];
   } acqrr_id;
   struct
   {
      char                            id[35];
      char                            tp[32];
      char                            issr[32];
      char                            shrt_nm[35];
   } mrchnt_id;
   struct
   {
      char                            id[35];
      char                            tp[32];
      char                            issr[32];
      char                            shrt_nm[35];
   } poiid;
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            attr_tp[32];
                           char                            attr_val[140];
                        } rltv_dstngshd_nm[4];
                     } issr;
                     char                            srl_nb[35];
                  } issr_and_srl_nb;
               } rcpt_id;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                        } param;
                     } msk_gnrtr_algo;
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[256];
            } key_trnsprt;
            struct
            {
               char                            vrsn[18];
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } kekid;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[140];
            } kek;
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } key_idr;
         } rcpt[4];
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } cntt_ncrptn_algo;
            char                            ncrptd_data[256];
         } ncrptd_cntt;
      } envlpd_data;
   } prtctd_card_data;
   struct
   {
      char                            pan[28];
      char                            card_seq_nb[3];
      char                            fctv_dt[10];
      char                            xpry_dt[10];
   } plain_card_data;
} caaa_002_card_payment_e_21_def;
#define caaa_002_card_payment_e_21_def_Size 8867
#pragma section caaa_002_transaction_ide_1
/* Definition CAAA-002-TRANSACTION-IDE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_transaction_ide_1
typedef struct __caaa_002_transaction_ide_1
{
   long long                       tx_dt_tm;
   char                            tx_ref[35];
} caaa_002_transaction_ide_1_def;
#define caaa_002_transaction_ide_1_def_Size 43
#pragma section caaa_002_detailed_amount_4
/* Definition CAAA-002-DETAILED-AMOUNT-4 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_detailed_amount_4
typedef struct __caaa_002_detailed_amount_4
{
   char                            amt[18];
   char                            labl[140];
} caaa_002_detailed_amount_4_def;
#define caaa_002_detailed_amount_4_def_Size 158
#pragma section caaa_002_detailed_amount_5
/* Definition CAAA-002-DETAILED-AMOUNT-5 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_detailed_amount_5
typedef struct __caaa_002_detailed_amount_5
{
   char                            csh_bck[18];
   char                            grtty[18];
   caaa_002_detailed_amount_4_def  fees[4];
   caaa_002_detailed_amount_4_def  rbt[4];
   caaa_002_detailed_amount_4_def  val_added_tax[4];
} caaa_002_detailed_amount_5_def;
#define caaa_002_detailed_amount_5_def_Size 1932
#pragma section caaa_002_card_payment_t_13
/* Definition CAAA-002-CARD-PAYMENT-T-13 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_card_payment_t_13
typedef struct __caaa_002_card_payment_t_13
{
   char                            ccy[3];
   char                            ttl_amt[18];
   struct
   {
      char                            csh_bck[18];
      char                            grtty[18];
      struct
      {
         char                            amt[18];
         char                            labl[140];
      } fees[4];
      struct
      {
         char                            amt[18];
         char                            labl[140];
      } rbt[4];
      struct
      {
         char                            amt[18];
         char                            labl[140];
      } val_added_tax[4];
   } dtld_amt;
   char                            filler_0;
   long long                       vldty_dt;
   char                            acct_tp[32];
   char                            iccrltd_data[256];
} caaa_002_card_payment_t_13_def;
#define caaa_002_card_payment_t_13_def_Size 2250
#pragma section caaa_002_card_payment_t_23
/* Definition CAAA-002-CARD-PAYMENT-T-23 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_card_payment_t_23
typedef struct __caaa_002_card_payment_t_23
{
   char                            sale_ref_id[35];
   char                            filler_0;
   struct
   {
      long long                       tx_dt_tm;
      char                            tx_ref[35];
   } tx_id;
   char                            rcpt_tx_id[35];
   char                            rcncltn_id[35];
   char                            intrchng_data[35];
   struct
   {
      char                            ccy[3];
      char                            ttl_amt[18];
      struct
      {
         char                            csh_bck[18];
         char                            grtty[18];
         struct
         {
            char                            amt[18];
            char                            labl[140];
         } fees[4];
         struct
         {
            char                            amt[18];
            char                            labl[140];
         } rbt[4];
         struct
         {
            char                            amt[18];
            char                            labl[140];
         } val_added_tax[4];
      } dtld_amt;
      char                            filler_1;
      long long                       vldty_dt;
      char                            acct_tp[32];
      char                            iccrltd_data[256];
   } tx_dtls;
} caaa_002_card_payment_t_23_def;
#define caaa_002_card_payment_t_23_def_Size 2434
#pragma section caaa_002_generic_identi_33
/* Definition CAAA-002-GENERIC-IDENTI-33 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_generic_identi_33
typedef struct __caaa_002_generic_identi_33
{
   char                            id[35];
   char                            tp[32];
   char                            issr[32];
   char                            shrt_nm[35];
} caaa_002_generic_identi_33_def;
#define caaa_002_generic_identi_33_def_Size 134
#pragma section caaa_002_response_type_1
/* Definition CAAA-002-RESPONSE-TYPE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_response_type_1
typedef struct __caaa_002_response_type_1
{
   char                            rspn[32];
   char                            rspn_rsn[35];
} caaa_002_response_type_1_def;
#define caaa_002_response_type_1_def_Size 67
#pragma section caaa_002_tmstrigger_1
/* Definition CAAA-002-TMSTRIGGER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_tmstrigger_1
typedef struct __caaa_002_tmstrigger_1
{
   char                            tmsctct_lvl[32];
   char                            tmsid[35];
   long long                       tmsctct_dt_tm;
} caaa_002_tmstrigger_1_def;
#define caaa_002_tmstrigger_1_def_Size 76
#pragma section caaa_002_authorisation_r_1
/* Definition CAAA-002-AUTHORISATION-R-1 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_002_authorisation_r_1
typedef struct __caaa_002_authorisation_r_1
{
   struct
   {
      char                            id[35];
      char                            tp[32];
      char                            issr[32];
      char                            shrt_nm[35];
   } authstn_ntty;
   struct
   {
      char                            rspn[32];
      char                            rspn_rsn[35];
   } rspn_to_authstn;
   char                            authstn_cd[8];
   char                            filler_0;
   __int32_t                       cmpltn_reqrd;
   struct
   {
      char                            tmsctct_lvl[32];
      char                            tmsid[35];
      char                            filler_1;
      long long                       tmsctct_dt_tm;
   } tmstrggr;
} caaa_002_authorisation_r_1_def;
#define caaa_002_authorisation_r_1_def_Size 290
#pragma section caaa_002_transaction_ver_2
/* Definition CAAA-002-TRANSACTION-VER-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_transaction_ver_2
typedef struct __caaa_002_transaction_ver_2
{
   char                            elctrnc_comrc_authntc_rslt[256];
   char                            cscrslt[32];
   char                            crdhldr_adr_vrfctn_rslt[4][32];
   char                            dclnd_pdct_cd[4][70];
} caaa_002_transaction_ver_2_def;
#define caaa_002_transaction_ver_2_def_Size 696
#pragma section caaa_002_currency_a_amount
/* Definition CAAA-002-CURRENCY-A-AMOUNT created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_currency_a_amount
typedef struct __caaa_002_currency_a_amount
{
   char                            filler_0;
} caaa_002_currency_a_amount_def;
#define caaa_002_currency_a_amount_def_Size 1
#pragma section caaa_002_amount_and_dir_41
/* Definition CAAA-002-AMOUNT-AND-DIR-41 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_002_amount_and_dir_41
typedef struct __caaa_002_amount_and_dir_41
{
   caaa_002_currency_a_amount_def  amt;
   __int32_t                       sgn;
} caaa_002_amount_and_dir_41_def;
#define caaa_002_amount_and_dir_41_def_Size 6
#pragma section caaa_002_action_message_1
/* Definition CAAA-002-ACTION-MESSAGE-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_action_message_1
typedef struct __caaa_002_action_message_1
{
   char                            msg_dstn[32];
   char                            msg_cntt[256];
   char                            msg_cntt_sgntr[70];
} caaa_002_action_message_1_def;
#define caaa_002_action_message_1_def_Size 358
#pragma section caaa_002_action_3
/* Definition CAAA-002-ACTION-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_action_3
typedef struct __caaa_002_action_3
{
   char                            actn_tp[32];
   caaa_002_action_message_1_def   msg_to_pres;
} caaa_002_action_3_def;
#define caaa_002_action_3_def_Size 390
#pragma section caaa_002_commission_19
/* Definition CAAA-002-COMMISSION-19 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_commission_19
typedef struct __caaa_002_commission_19
{
   char                            amt[18];
   char                            addtl_inf[256];
} caaa_002_commission_19_def;
#define caaa_002_commission_19_def_Size 274
#pragma section caaa_002_commission_18
/* Definition CAAA-002-COMMISSION-18 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_commission_18
typedef struct __caaa_002_commission_18
{
   char                            rate[18];
   char                            addtl_inf[256];
} caaa_002_commission_18_def;
#define caaa_002_commission_18_def_Size 274
#pragma section caaa_002_currency_conver_1
/* Definition CAAA-002-CURRENCY-CONVER-1 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_currency_conver_1
typedef struct __caaa_002_currency_conver_1
{
   char                            ccy_convs_id[35];
   char                            rslt[32];
   char                            rspn_rsn[35];
   char                            trgt_ccy[3];
   char                            trgt_ccy_nmrc[3];
   char                            trgt_ccy_dcml[18];
   char                            trgt_ccy_nm[35];
   char                            rsltg_amt[18];
   char                            xchg_rate[18];
   char                            nvrtd_xchg_rate[18];
   char                            filler_0;
   long long                       qtn_dt;
   long long                       vld_until;
   char                            src_ccy[3];
   char                            src_ccy_nmrc[3];
   char                            src_ccy_dcml[18];
   char                            src_ccy_nm[35];
   char                            orgnl_amt[18];
   struct
   {
      char                            amt[18];
      char                            addtl_inf[256];
   } comssn_dtls[4];
   struct
   {
      char                            rate[18];
      char                            addtl_inf[256];
   } mrk_up_dtls[4];
   char                            dclrtn_dtls[256];
} caaa_002_currency_conver_1_def;
#define caaa_002_currency_conver_1_def_Size 2757
#pragma section caaa_002_card_payment_t_24
/* Definition CAAA-002-CARD-PAYMENT-T-24 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_002_card_payment_t_24
typedef struct __caaa_002_card_payment_t_24
{
   struct
   {
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } authstn_ntty;
      struct
      {
         char                            rspn[32];
         char                            rspn_rsn[35];
      } rspn_to_authstn;
      char                            authstn_cd[8];
      char                            filler_0;
      __int32_t                       cmpltn_reqrd;
      struct
      {
         char                            tmsctct_lvl[32];
         char                            tmsid[35];
         char                            filler_1;
         long long                       tmsctct_dt_tm;
      } tmstrggr;
   } authstn_rslt;
   struct
   {
      char                            elctrnc_comrc_authntc_rslt[256];
      char                            cscrslt[32];
      char                            crdhldr_adr_vrfctn_rslt[4][32];
      char                            dclnd_pdct_cd[4][70];
   } tx_vrfctn_rslt;
   struct
   {
      struct
      {
         char                            filler_2;
      } amt;
      char                            filler_3;
      __int32_t                       sgn;
   } bal;
   struct
   {
      char                            actn_tp[32];
      struct
      {
         char                            msg_dstn[32];
         char                            msg_cntt[256];
         char                            msg_cntt_sgntr[70];
      } msg_to_pres;
   } actn[4];
   struct
   {
      char                            ccy_convs_id[35];
      char                            rslt[32];
      char                            rspn_rsn[35];
      char                            trgt_ccy[3];
      char                            trgt_ccy_nmrc[3];
      char                            trgt_ccy_dcml[18];
      char                            trgt_ccy_nm[35];
      char                            rsltg_amt[18];
      char                            xchg_rate[18];
      char                            nvrtd_xchg_rate[18];
      char                            filler_4;
      long long                       qtn_dt;
      long long                       vld_until;
      char                            src_ccy[3];
      char                            src_ccy_nmrc[3];
      char                            src_ccy_dcml[18];
      char                            src_ccy_nm[35];
      char                            orgnl_amt[18];
      struct
      {
         char                            amt[18];
         char                            addtl_inf[256];
      } comssn_dtls[4];
      struct
      {
         char                            rate[18];
         char                            addtl_inf[256];
      } mrk_up_dtls[4];
      char                            dclrtn_dtls[256];
   } ccy_convs;
} caaa_002_card_payment_t_24_def;
#define caaa_002_card_payment_t_24_def_Size 5309
#pragma section caaa_002_acceptor_author_3
/* Definition CAAA-002-ACCEPTOR-AUTHOR-3 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_002_acceptor_author_3
typedef struct __caaa_002_acceptor_author_3
{
   struct
   {
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } acqrr_id;
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } mrchnt_id;
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } poiid;
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                           } rltv_dstngshd_nm[4];
                        } issr;
                        char                            srl_nb[35];
                     } issr_and_srl_nb;
                  } rcpt_id;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                           } param;
                        } msk_gnrtr_algo;
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[256];
               } key_trnsprt;
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } kekid;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[140];
               } kek;
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } key_idr;
            } rcpt[4];
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } cntt_ncrptn_algo;
               char                            ncrptd_data[256];
            } ncrptd_cntt;
         } envlpd_data;
      } prtctd_card_data;
      struct
      {
         char                            pan[28];
         char                            card_seq_nb[3];
         char                            fctv_dt[10];
         char                            xpry_dt[10];
      } plain_card_data;
   } envt;
   char                            filler_0;
   struct
   {
      char                            sale_ref_id[35];
      char                            filler_1;
      struct
      {
         long long                       tx_dt_tm;
         char                            tx_ref[35];
      } tx_id;
      char                            rcpt_tx_id[35];
      char                            rcncltn_id[35];
      char                            intrchng_data[35];
      struct
      {
         char                            ccy[3];
         char                            ttl_amt[18];
         struct
         {
            char                            csh_bck[18];
            char                            grtty[18];
            struct
            {
               char                            amt[18];
               char                            labl[140];
            } fees[4];
            struct
            {
               char                            amt[18];
               char                            labl[140];
            } rbt[4];
            struct
            {
               char                            amt[18];
               char                            labl[140];
            } val_added_tax[4];
         } dtld_amt;
         char                            filler_2;
         long long                       vldty_dt;
         char                            acct_tp[32];
         char                            iccrltd_data[256];
      } tx_dtls;
   } tx;
   struct
   {
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } authstn_ntty;
         struct
         {
            char                            rspn[32];
            char                            rspn_rsn[35];
         } rspn_to_authstn;
         char                            authstn_cd[8];
         char                            filler_3;
         __int32_t                       cmpltn_reqrd;
         struct
         {
            char                            tmsctct_lvl[32];
            char                            tmsid[35];
            char                            filler_4;
            long long                       tmsctct_dt_tm;
         } tmstrggr;
      } authstn_rslt;
      struct
      {
         char                            elctrnc_comrc_authntc_rslt[256];
         char                            cscrslt[32];
         char                            crdhldr_adr_vrfctn_rslt[4][32];
         char                            dclnd_pdct_cd[4][70];
      } tx_vrfctn_rslt;
      struct
      {
         struct
         {
            char                            filler_5;
         } amt;
         char                            filler_6;
         __int32_t                       sgn;
      } bal;
      struct
      {
         char                            actn_tp[32];
         struct
         {
            char                            msg_dstn[32];
            char                            msg_cntt[256];
            char                            msg_cntt_sgntr[70];
         } msg_to_pres;
      } actn[4];
      struct
      {
         char                            ccy_convs_id[35];
         char                            rslt[32];
         char                            rspn_rsn[35];
         char                            trgt_ccy[3];
         char                            trgt_ccy_nmrc[3];
         char                            trgt_ccy_dcml[18];
         char                            trgt_ccy_nm[35];
         char                            rsltg_amt[18];
         char                            xchg_rate[18];
         char                            nvrtd_xchg_rate[18];
         char                            filler_7;
         long long                       qtn_dt;
         long long                       vld_until;
         char                            src_ccy[3];
         char                            src_ccy_nmrc[3];
         char                            src_ccy_dcml[18];
         char                            src_ccy_nm[35];
         char                            orgnl_amt[18];
         struct
         {
            char                            amt[18];
            char                            addtl_inf[256];
         } comssn_dtls[4];
         struct
         {
            char                            rate[18];
            char                            addtl_inf[256];
         } mrk_up_dtls[4];
         char                            dclrtn_dtls[256];
      } ccy_convs;
   } tx_rspn;
} caaa_002_acceptor_author_3_def;
#define caaa_002_acceptor_author_3_def_Size 16611
#pragma section caaa_002_algorithm_iden_10
/* Definition CAAA-002-ALGORITHM-IDEN-10 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_algorithm_iden_10
typedef struct __caaa_002_algorithm_iden_10
{
   char                            algo[32];
   caaa_002_parameter_1_def        param;
} caaa_002_algorithm_iden_10_def;
#define caaa_002_algorithm_iden_10_def_Size 288
#pragma section caaa_002_encapsulated_co_2
/* Definition CAAA-002-ENCAPSULATED-CO-2 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_encapsulated_co_2
typedef struct __caaa_002_encapsulated_co_2
{
   char                            cntt_tp[32];
   char                            cntt[256];
} caaa_002_encapsulated_co_2_def;
#define caaa_002_encapsulated_co_2_def_Size 288
#pragma section caaa_002_authenticated_d_3
/* Definition CAAA-002-AUTHENTICATED-D-3 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_authenticated_d_3
typedef struct __caaa_002_authenticated_d_3
{
   char                            vrsn[18];
   struct
   {
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            attr_tp[32];
                     char                            attr_val[140];
                  } rltv_dstngshd_nm[4];
               } issr;
               char                            srl_nb[35];
            } issr_and_srl_nb;
         } rcpt_id;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            dgst_algo[32];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                  } param;
               } msk_gnrtr_algo;
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[256];
      } key_trnsprt;
      struct
      {
         char                            vrsn[18];
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } kekid;
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } key_ncrptn_algo;
         char                            ncrptd_key[140];
      } kek;
      struct
      {
         char                            key_id[140];
         char                            key_vrsn[32];
         char                            derivtn_id[16];
      } key_idr;
   } rcpt[4];
   struct
   {
      char                            algo[32];
      struct
      {
         char                            initlstn_vctr[256];
      } param;
   } macalgo;
   struct
   {
      char                            cntt_tp[32];
      char                            cntt[256];
   } ncpsltd_cntt;
   char                            mac[35];
} caaa_002_authenticated_d_3_def;
#define caaa_002_authenticated_d_3_def_Size 8417
#pragma section caaa_002_content_informa_8
/* Definition CAAA-002-CONTENT-INFORMA-8 created on 07/29/2025 at 09:03 */
#pragma fieldalign shared2 __caaa_002_content_informa_8
typedef struct __caaa_002_content_informa_8
{
   char                            cntt_tp[32];
   struct
   {
      char                            vrsn[18];
      struct
      {
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  struct
                  {
                     struct
                     {
                        char                            attr_tp[32];
                        char                            attr_val[140];
                     } rltv_dstngshd_nm[4];
                  } issr;
                  char                            srl_nb[35];
               } issr_and_srl_nb;
            } rcpt_id;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            dgst_algo[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                     } param;
                  } msk_gnrtr_algo;
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[256];
         } key_trnsprt;
         struct
         {
            char                            vrsn[18];
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } kekid;
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } key_ncrptn_algo;
            char                            ncrptd_key[140];
         } kek;
         struct
         {
            char                            key_id[140];
            char                            key_vrsn[32];
            char                            derivtn_id[16];
         } key_idr;
      } rcpt[4];
      struct
      {
         char                            algo[32];
         struct
         {
            char                            initlstn_vctr[256];
         } param;
      } macalgo;
      struct
      {
         char                            cntt_tp[32];
         char                            cntt[256];
      } ncpsltd_cntt;
      char                            mac[35];
   } authntcd_data[4];
} caaa_002_content_informa_8_def;
#define caaa_002_content_informa_8_def_Size 33700
#pragma section caaa_002_acceptor_autho_03
/* Definition CAAA-002-ACCEPTOR-AUTHO-03 created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_002_acceptor_autho_03
typedef struct __caaa_002_acceptor_autho_03
{
   struct
   {
      char                            msg_fctn[32];
      char                            prtcol_vrsn[6];
      char                            xchg_id[3];
      char                            filler_0;
      long long                       cre_dt_tm;
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } initg_pty;
      struct
      {
         char                            id[35];
         char                            tp[32];
         char                            issr[32];
         char                            shrt_nm[35];
      } rcpt_pty;
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } rlay_id;
         long long                       trac_dt_tm_in;
         long long                       trac_dt_tm_out;
      } tracblt[4];
   } hdr;
   struct
   {
      struct
      {
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } acqrr_id;
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } mrchnt_id;
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } poiid;
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                           } issr;
                           char                            srl_nb[35];
                        } issr_and_srl_nb;
                     } rcpt_id;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                           } msk_gnrtr_algo;
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[256];
                  } key_trnsprt;
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } kekid;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[140];
                  } kek;
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } key_idr;
               } rcpt[4];
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } cntt_ncrptn_algo;
                  char                            ncrptd_data[256];
               } ncrptd_cntt;
            } envlpd_data;
         } prtctd_card_data;
         struct
         {
            char                            pan[28];
            char                            card_seq_nb[3];
            char                            fctv_dt[10];
            char                            xpry_dt[10];
         } plain_card_data;
      } envt;
      char                            filler_1;
      struct
      {
         char                            sale_ref_id[35];
         char                            filler_2;
         struct
         {
            long long                       tx_dt_tm;
            char                            tx_ref[35];
         } tx_id;
         char                            rcpt_tx_id[35];
         char                            rcncltn_id[35];
         char                            intrchng_data[35];
         struct
         {
            char                            ccy[3];
            char                            ttl_amt[18];
            struct
            {
               char                            csh_bck[18];
               char                            grtty[18];
               struct
               {
                  char                            amt[18];
                  char                            labl[140];
               } fees[4];
               struct
               {
                  char                            amt[18];
                  char                            labl[140];
               } rbt[4];
               struct
               {
                  char                            amt[18];
                  char                            labl[140];
               } val_added_tax[4];
            } dtld_amt;
            char                            filler_3;
            long long                       vldty_dt;
            char                            acct_tp[32];
            char                            iccrltd_data[256];
         } tx_dtls;
      } tx;
      struct
      {
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } authstn_ntty;
            struct
            {
               char                            rspn[32];
               char                            rspn_rsn[35];
            } rspn_to_authstn;
            char                            authstn_cd[8];
            char                            filler_4;
            __int32_t                       cmpltn_reqrd;
            struct
            {
               char                            tmsctct_lvl[32];
               char                            tmsid[35];
               char                            filler_5;
               long long                       tmsctct_dt_tm;
            } tmstrggr;
         } authstn_rslt;
         struct
         {
            char                            elctrnc_comrc_authntc_rslt[256];
            char                            cscrslt[32];
            char                            crdhldr_adr_vrfctn_rslt[4][32];
            char                            dclnd_pdct_cd[4][70];
         } tx_vrfctn_rslt;
         struct
         {
            struct
            {
               char                            filler_6;
            } amt;
            char                            filler_7;
            __int32_t                       sgn;
         } bal;
         struct
         {
            char                            actn_tp[32];
            struct
            {
               char                            msg_dstn[32];
               char                            msg_cntt[256];
               char                            msg_cntt_sgntr[70];
            } msg_to_pres;
         } actn[4];
         struct
         {
            char                            ccy_convs_id[35];
            char                            rslt[32];
            char                            rspn_rsn[35];
            char                            trgt_ccy[3];
            char                            trgt_ccy_nmrc[3];
            char                            trgt_ccy_dcml[18];
            char                            trgt_ccy_nm[35];
            char                            rsltg_amt[18];
            char                            xchg_rate[18];
            char                            nvrtd_xchg_rate[18];
            char                            filler_8;
            long long                       qtn_dt;
            long long                       vld_until;
            char                            src_ccy[3];
            char                            src_ccy_nmrc[3];
            char                            src_ccy_dcml[18];
            char                            src_ccy_nm[35];
            char                            orgnl_amt[18];
            struct
            {
               char                            amt[18];
               char                            addtl_inf[256];
            } comssn_dtls[4];
            struct
            {
               char                            rate[18];
               char                            addtl_inf[256];
            } mrk_up_dtls[4];
            char                            dclrtn_dtls[256];
         } ccy_convs;
      } tx_rspn;
   } authstn_rspn;
   struct
   {
      char                            cntt_tp[32];
      struct
      {
         char                            vrsn[18];
         struct
         {
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           char                            attr_tp[32];
                           char                            attr_val[140];
                        } rltv_dstngshd_nm[4];
                     } issr;
                     char                            srl_nb[35];
                  } issr_and_srl_nb;
               } rcpt_id;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            dgst_algo[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                        } param;
                     } msk_gnrtr_algo;
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[256];
            } key_trnsprt;
            struct
            {
               char                            vrsn[18];
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } kekid;
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } key_ncrptn_algo;
               char                            ncrptd_key[140];
            } kek;
            struct
            {
               char                            key_id[140];
               char                            key_vrsn[32];
               char                            derivtn_id[16];
            } key_idr;
         } rcpt[4];
         struct
         {
            char                            algo[32];
            struct
            {
               char                            initlstn_vctr[256];
            } param;
         } macalgo;
         struct
         {
            char                            cntt_tp[32];
            char                            cntt[256];
         } ncpsltd_cntt;
         char                            mac[35];
      } authntcd_data[4];
   } scty_trlr;
} caaa_002_acceptor_autho_03_def;
#define caaa_002_acceptor_autho_03_def_Size 51229
#pragma section caaa_002_document
/* Definition CAAA-002-DOCUMENT created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __caaa_002_document
typedef struct __caaa_002_document
{
   struct
   {
      struct
      {
         char                            msg_fctn[32];
         char                            prtcol_vrsn[6];
         char                            xchg_id[3];
         char                            filler_0;
         long long                       cre_dt_tm;
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } initg_pty;
         struct
         {
            char                            id[35];
            char                            tp[32];
            char                            issr[32];
            char                            shrt_nm[35];
         } rcpt_pty;
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } rlay_id;
            long long                       trac_dt_tm_in;
            long long                       trac_dt_tm_out;
         } tracblt[4];
      } hdr;
      struct
      {
         struct
         {
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } acqrr_id;
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } mrchnt_id;
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } poiid;
            struct
            {
               char                            cntt_tp[32];
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                           } issr_and_srl_nb;
                        } rcpt_id;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[256];
                     } key_trnsprt;
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } kekid;
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } key_ncrptn_algo;
                        char                            ncrptd_key[140];
                     } kek;
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } key_idr;
                  } rcpt[4];
                  struct
                  {
                     char                            cntt_tp[32];
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } cntt_ncrptn_algo;
                     char                            ncrptd_data[256];
                  } ncrptd_cntt;
               } envlpd_data;
            } prtctd_card_data;
            struct
            {
               char                            pan[28];
               char                            card_seq_nb[3];
               char                            fctv_dt[10];
               char                            xpry_dt[10];
            } plain_card_data;
         } envt;
         char                            filler_1;
         struct
         {
            char                            sale_ref_id[35];
            char                            filler_2;
            struct
            {
               long long                       tx_dt_tm;
               char                            tx_ref[35];
            } tx_id;
            char                            rcpt_tx_id[35];
            char                            rcncltn_id[35];
            char                            intrchng_data[35];
            struct
            {
               char                            ccy[3];
               char                            ttl_amt[18];
               struct
               {
                  char                            csh_bck[18];
                  char                            grtty[18];
                  struct
                  {
                     char                            amt[18];
                     char                            labl[140];
                  } fees[4];
                  struct
                  {
                     char                            amt[18];
                     char                            labl[140];
                  } rbt[4];
                  struct
                  {
                     char                            amt[18];
                     char                            labl[140];
                  } val_added_tax[4];
               } dtld_amt;
               char                            filler_3;
               long long                       vldty_dt;
               char                            acct_tp[32];
               char                            iccrltd_data[256];
            } tx_dtls;
         } tx;
         struct
         {
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } authstn_ntty;
               struct
               {
                  char                            rspn[32];
                  char                            rspn_rsn[35];
               } rspn_to_authstn;
               char                            authstn_cd[8];
               char                            filler_4;
               __int32_t                       cmpltn_reqrd;
               struct
               {
                  char                            tmsctct_lvl[32];
                  char                            tmsid[35];
                  char                            filler_5;
                  long long                       tmsctct_dt_tm;
               } tmstrggr;
            } authstn_rslt;
            struct
            {
               char                            elctrnc_comrc_authntc_rslt[256];
               char                            cscrslt[32];
               char                            crdhldr_adr_vrfctn_rslt[4][32];
               char                            dclnd_pdct_cd[4][70];
            } tx_vrfctn_rslt;
            struct
            {
               struct
               {
                  char                            filler_6;
               } amt;
               char                            filler_7;
               __int32_t                       sgn;
            } bal;
            struct
            {
               char                            actn_tp[32];
               struct
               {
                  char                            msg_dstn[32];
                  char                            msg_cntt[256];
                  char                            msg_cntt_sgntr[70];
               } msg_to_pres;
            } actn[4];
            struct
            {
               char                            ccy_convs_id[35];
               char                            rslt[32];
               char                            rspn_rsn[35];
               char                            trgt_ccy[3];
               char                            trgt_ccy_nmrc[3];
               char                            trgt_ccy_dcml[18];
               char                            trgt_ccy_nm[35];
               char                            rsltg_amt[18];
               char                            xchg_rate[18];
               char                            nvrtd_xchg_rate[18];
               char                            filler_8;
               long long                       qtn_dt;
               long long                       vld_until;
               char                            src_ccy[3];
               char                            src_ccy_nmrc[3];
               char                            src_ccy_dcml[18];
               char                            src_ccy_nm[35];
               char                            orgnl_amt[18];
               struct
               {
                  char                            amt[18];
                  char                            addtl_inf[256];
               } comssn_dtls[4];
               struct
               {
                  char                            rate[18];
                  char                            addtl_inf[256];
               } mrk_up_dtls[4];
               char                            dclrtn_dtls[256];
            } ccy_convs;
         } tx_rspn;
      } authstn_rspn;
      struct
      {
         char                            cntt_tp[32];
         struct
         {
            char                            vrsn[18];
            struct
            {
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                           } rltv_dstngshd_nm[4];
                        } issr;
                        char                            srl_nb[35];
                     } issr_and_srl_nb;
                  } rcpt_id;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            dgst_algo[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            dgst_algo[32];
                           } param;
                        } msk_gnrtr_algo;
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[256];
               } key_trnsprt;
               struct
               {
                  char                            vrsn[18];
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } kekid;
                  struct
                  {
                     char                            algo[32];
                     struct
                     {
                        char                            initlstn_vctr[256];
                     } param;
                  } key_ncrptn_algo;
                  char                            ncrptd_key[140];
               } kek;
               struct
               {
                  char                            key_id[140];
                  char                            key_vrsn[32];
                  char                            derivtn_id[16];
               } key_idr;
            } rcpt[4];
            struct
            {
               char                            algo[32];
               struct
               {
                  char                            initlstn_vctr[256];
               } param;
            } macalgo;
            struct
            {
               char                            cntt_tp[32];
               char                            cntt[256];
            } ncpsltd_cntt;
            char                            mac[35];
         } authntcd_data[4];
      } scty_trlr;
   } accptr_authstn_rspn;
} caaa_002_document_def;
#define caaa_002_document_def_Size 51229
#pragma section payment_card_authorize_rq
/* Definition PAYMENT-CARD-AUTHORIZE-RQ created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __payment_card_authorize_rq
typedef struct __payment_card_authorize_rq
{
   struct
   {
      short                           rq_code;
      unsigned short                  rq_version;
      __uint32_t                      rq_timeout;
      char                            reserved[24];
   } lightwave_rq_header;
   struct
   {
      struct
      {
         struct
         {
            char                            msg_fctn[32];
            char                            prtcol_vrsn[6];
            char                            xchg_id[3];
            char                            filler_0;
            long long                       cre_dt_tm;
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } initg_pty;
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } rcpt_pty;
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } rlay_id;
               long long                       trac_dt_tm_in;
               long long                       trac_dt_tm_out;
            } tracblt[4];
         } hdr;
         struct
         {
            struct
            {
               struct
               {
                  struct
                  {
                     char                            id[35];
                     char                            tp[32];
                     char                            issr[32];
                     char                            shrt_nm[35];
                  } id;
                  char                            params_vrsn[35];
               } acqrr;
               struct
               {
                  struct
                  {
                     char                            id[35];
                     char                            tp[32];
                     char                            issr[32];
                     char                            shrt_nm[35];
                  } id;
                  char                            cmon_nm[70];
                  char                            lctn_ctgy[32];
                  char                            adr[140];
                  char                            ctry_cd[3];
                  char                            schme_data[140];
               } mrchnt;
               struct
               {
                  struct
                  {
                     char                            id[35];
                     char                            tp[32];
                     char                            issr[32];
                     char                            shrt_nm[35];
                  } id;
                  char                            sys_nm[70];
                  char                            grp_id[35];
                  struct
                  {
                     char                            card_rdng_cpblties[4][32];
                     char                            crdhldr_vrfctn_cpblties[4][32];
                     char                            on_line_cpblties[32];
                     struct
                     {
                        char                            disp_tp[32];
                        char                            nb_of_lines[18];
                        char                            line_width[18];
                     } disp_cpblties[4];
                     char                            prt_line_width[18];
                     char                            avlbl_lang[4][2];
                  } cpblties;
                  char                            filler_1;
                  struct
                  {
                     char                            tp[32];
                     struct
                     {
                        char                            itm_nb[35];
                        char                            prvdr_id[35];
                        char                            id[35];
                        char                            srl_nb[35];
                     } id;
                     struct
                     {
                        char                            vrsn_nb[35];
                        char                            sts[32];
                     } sts;
                     struct
                     {
                        char                            id[35];
                        char                            vrsn[35];
                        char                            issr[35];
                     } std_cmplc[4];
                     char                            filler_2;
                     struct
                     {
                        struct
                        {
                           char                            id[35];
                           char                            ttl_sz[18];
                           char                            free_sz[18];
                           char                            unit_rw[32];
                        } mmry[4];
                        struct
                        {
                           char                            com_tp[32];
                           char                            rmot_pty[4][32];
                           __int32_t                       actv;
                        } com[4];
                        char                            scty_accs_mdls[18];
                        char                            sbcbr_idnty_mdls[18];
                        char                            key_chck_val[35];
                     } chrtcs;
                     char                            filler_3;
                     struct
                     {
                        char                            tp[32];
                        char                            assgnr[4][35];
                        long long                       dlvry_dt;
                        long long                       xprtn_dt;
                        char                            nb[35];
                        char                            filler_4;
                     } assmnt[4];
                  } cmpnt[4];
               } poi;
               struct
               {
                  struct
                  {
                     char                            cntt_tp[32];
                     struct
                     {
                        char                            vrsn[18];
                        struct
                        {
                           struct
                           {
                              char                            vrsn[18];
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                              } rcpt_id;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[256];
                           } key_trnsprt;
                           struct
                           {
                              char                            vrsn[18];
                              struct
                              {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                              } kekid;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[140];
                           } kek;
                           struct
                           {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                           } key_idr;
                        } rcpt[4];
                        struct
                        {
                           char                            cntt_tp[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                           } cntt_ncrptn_algo;
                           char                            ncrptd_data[256];
                        } ncrptd_cntt;
                     } envlpd_data;
                  } prtctd_card_data;
                  struct
                  {
                     char                            pan[28];
                     char                            card_seq_nb[3];
                     char                            fctv_dt[10];
                     char                            xpry_dt[10];
                     char                            svc_cd[3];
                     struct
                     {
                        char                            trck_nb;
                        char                            trck_val[140];
                     } trck_data[4];
                     struct
                     {
                        char                            cscmgmt[32];
                        char                            cscval[4];
                     } card_scty_cd;
                  } plain_card_data;
                  char                            card_ctry_cd[3];
                  char                            card_ccy_cd[3];
                  char                            card_pdct_prfl[3];
                  char                            card_brnd[35];
                  char                            addtl_card_data[70];
               } card;
               struct
               {
                  struct
                  {
                     char                            drvrs_lic_nb[35];
                     char                            cstmr_nb[35];
                     char                            scl_scty_nb[35];
                     char                            aln_regn_nb[35];
                     char                            pspt_nb[35];
                     char                            tax_id_nb[35];
                     char                            idnty_card_nb[35];
                     char                            mplyr_id_nb[35];
                     char                            mplyee_id_nb[35];
                     char                            email_adr[256];
                     char                            filler_5;
                     struct
                     {
                        long long                       birth_dt;
                        char                            prvc_of_birth[35];
                        char                            city_of_birth[35];
                        char                            ctry_of_birth[2];
                     } dt_and_plc_of_birth;
                     struct
                     {
                        char                            id[35];
                        char                            id_tp[35];
                     } othr[4];
                  } id;
                  char                            nm[45];
                  char                            lang[2];
                  struct
                  {
                     char                            adr_line[2][70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                  } bllg_adr;
                  struct
                  {
                     char                            adr_line[2][70];
                     char                            strt_nm[70];
                     char                            bldg_nb[16];
                     char                            pst_cd[16];
                     char                            twn_nm[35];
                     char                            ctry_sub_dvsn[35];
                     char                            ctry[2];
                  } shppg_adr;
                  struct
                  {
                     char                            authntcn_mtd[32];
                     char                            authntcn_ntty[32];
                     char                            authntcn_val[40];
                     struct
                     {
                        struct
                        {
                           char                            cntt_tp[32];
                           struct
                           {
                              char                            vrsn[18];
                              struct
                              {
                              struct
                              {
                              char                            vrsn[18];
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                              } rcpt_id;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[256];
                              } key_trnsprt;
                              struct
                              {
                              char                            vrsn[18];
                              struct
                              {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                              } kekid;
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                              } key_ncrptn_algo;
                              char                            ncrptd_key[140];
                              } kek;
                              struct
                              {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                              } key_idr;
                              } rcpt[4];
                              struct
                              {
                              char                            cntt_tp[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                              } cntt_ncrptn_algo;
                              char                            ncrptd_data[256];
                              } ncrptd_cntt;
                           } envlpd_data;
                        } ncrptd_pinblck;
                        char                            pinfrmt[32];
                        char                            addtl_inpt[35];
                     } crdhldr_on_line_pin;
                     char                            authntcn_colltn_ind[35];
                  } authntcn[4];
                  struct
                  {
                     char                            adr_dgts[5];
                     char                            pstl_cd_dgts[5];
                  } adr_vrfctn;
                  char                            prsnl_data[70];
               } crdhldr;
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                           } rcpt_id;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[256];
                        } key_trnsprt;
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                           } kekid;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[140];
                        } kek;
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } key_idr;
                     } rcpt[4];
                     struct
                     {
                        char                            cntt_tp[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } cntt_ncrptn_algo;
                        char                            ncrptd_data[256];
                     } ncrptd_cntt;
                  } envlpd_data;
               } prtctd_crdhldr_data;
            } envt;
            char                            filler_6;
            struct
            {
               struct
               {
                  __int32_t                       card_pres;
                  __int32_t                       crdhldr_pres;
                  char                            attndnc_cntxt[32];
                  char                            tx_envt[32];
                  char                            tx_chanl[32];
                  __int32_t                       attndnt_msg_cpbl;
                  char                            attndnt_lang[2];
                  char                            card_data_ntry_md[32];
                  __int32_t                       fllbck_ind;
                  char                            spprtd_optn[4][32];
               } pmt_cntxt;
               struct
               {
                  char                            sale_id[35];
                  char                            sale_ref_nb[35];
                  char                            sale_rcncltn_id[35];
                  char                            cshr_id[35];
                  char                            shft_nb[2];
                  char                            addtl_sale_data[70];
               } sale_cntxt;
            } cntxt;
            struct
            {
               __int32_t                       tx_captr;
               char                            tx_tp[32];
               char                            addtl_svc[4][32];
               char                            svc_attr[32];
               char                            mrchnt_ctgy_cd[4];
               char                            sale_ref_id[35];
               char                            filler_7;
               struct
               {
                  long long                       tx_dt_tm;
                  char                            tx_ref[35];
               } tx_id;
               char                            filler_8;
               struct
               {
                  char                            sale_ref_id[35];
                  char                            filler_9;
                  struct
                  {
                     long long                       tx_dt_tm;
                     char                            tx_ref[35];
                  } tx_id;
                  struct
                  {
                     char                            id[35];
                     char                            tp[32];
                     char                            issr[32];
                     char                            shrt_nm[35];
                  } poiid;
                  char                            initr_tx_id[35];
                  char                            rcpt_tx_id[35];
                  char                            tx_tp[32];
                  char                            addtl_svc[4][32];
                  char                            svc_attr[32];
                  struct
                  {
                     struct
                     {
                        char                            id[35];
                        char                            tp[32];
                        char                            issr[32];
                        char                            shrt_nm[35];
                     } authstn_ntty;
                     struct
                     {
                        char                            rspn[32];
                        char                            rspn_rsn[35];
                     } rspn_to_authstn;
                     char                            authstn_cd[8];
                  } tx_rslt;
               } orgnl_tx;
               char                            initr_tx_id[35];
               char                            rcncltn_id[35];
               struct
               {
                  char                            ccy[3];
                  char                            ttl_amt[18];
                  char                            amt_qlfr[32];
                  struct
                  {
                     char                            csh_bck[18];
                     char                            grtty[18];
                     struct
                     {
                        char                            amt[18];
                        char                            labl[140];
                     } fees[4];
                     struct
                     {
                        char                            amt[18];
                        char                            labl[140];
                     } rbt[4];
                     struct
                     {
                        char                            amt[18];
                        char                            labl[140];
                     } val_added_tax[4];
                  } dtld_amt;
                  char                            filler_10;
                  long long                       vldty_dt;
                  char                            on_line_rsn[32];
                  char                            uattndd_lvl_ctgy[35];
                  char                            acct_tp[32];
                  char                            filler_11;
                  __int32_t                       convs_accptd;
                  struct
                  {
                     char                            ccy_convs_id[35];
                     char                            rslt[32];
                     char                            rspn_rsn[35];
                     char                            trgt_ccy[3];
                     char                            trgt_ccy_nmrc[3];
                     char                            trgt_ccy_dcml[18];
                     char                            trgt_ccy_nm[35];
                     char                            rsltg_amt[18];
                     char                            xchg_rate[18];
                     char                            nvrtd_xchg_rate[18];
                     char                            filler_12;
                     long long                       qtn_dt;
                     long long                       vld_until;
                     char                            src_ccy[3];
                     char                            src_ccy_nmrc[3];
                     char                            src_ccy_dcml[18];
                     char                            src_ccy_nm[35];
                     char                            orgnl_amt[18];
                     struct
                     {
                        char                            amt[18];
                        char                            addtl_inf[256];
                     } comssn_dtls[4];
                     struct
                     {
                        char                            rate[18];
                        char                            addtl_inf[256];
                     } mrk_up_dtls[4];
                     char                            dclrtn_dtls[256];
                  } ccy_convs;
                  char                            filler_13;
                  struct
                  {
                     char                            instlmt_plan[4][32];
                     char                            plan_id[35];
                     char                            seq_nb[18];
                     char                            prd_unit[32];
                     char                            instlmt_prd[18];
                     char                            ttl_nb_of_pmts[18];
                     char                            filler_14;
                     long long                       frst_pmt_dt;
                     struct
                     {
                        char                            filler_15;
                     } ttl_amt;
                     char                            frst_amt[18];
                     char                            chrgs[18];
                  } instlmt;
                  char                            filler_16;
                  struct
                  {
                     long long                       frst_pmt_dt_tm;
                     long long                       last_pmt_dt_tm;
                     char                            nb_of_pmts[18];
                     struct
                     {
                        char                            amt[18];
                        long long                       dt_tm;
                        char                            card_data_ntry_md[32];
                        char                            iccrltd_data[256];
                        char                            labl[140];
                     } indv_pmt[4];
                  } aggtn_tx;
                  struct
                  {
                     char                            pdct_cd[70];
                     char                            unit_of_measr[32];
                     char                            pdct_qty[18];
                     char                            unit_pric[18];
                     char                            pdct_amt[18];
                     char                            tax_tp[35];
                     char                            addtl_pdct_inf[35];
                  } pdct[4];
                  struct
                  {
                     struct
                     {
                        char                            id[35];
                        char                            tp_cd[4];
                        char                            nm[35];
                        long long                       isse_dt_tm;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } issr;
                        char                            lang_cd[32];
                        __int32_t                       cpy_ind;
                        char                            doc_purp[4];
                        struct
                        {
                           char                            inf_tp[4];
                           char                            inf_val[256];
                        } incl_note[4];
                     } invc_hdr;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } buyr;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } sellr;
                        struct
                        {
                           char                            id[35];
                           char                            filler_17;
                           long long                       dt_of_isse;
                        } qtn_doc_id;
                        struct
                        {
                           char                            id[35];
                           char                            filler_18;
                           long long                       dt_of_isse;
                        } ctrct_doc_id;
                        struct
                        {
                           char                            id[35];
                           char                            filler_19;
                           long long                       dt_of_isse;
                        } buyr_ordr_id_doc;
                        struct
                        {
                           char                            doc_tp[4];
                           char                            doc_nb[35];
                           char                            sndr_rcvr_seq_id[140];
                           char                            filler_20;
                           long long                       isse_dt;
                           char                            url[256];
                           struct
                           {
                              char                            mimetp[35];
                              char                            ncodg_tp[35];
                              char                            char_set[35];
                              char                            incl_binry_objct[256];
                           } attchd_binry_file[4];
                        } addtl_ref_doc[4];
                        struct
                        {
                           struct
                           {
                              char                            cd_rw[4];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } incotrms_cd;
                           char                            lctn[35];
                        } incotrms;
                     } trad_agrmt;
                     char                            filler_21;
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              long long                       dt;
                              long long                       dt_tm;
                              } dt;
                              char                            not_spcfd_dt[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } start_dt;
                           struct
                           {
                              struct
                              {
                              long long                       dt;
                              long long                       dt_tm;
                              } dt;
                              char                            not_spcfd_dt[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } end_dt;
                        } dlvry_prd;
                        long long                       dlvry_dt_tm;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } ship_fr;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } ship_to;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } ultmt_ship_to;
                        struct
                        {
                           char                            id[35];
                           char                            filler_22;
                           long long                       dt_of_isse;
                        } dlvry_note;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                              } pty_id;
                              struct
                              {
                              char                            id[35];
                              char                            nm[140];
                              } lgl_org;
                              struct
                              {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                              } tax_pty[4];
                           } consgnr;
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                              } pty_id;
                              struct
                              {
                              char                            id[35];
                              char                            nm[140];
                              } lgl_org;
                              struct
                              {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                              } tax_pty[4];
                           } consgn;
                           struct
                           {
                              char                            md_cd[4];
                              char                            id[35];
                              char                            nm[35];
                           } trnsprt_means[4];
                        } consgnmt[4];
                     } trad_dlvry;
                     struct
                     {
                        char                            id[35];
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            tp[32];
                              char                            idr[35];
                              } strd_pdct_idr;
                              struct
                              {
                              char                            id[35];
                              char                            id_tp[35];
                              } othr_pdct_idr;
                           } id[4];
                           char                            nm[35];
                           char                            desc[140];
                           struct
                           {
                              char                            cd_rw[2];
                              char                            nm[35];
                           } ctry_of_orgn[4];
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            tp[32];
                              char                            chrtcs[35];
                              } strd_pdct_chrtcs;
                              struct
                              {
                              char                            id[35];
                              char                            id_tp[35];
                              } othr_pdct_chrtcs;
                              } chrtc;
                              struct
                              {
                              char                            val[18];
                              } val_measr;
                           } pdct_chrtcs[4];
                           struct
                           {
                              struct
                              {
                              char                            tp[32];
                              char                            ctgy[35];
                              } strd_pdct_ctgy;
                              struct
                              {
                              char                            id[35];
                              char                            id_tp[35];
                              } othr_pdct_ctgy;
                           } pdct_ctgy[4];
                           char                            gbl_srl_idr[4][35];
                        } trad_pdct;
                        struct
                        {
                           char                            id[35];
                           char                            filler_23;
                           long long                       dt_of_isse;
                           char                            ordr_line_id[35];
                        } buyr_ordr_id;
                        char                            filler_24;
                        struct
                        {
                           char                            id[35];
                           char                            filler_25;
                           long long                       dt_of_isse;
                        } ctrct_id;
                        struct
                        {
                           char                            id[35];
                           char                            cost_ref_pttrn[35];
                        } purchs_acctg_acct[4];
                        struct
                        {
                           char                            filler_26;
                        } net_pric[4];
                        struct
                        {
                           char                            val[18];
                           char                            fctr[15];
                        } net_pric_qty;
                        char                            filler_27;
                        struct
                        {
                           __int32_t                       chrg_ind;
                           struct
                           {
                              char                            filler_28;
                           } actl_amt[4];
                           struct
                           {
                              char                            val[18];
                           } bsis_qty;
                           char                            clctn_pct[18];
                           char                            seq_nb[18];
                           struct
                           {
                              struct
                              {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                              } chrg_tp;
                              struct
                              {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                              } dscnt_tp;
                           } rsn;
                        } net_pric_allwnc_chrg[4];
                        struct
                        {
                           char                            val[18];
                        } net_wght;
                        struct
                        {
                           char                            filler_29;
                        } grss_pric[4];
                        struct
                        {
                           char                            val[18];
                           char                            fctr[15];
                        } grss_pric_qty;
                        struct
                        {
                           char                            val[18];
                        } grss_wght;
                        struct
                        {
                           struct
                           {
                              char                            filler_30;
                           } amt;
                        } logstcs_chrg[4];
                        char                            filler_31;
                        struct
                        {
                           struct
                           {
                              char                            filler_32;
                           } clctd_amt[4];
                           struct
                           {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } tp_cd;
                           long long                       tax_pt_dt;
                           char                            clctd_rate[18];
                           char                            ctgy_cd[4];
                           char                            ctgy_nm[4][35];
                        } tax[4];
                        struct
                        {
                           __int32_t                       chrg_ind;
                           struct
                           {
                              char                            filler_33;
                           } actl_amt[4];
                           struct
                           {
                              char                            val[18];
                           } bsis_qty;
                           char                            clctn_pct[18];
                           char                            seq_nb[18];
                           struct
                           {
                              struct
                              {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                              } chrg_tp;
                              struct
                              {
                              char                            cd_rw[32];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                              } dscnt_tp;
                           } rsn;
                        } allwnc_chrg[4];
                        struct
                        {
                           char                            drctn[32];
                           struct
                           {
                              char                            filler_34;
                           } amt;
                        } fin_adjstmnt[4];
                        struct
                        {
                           char                            val[18];
                        } blld_qty;
                        char                            packg_qty[18];
                        struct
                        {
                           char                            val[18];
                        } per_packg_unit_qty;
                        struct
                        {
                           char                            tp[4];
                           char                            nm[35];
                        } packgng[4];
                        struct
                        {
                           char                            val[18];
                        } chrg_free_qty;
                        struct
                        {
                           char                            val[18];
                        } measr_qty_start;
                        struct
                        {
                           char                            val[18];
                        } measr_qty_end;
                        long long                       measr_dt_tm_start;
                        long long                       measr_dt_tm_end;
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              char                            bic[12];
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } org_id;
                              struct
                              {
                              struct
                              {
                              long long                       birth_dt;
                              char                            prvc_of_birth[35];
                              char                            city_of_birth[35];
                              char                            ctry_of_birth[2];
                              } dt_and_plc_of_birth;
                              struct
                              {
                              char                            id[35];
                              struct
                              {
                              char                            cd_rw[4];
                              char                            prtry[35];
                              } schme_nm;
                              char                            issr[35];
                              } othr[4];
                              } prvt_id;
                              } id;
                              char                            nm[35];
                              struct
                              {
                              char                            adr_tp[32];
                              char                            dept[70];
                              char                            sub_dept[70];
                              char                            strt_nm[70];
                              char                            bldg_nb[16];
                              char                            pst_cd[16];
                              char                            twn_nm[35];
                              char                            ctry_sub_dvsn[35];
                              char                            ctry[2];
                              char                            adr_line[2][70];
                              } pstl_adr;
                              char                            ctry_of_res[2];
                              struct
                              {
                              char                            nm_prfx[32];
                              char                            nm[140];
                              char                            phne_nb[34];
                              char                            mob_nb[34];
                              char                            fax_nb[34];
                              char                            email_adr[256];
                              char                            othr[35];
                              char                            job_titl[35];
                              char                            rspnsblty[35];
                              char                            dept[70];
                              } ctct_dtls[4];
                           } pty_id;
                           struct
                           {
                              char                            id[35];
                              char                            nm[140];
                           } lgl_org;
                           struct
                           {
                              char                            tax_id[35];
                              char                            tax_tp[35];
                              char                            regn_id[35];
                              struct
                              {
                              char                            ustrd[140];
                              char                            strd[32];
                              } tax_xmptn_rsn[4];
                           } tax_pty[4];
                        } ship_to;
                        struct
                        {
                           struct
                           {
                              char                            cd_rw[4];
                              struct
                              {
                              char                            id[4];
                              char                            schme_nm[35];
                              char                            issr[35];
                              } prtry;
                           } incotrms_cd;
                           char                            lctn[35];
                        } incotrms;
                        char                            filler_35;
                        long long                       dlvry_dt_tm;
                        struct
                        {
                           char                            id[35];
                           char                            filler_36;
                           long long                       dt_of_isse;
                        } dlvry_note_id;
                        struct
                        {
                           struct
                           {
                              char                            filler_37;
                           } line_ttl_amt[4];
                           struct
                           {
                              char                            filler_38;
                           } allwnc_ttl_amt[4];
                           struct
                           {
                              char                            filler_39;
                           } chrg_ttl_amt[4];
                           struct
                           {
                              char                            filler_40;
                           } tax_ttl_amt[4];
                           struct
                           {
                              char                            filler_41;
                           } tax_bsis_ttl_amt[4];
                           struct
                           {
                              char                            filler_42;
                           } inf_amt[4];
                        } mntry_summtn;
                        struct
                        {
                           struct
                           {
                              char                            cd_rw[32];
                              char                            prtry[140];
                           } inf_tp;
                           char                            inf_val[256];
                        } incl_note[4];
                     } line_itm[4];
                  } card_pmt_invc;
                  char                            iccrltd_data[256];
               } tx_dtls;
               char                            addtl_tx_data[4][70];
            } tx;
         } authstn_req;
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                           } issr;
                           char                            srl_nb[35];
                        } issr_and_srl_nb;
                     } rcpt_id;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                           } msk_gnrtr_algo;
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[256];
                  } key_trnsprt;
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } kekid;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[140];
                  } kek;
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } key_idr;
               } rcpt[4];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } macalgo;
               struct
               {
                  char                            cntt_tp[32];
                  char                            cntt[256];
               } ncpsltd_cntt;
               char                            mac[35];
            } authntcd_data[4];
         } scty_trlr;
      } accptr_authstn_req;
   } caaa_001_document;
} payment_card_authorize_rq_def;
#define payment_card_authorize_rq_def_Size 292326
#pragma section payment_card_authoe_200_rp
/* Definition PAYMENT-CARD-AUTHOE-200-RP created on 07/29/2025 at 09:03 */
#include <tnsint.h>
#pragma fieldalign shared2 __payment_card_authoe_200_rp
typedef struct __payment_card_authoe_200_rp
{
   struct
   {
      short                           rp_code;
      short                           http_status;
      short                           info_code;
      short                           info_detail;
      char                            reserved[24];
   } lightwave_rp_header;
   struct
   {
      struct
      {
         struct
         {
            char                            msg_fctn[32];
            char                            prtcol_vrsn[6];
            char                            xchg_id[3];
            char                            filler_0;
            long long                       cre_dt_tm;
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } initg_pty;
            struct
            {
               char                            id[35];
               char                            tp[32];
               char                            issr[32];
               char                            shrt_nm[35];
            } rcpt_pty;
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } rlay_id;
               long long                       trac_dt_tm_in;
               long long                       trac_dt_tm_out;
            } tracblt[4];
         } hdr;
         struct
         {
            struct
            {
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } acqrr_id;
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } mrchnt_id;
               struct
               {
                  char                            id[35];
                  char                            tp[32];
                  char                            issr[32];
                  char                            shrt_nm[35];
               } poiid;
               struct
               {
                  char                            cntt_tp[32];
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              struct
                              {
                              struct
                              {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                              } issr;
                              char                            srl_nb[35];
                              } issr_and_srl_nb;
                           } rcpt_id;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              struct
                              {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                              } msk_gnrtr_algo;
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[256];
                        } key_trnsprt;
                        struct
                        {
                           char                            vrsn[18];
                           struct
                           {
                              char                            key_id[140];
                              char                            key_vrsn[32];
                              char                            derivtn_id[16];
                           } kekid;
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            initlstn_vctr[256];
                              } param;
                           } key_ncrptn_algo;
                           char                            ncrptd_key[140];
                        } kek;
                        struct
                        {
                           char                            key_id[140];
                           char                            key_vrsn[32];
                           char                            derivtn_id[16];
                        } key_idr;
                     } rcpt[4];
                     struct
                     {
                        char                            cntt_tp[32];
                        struct
                        {
                           char                            algo[32];
                           struct
                           {
                              char                            initlstn_vctr[256];
                           } param;
                        } cntt_ncrptn_algo;
                        char                            ncrptd_data[256];
                     } ncrptd_cntt;
                  } envlpd_data;
               } prtctd_card_data;
               struct
               {
                  char                            pan[28];
                  char                            card_seq_nb[3];
                  char                            fctv_dt[10];
                  char                            xpry_dt[10];
               } plain_card_data;
            } envt;
            char                            filler_1;
            struct
            {
               char                            sale_ref_id[35];
               char                            filler_2;
               struct
               {
                  long long                       tx_dt_tm;
                  char                            tx_ref[35];
               } tx_id;
               char                            rcpt_tx_id[35];
               char                            rcncltn_id[35];
               char                            intrchng_data[35];
               struct
               {
                  char                            ccy[3];
                  char                            ttl_amt[18];
                  struct
                  {
                     char                            csh_bck[18];
                     char                            grtty[18];
                     struct
                     {
                        char                            amt[18];
                        char                            labl[140];
                     } fees[4];
                     struct
                     {
                        char                            amt[18];
                        char                            labl[140];
                     } rbt[4];
                     struct
                     {
                        char                            amt[18];
                        char                            labl[140];
                     } val_added_tax[4];
                  } dtld_amt;
                  char                            filler_3;
                  long long                       vldty_dt;
                  char                            acct_tp[32];
                  char                            iccrltd_data[256];
               } tx_dtls;
            } tx;
            struct
            {
               struct
               {
                  struct
                  {
                     char                            id[35];
                     char                            tp[32];
                     char                            issr[32];
                     char                            shrt_nm[35];
                  } authstn_ntty;
                  struct
                  {
                     char                            rspn[32];
                     char                            rspn_rsn[35];
                  } rspn_to_authstn;
                  char                            authstn_cd[8];
                  char                            filler_4;
                  __int32_t                       cmpltn_reqrd;
                  struct
                  {
                     char                            tmsctct_lvl[32];
                     char                            tmsid[35];
                     char                            filler_5;
                     long long                       tmsctct_dt_tm;
                  } tmstrggr;
               } authstn_rslt;
               struct
               {
                  char                            elctrnc_comrc_authntc_rslt[256];
                  char                            cscrslt[32];
                  char                            crdhldr_adr_vrfctn_rslt[4][32];
                  char                            dclnd_pdct_cd[4][70];
               } tx_vrfctn_rslt;
               struct
               {
                  struct
                  {
                     char                            filler_6;
                  } amt;
                  char                            filler_7;
                  __int32_t                       sgn;
               } bal;
               struct
               {
                  char                            actn_tp[32];
                  struct
                  {
                     char                            msg_dstn[32];
                     char                            msg_cntt[256];
                     char                            msg_cntt_sgntr[70];
                  } msg_to_pres;
               } actn[4];
               struct
               {
                  char                            ccy_convs_id[35];
                  char                            rslt[32];
                  char                            rspn_rsn[35];
                  char                            trgt_ccy[3];
                  char                            trgt_ccy_nmrc[3];
                  char                            trgt_ccy_dcml[18];
                  char                            trgt_ccy_nm[35];
                  char                            rsltg_amt[18];
                  char                            xchg_rate[18];
                  char                            nvrtd_xchg_rate[18];
                  char                            filler_8;
                  long long                       qtn_dt;
                  long long                       vld_until;
                  char                            src_ccy[3];
                  char                            src_ccy_nmrc[3];
                  char                            src_ccy_dcml[18];
                  char                            src_ccy_nm[35];
                  char                            orgnl_amt[18];
                  struct
                  {
                     char                            amt[18];
                     char                            addtl_inf[256];
                  } comssn_dtls[4];
                  struct
                  {
                     char                            rate[18];
                     char                            addtl_inf[256];
                  } mrk_up_dtls[4];
                  char                            dclrtn_dtls[256];
               } ccy_convs;
            } tx_rspn;
         } authstn_rspn;
         struct
         {
            char                            cntt_tp[32];
            struct
            {
               char                            vrsn[18];
               struct
               {
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        struct
                        {
                           struct
                           {
                              struct
                              {
                              char                            attr_tp[32];
                              char                            attr_val[140];
                              } rltv_dstngshd_nm[4];
                           } issr;
                           char                            srl_nb[35];
                        } issr_and_srl_nb;
                     } rcpt_id;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            dgst_algo[32];
                           struct
                           {
                              char                            algo[32];
                              struct
                              {
                              char                            dgst_algo[32];
                              } param;
                           } msk_gnrtr_algo;
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[256];
                  } key_trnsprt;
                  struct
                  {
                     char                            vrsn[18];
                     struct
                     {
                        char                            key_id[140];
                        char                            key_vrsn[32];
                        char                            derivtn_id[16];
                     } kekid;
                     struct
                     {
                        char                            algo[32];
                        struct
                        {
                           char                            initlstn_vctr[256];
                        } param;
                     } key_ncrptn_algo;
                     char                            ncrptd_key[140];
                  } kek;
                  struct
                  {
                     char                            key_id[140];
                     char                            key_vrsn[32];
                     char                            derivtn_id[16];
                  } key_idr;
               } rcpt[4];
               struct
               {
                  char                            algo[32];
                  struct
                  {
                     char                            initlstn_vctr[256];
                  } param;
               } macalgo;
               struct
               {
                  char                            cntt_tp[32];
                  char                            cntt[256];
               } ncpsltd_cntt;
               char                            mac[35];
            } authntcd_data[4];
         } scty_trlr;
      } accptr_authstn_rspn;
   } caaa_002_document;
} payment_card_authoe_200_rp_def;
#define payment_card_authoe_200_rp_def_Size 51261
