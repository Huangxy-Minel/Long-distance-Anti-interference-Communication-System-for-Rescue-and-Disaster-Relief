#include "__cf_QPSK_rec_new.h"
#ifndef RTW_HEADER_QPSK_rec_new_h_
#define RTW_HEADER_QPSK_rec_new_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef QPSK_rec_new_COMMON_INCLUDES_
#define QPSK_rec_new_COMMON_INCLUDES_
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
#include "QPSK_rec_new_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#define MODEL_NAME QPSK_rec_new
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (82) 
#define NUM_ZC_EVENTS (1) 
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
typedef struct { creal_T minxrdkfnw [ 4096 ] ; creal_T fb3mramyi2 [ 2000 ] ;
creal_T oteo0hgonb [ 2000 ] ; creal_T ovjxaccksb [ 2000 ] ; real_T j3naqhnr5n
[ 2048 ] ; creal_T fpc14ms2ti ; creal_T cofyxefywj ; creal_T neeeqzegf1 ;
creal_T cuiphlrvh3 ; creal_T ggid3ra30q ; creal_T csbznulm04 [ 100 ] ;
creal_T ipgnpglywt [ 200 ] ; creal_T fobbopvf0e ; creal_T i2fhusba1q ;
creal_T gvvtdp5xcm [ 100 ] ; creal_T fvj531xizo [ 4000 ] ; creal_T lgr1arenbz
[ 2000 ] ; creal_T kvzns23b5z [ 2048 ] ; creal_T aja0cn3qsg [ 13 ] ; creal_T
ehxhqbkdhz [ 112 ] ; creal_T kom1j355dw [ 100 ] ; creal_T k2f4fy42ut [ 13 ] ;
creal_T dp1z0w3pyb [ 13 ] ; real_T mwspxnqhvh ; real_T lsrweaeuar [ 2 ] ;
real_T ishhgfdoic [ 2000 ] ; real_T lcukeg4ra1 [ 2048 ] ; real_T atw401twj1 ;
real_T kwd0e0b1d5 ; real_T geedmuaywp [ 2 ] ; real_T fz3ctbaoql [ 2 ] ;
real_T pobnd0mg5i ; real_T becw5lzrrr ; real_T a4s11ojk1m [ 2048 ] ; real_T
j4vvlljgpx ; real_T auidd2k43x ; real_T iardd3mkw3 ; real_T gxdfvjpcut ;
real_T kzyd4u3ksq ; real_T ak3sje44b5 ; real_T e33vjmweeo ; real_T iswwz5qktn
; real_T pxnn0khacz ; real_T o1ydd51tpe [ 174 ] ; real_T pqyu05wbdd [ 168 ] ;
real_T isoscd3hxa [ 21 ] ; real_T og0uhfdt4r ; real_T dt3ojgl0oz ; real_T
f52rciltnu ; real_T ivalynhusz ; real_T mtal0lmzoj ; real_T dlexrl4ki2 ;
real_T pdexr5mw4l ; real_T hyzdvtfnio ; real_T lvhi1ezcxd ; real_T fo2nbqef0x
; real_T fq0yv3mn1s ; real_T db3uscyfsp ; real_T eyetzj3uq1 ; real_T
brghorksve ; real_T gpopjinata ; real_T fzzwpatmzm ; real_T nfgvfi3av2 [ 174
] ; real_T d3burfccqn ; real_T loovichlml ; real_T hetsq4myqc ; real_T
o3emxfgw5k [ 2048 ] ; real_T km2ayjw1ft [ 21 ] ; real_T gplb5zarwj [ 26 ] ;
real_T hitgbienc0 [ 112 ] ; real_T aka4gb231h [ 200 ] ; real_T meqi0c4wdo [
2000 ] ; real_T c0hy5wnloq [ 2000 ] ; cint16_T e5rykhtqm2 [ 4096 ] ; int16_T
eyid12vzph [ 4096 ] ; int16_T fwdjmw1rs5 [ 4096 ] ; int8_T cz25yszbgm [ 168 ]
; int8_T has4tk4gru [ 21 ] ; uint8_T egka4n0wgk ; uint8_T bu0vc1o0ko ;
uint8_T biivyniief ; boolean_T cbdvezzfie ; boolean_T onboscufhy ; } B ;
typedef struct { creal_T lsxpdgmogp [ 8096 ] ; creal_T bnupsmlzt5 ; creal_T
gqx5btuepb [ 40 ] ; creal_T h1ipc2chyf [ 2000 ] ; creal_T elczwj5tyr ;
creal_T a4roe1syac [ 99 ] ; creal_T merzb44fhx [ 100 ] ; real_T dhj4vkzmaf [
2048 ] ; real_T effey3xwny ; real_T ptaxny3roj [ 2 ] ; real_T posib3ggdt [ 2
] ; real_T mc5uo0whgt ; real_T kfpmh01a1k ; real_T ptnmznb0hw [ 2 ] ; real_T
fefqcieipy ; real_T ktnxdhpbxz ; real_T evsdrk450n ; creal_T ebuhvi04cr ;
creal_T o0xvwnxylh ; creal_T lyiqnjqybi ; creal_T akdn11h4te ; creal_T
fvcogczy1o ; creal_T n125ugl4m5 [ 13 ] ; creal_T mwa4qpprzx ; real_T
ml1as53acs ; real_T mpq12xyhdw ; real_T lunjgzjc24 ; int32_T dooxhebqgo ;
int32_T cddzpwnuex ; int32_T ld4ftkewcy ; int32_T df0s3yujg1 ; int32_T
fqxk0amxeb ; int32_T gpf2nblmlt ; int32_T pc5arjiauv ; int32_T lvdcsrlwfa ;
int32_T m3asvljnha [ 4 ] ; uint8_T phbiknpp2r ; int8_T ebgqyj5dd2 ; int8_T
ojjfczgzl5 ; uint8_T hmivrtfkd4 [ 1096 ] ; boolean_T m1yucxivnk ; boolean_T
gjqfu0f13v ; boolean_T clvzofwwc2 ; boolean_T p5sfhhwl21 ; } DW ; typedef
struct { ZCSigState dhhabe2ujw ; } PrevZCX ; typedef struct { real_T
hfr0d2fmdg [ 8 ] ; real_T lu3il44puf [ 2000 ] ; real_T far4cejajf [ 1536 ] ;
} ConstP ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T DigitalFilter_DenCoeffs [ 2 ] ; real_T
DigitalFilter_DenCoeffs_o4x43fum1w [ 2 ] ; real_T
DigitalFilter_DenCoeffs_kep0pa5mts [ 2 ] ; real_T DigitalFilter_NumCoeffs [ 2
] ; real_T DigitalFilter_NumCoeffs_pm3tdg2tvj [ 2 ] ; real_T
DigitalFilter_NumCoeffs_ilqcl03itu [ 2 ] ; uint8_T CompareToConstant_const ;
uint8_T CounterLimited_uplimit ; real_T Delay_InitialCondition ; real_T
Buffer_ic ; real_T ConstantBarkerCode_Value [ 13 ] ; real_T Constant1_Value ;
real_T Delay1_InitialCondition ; real_T Gain_Gain ; real_T
MagnitudeAngletoComplex_ConstantPart ; real_T Constant_Value ; real_T
SFunctionBuilder_P1 ; real_T Buffer_ic_mhhskld4kq ; real_T FIRDecimation_FILT
[ 42 ] ; real_T Alphabetsize_Value ; real_T DigitalFilter_InitialStates ;
real_T DigitalFilter_Coefficients [ 2 ] ; real_T Gain_Gain_f3wchj02z3 ;
real_T CompensateforFrequencyOffset_Phase ; real_T Unbuffer_ic ; real_T
Delay1_InitialCondition_ndhyglan5c ; real_T K1_Gain ; real_T K2_Gain ; real_T
Gain_Gain_lh2vjcl0wj ; real_T MagnitudeAngletoComplex_ConstantPart_ni3ctenwcr
; real_T IntegerDelay2_InitialCondition ; real_T
IntegerDelay1_InitialCondition ; real_T Gain1_Gain ; real_T ToAudioDevice1_P1
; real_T ToAudioDevice1_P2 ; real_T ToAudioDevice1_P3 ; real_T
K2_Gain_m5hzi5qib5 ; real_T K1_Gain_hbz2ttd0l3 ; uint32_T Delay_DelayLength ;
uint32_T Delay1_DelayLength ; uint32_T Delay1_DelayLength_fhvxo5d3vu ;
uint32_T IntegerDelay2_DelayLength ; uint32_T IntegerDelay1_DelayLength ;
uint8_T Output_InitialCondition ; uint8_T FixPtConstant_Value ; uint8_T
Constant_Value_k5dpjwyc51 ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern PrevZCX
rtPrevZCX ; extern P rtP ; extern const ConstP rtConstP ; extern const
rtwCAPI_ModelMappingStaticInfo * QPSK_rec_new_GetCAPIStaticMap ( void ) ;
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
