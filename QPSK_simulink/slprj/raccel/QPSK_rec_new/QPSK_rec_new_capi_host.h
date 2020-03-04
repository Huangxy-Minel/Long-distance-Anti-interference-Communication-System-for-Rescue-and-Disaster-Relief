#include "__cf_QPSK_rec_new.h"
#ifndef RTW_HEADER_QPSK_rec_new_cap_host_h_
#define RTW_HEADER_QPSK_rec_new_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
QPSK_rec_new_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void QPSK_rec_new_host_InitializeDataMapInfo (
QPSK_rec_new_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
