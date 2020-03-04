#include "__cf_QPSK_send_new.h"
#ifndef RTW_HEADER_QPSK_send_new_h_
#define RTW_HEADER_QPSK_send_new_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef QPSK_send_new_COMMON_INCLUDES_
#define QPSK_send_new_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "HostLib_Audio.h"
#endif
#include "QPSK_send_new_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME QPSK_send_new
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (13) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { creal_T ouvvvzepvb [ 400 ] ; creal_T gvbyyw5o3g [ 100 ] ;
creal_T aftmuloeee [ 4096 ] ; real_T ehbk4bryz1 [ 21 ] ; real_T premmh4kdg [
174 ] ; real_T jd01qs5m4z [ 200 ] ; real_T bxe1le5ikg [ 4096 ] ; real_T
jvbcgma2dm [ 4096 ] ; int16_T o1szxg5mdq [ 4096 ] ; int16_T hwwkismpaq [ 4096
] ; int16_T op5mprqu15 [ 21 ] ; uint8_T dkjitcvete [ 168 ] ; int8_T
fti0r3l42g [ 21 ] ; } B ; typedef struct { creal_T hoeg5pvh24 [ 10 ] ;
creal_T fgmcscr1iy [ 8192 ] ; int32_T njjl2slvq4 [ 4 ] ; int32_T kfwjt2w4bi ;
int32_T hlnhqvglnw ; int32_T ko1ido1o3s ; uint8_T nuoavhbzfe [ 1096 ] ; } DW
; typedef struct { real_T enrvf3s22e [ 8 ] ; } ConstP ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
ConstantBarkerCode_Value [ 13 ] ; real_T Constant2_Value [ 6 ] ; real_T
FromAudioDevice_P1 ; real_T FromAudioDevice_P2 ; real_T FromAudioDevice_P3 ;
real_T FIRInterpolation_FILTER_COEFF [ 44 ] ; real_T Buffer2_ic ; int8_T
Gain_Gain ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB
; extern DW rtDW ; extern P rtP ; extern const ConstP rtConstP ; extern const
rtwCAPI_ModelMappingStaticInfo * QPSK_send_new_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
size_t gblCurrentSFcnIdx ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
