#include "QPSK_send_new_capi_host.h"
static QPSK_send_new_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        QPSK_send_new_host_InitializeDataMapInfo(&(root), "QPSK_send_new");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
