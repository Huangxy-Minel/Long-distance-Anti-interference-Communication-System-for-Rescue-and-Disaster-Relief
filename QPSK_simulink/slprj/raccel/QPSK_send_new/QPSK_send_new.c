#include "__cf_QPSK_send_new.h"
#include "rt_logging_mmi.h"
#include "QPSK_send_new_capi.h"
#include <math.h>
#include "QPSK_send_new.h"
#include "QPSK_send_new_private.h"
#include "QPSK_send_new_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "8.13 (R2017b) 24-Jul-2017" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\QPSK_send_new\\QPSK_send_new_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void MdlInitialize ( void ) { int32_T i ; rtDW . njjl2slvq4 [ 0 ] =
0 ; rtDW . njjl2slvq4 [ 1 ] = 0 ; rtDW . njjl2slvq4 [ 2 ] = 0 ; rtDW .
njjl2slvq4 [ 3 ] = 0 ; memset ( & rtDW . hoeg5pvh24 [ 0 ] , 0 , 10U * sizeof
( creal_T ) ) ; for ( i = 0 ; i < 8192 ; i ++ ) { rtDW . fgmcscr1iy [ i ] .
re = rtP . Buffer2_ic ; rtDW . fgmcscr1iy [ i ] . im = 0.0 ; } rtDW .
kfwjt2w4bi = 4096 ; rtDW . ko1ido1o3s = 4096 ; rtDW . hlnhqvglnw = 0 ; } void
MdlStart ( void ) { char_T * sErr ; { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void * *
pOSigstreamManagerAddr = ( NULL ) ; const char *
errorCreatingOSigstreamManager = ( NULL ) ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ) ; if (
errorCreatingOSigstreamManager != ( NULL ) ) { * pOSigstreamManagerAddr = (
NULL ) ; ssSetErrorStatus ( rtS , errorCreatingOSigstreamManager ) ; return ;
} } sErr = GetErrorBuffer ( & rtDW . nuoavhbzfe [ 0U ] ) ; CreateHostLibrary
( "hostlibaudio.dll" , & rtDW . nuoavhbzfe [ 0U ] ) ; if ( * sErr == 0 ) {
LibCreate_Audio ( & rtDW . nuoavhbzfe [ 0U ] , 0 , "Default" , 1 , 0 , 1 ,
10500.0 , 1 , 1024 , 10500 , 21 , 5 , NULL ) ; } if ( * sErr != 0 ) {
DestroyHostLibrary ( & rtDW . nuoavhbzfe [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } }
toHw_Start_wrapper ( ) ; MdlInitialize ( ) ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } } void MdlOutputs ( int_T tid ) {
char_T * sErr ; uint32_T u ; real_T u_p ; int32_T nSampsAtBot ; int32_T
nSamps ; int32_T uIdx ; int32_T yIdx ; int32_T i ; real_T accumulator_im ;
int16_T tmp ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 6 ; i
++ ) { rtB . premmh4kdg [ i + 168 ] = rtP . Constant2_Value [ i ] ; } sErr =
GetErrorBuffer ( & rtDW . nuoavhbzfe [ 0U ] ) ; LibOutputs_Audio ( & rtDW .
nuoavhbzfe [ 0U ] , & rtB . ehbk4bryz1 [ 0U ] , 5 , 21 , 0 ) ; if ( * sErr !=
0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; }
for ( i = 0 ; i < 21 ; i ++ ) { u_p = muDoubleScalarFloor ( rtB . ehbk4bryz1
[ i ] * 128.0 ) ; if ( muDoubleScalarIsNaN ( u_p ) || muDoubleScalarIsInf (
u_p ) ) { u_p = 0.0 ; } else { u_p = muDoubleScalarRem ( u_p , 256.0 ) ; }
rtB . fti0r3l42g [ i ] = ( int8_T ) ( u_p < 0.0 ? ( int32_T ) ( int8_T ) - (
int8_T ) ( uint8_T ) - u_p : ( int32_T ) ( int8_T ) ( uint8_T ) u_p ) ; } for
( i = 0 ; i < 21 ; i ++ ) { rtB . op5mprqu15 [ i ] = ( int16_T ) ( rtP .
Gain_Gain * rtB . fti0r3l42g [ i ] ) ; rtB . fti0r3l42g [ i ] = ( int8_T ) (
rtB . op5mprqu15 [ i ] >> 6 ) ; nSamps = ( i + 1 ) << 3 ; u = ( uint32_T )
rtB . fti0r3l42g [ i ] ; for ( yIdx = 0 ; yIdx < 8 ; yIdx ++ ) { rtB .
dkjitcvete [ nSamps - 1 ] = ( uint8_T ) ( u & 1U ) ; u >>= 1 ; nSamps -- ; }
} for ( i = 0 ; i < 168 ; i ++ ) { rtB . premmh4kdg [ i ] = rtB . dkjitcvete
[ i ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { yIdx = 0 ; for ( uIdx = 0 ;
uIdx < 13 ; uIdx ++ ) { rtB . jd01qs5m4z [ yIdx ] = rtP .
ConstantBarkerCode_Value [ uIdx ] ; yIdx ++ ; rtB . jd01qs5m4z [ yIdx ] = rtP
. ConstantBarkerCode_Value [ uIdx ] ; yIdx ++ ; } } for ( yIdx = 0 ; yIdx <
174 ; yIdx ++ ) { nSamps = ( ( ( ( int32_T ) muDoubleScalarFloor ( rtB .
premmh4kdg [ yIdx ] ) + ( uint8_T ) rtDW . njjl2slvq4 [ 0 ] ) + ( uint8_T )
rtDW . njjl2slvq4 [ 1 ] ) + ( uint8_T ) rtDW . njjl2slvq4 [ 3 ] ) % 2 ; rtB .
jd01qs5m4z [ yIdx + 26 ] = nSamps ; rtDW . njjl2slvq4 [ 3 ] = rtDW .
njjl2slvq4 [ 2 ] ; rtDW . njjl2slvq4 [ 2 ] = rtDW . njjl2slvq4 [ 1 ] ; rtDW .
njjl2slvq4 [ 1 ] = rtDW . njjl2slvq4 [ 0 ] ; rtDW . njjl2slvq4 [ 0U ] =
nSamps ; } yIdx = 0 ; uIdx = 0 ; for ( i = 0 ; i < 100 ; i ++ ) { u_p = rtB .
jd01qs5m4z [ yIdx ] ; yIdx ++ ; nSampsAtBot = ( int32_T ) muDoubleScalarFloor
( u_p ) << 1 ; u_p = rtB . jd01qs5m4z [ yIdx ] ; yIdx ++ ; nSampsAtBot += (
int32_T ) muDoubleScalarFloor ( u_p ) ; nSamps = 1 ; while ( nSamps < 2 ) {
nSampsAtBot ^= nSampsAtBot >> 1 ; nSamps = 2 ; } rtB . gvbyyw5o3g [ uIdx ] .
re = rtConstP . enrvf3s22e [ nSampsAtBot << 1 ] ; rtB . gvbyyw5o3g [ uIdx ] .
im = rtConstP . enrvf3s22e [ ( nSampsAtBot << 1 ) + 1 ] ; uIdx ++ ; } for (
nSamps = 0 ; nSamps < 4 ; nSamps ++ ) { uIdx = nSamps ; nSampsAtBot = nSamps
* 11 ; for ( i = 0 ; i < 10 ; i ++ ) { u_p = 0.0 ; accumulator_im = 0.0 ; for
( yIdx = 0 ; yIdx < i + 1 ; yIdx ++ ) { u_p += rtB . gvbyyw5o3g [ i - yIdx ]
. re * rtP . FIRInterpolation_FILTER_COEFF [ nSampsAtBot + yIdx ] ;
accumulator_im += rtB . gvbyyw5o3g [ i - yIdx ] . im * rtP .
FIRInterpolation_FILTER_COEFF [ nSampsAtBot + yIdx ] ; } for ( yIdx = 0 ;
yIdx < 10 - i ; yIdx ++ ) { u_p += rtP . FIRInterpolation_FILTER_COEFF [ ( (
nSampsAtBot + i ) + yIdx ) + 1 ] * rtDW . hoeg5pvh24 [ yIdx ] . re ;
accumulator_im += rtP . FIRInterpolation_FILTER_COEFF [ ( ( nSampsAtBot + i )
+ yIdx ) + 1 ] * rtDW . hoeg5pvh24 [ yIdx ] . im ; } rtB . ouvvvzepvb [ uIdx
] . re = u_p ; rtB . ouvvvzepvb [ uIdx ] . im = accumulator_im ; uIdx += 4 ;
} for ( i = 0 ; i < 90 ; i ++ ) { u_p = 0.0 ; accumulator_im = 0.0 ; for (
yIdx = 0 ; yIdx < 11 ; yIdx ++ ) { u_p += rtB . gvbyyw5o3g [ ( i - yIdx ) +
10 ] . re * rtP . FIRInterpolation_FILTER_COEFF [ nSampsAtBot + yIdx ] ;
accumulator_im += rtB . gvbyyw5o3g [ ( i - yIdx ) + 10 ] . im * rtP .
FIRInterpolation_FILTER_COEFF [ nSampsAtBot + yIdx ] ; } rtB . ouvvvzepvb [
uIdx ] . re = u_p ; rtB . ouvvvzepvb [ uIdx ] . im = accumulator_im ; uIdx +=
4 ; } } for ( i = 0 ; i < 10 ; i ++ ) { rtDW . hoeg5pvh24 [ 9 - i ] = rtB .
gvbyyw5o3g [ i + 90 ] ; } uIdx = 0 ; nSamps = 400 ; nSampsAtBot = rtDW .
kfwjt2w4bi ; if ( 8192 - rtDW . kfwjt2w4bi <= 400 ) { for ( i = 0 ; i < 8192
- rtDW . kfwjt2w4bi ; i ++ ) { rtDW . fgmcscr1iy [ rtDW . kfwjt2w4bi + i ] =
rtB . ouvvvzepvb [ i ] ; } uIdx = 8192 - rtDW . kfwjt2w4bi ; nSampsAtBot = 0
; nSamps = rtDW . kfwjt2w4bi - 7792 ; } for ( i = 0 ; i < nSamps ; i ++ ) {
rtDW . fgmcscr1iy [ nSampsAtBot + i ] = rtB . ouvvvzepvb [ uIdx + i ] ; }
rtDW . kfwjt2w4bi += 400 ; if ( rtDW . kfwjt2w4bi >= 8192 ) { rtDW .
kfwjt2w4bi -= 8192 ; } rtDW . ko1ido1o3s += 400 ; if ( rtDW . ko1ido1o3s >
8192 ) { rtDW . hlnhqvglnw = ( rtDW . hlnhqvglnw + rtDW . ko1ido1o3s ) - 8192
; if ( rtDW . hlnhqvglnw > 8192 ) { rtDW . hlnhqvglnw -= 8192 ; } rtDW .
ko1ido1o3s = 8192 ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW .
ko1ido1o3s -= 4096 ; if ( rtDW . ko1ido1o3s < 0 ) { rtDW . hlnhqvglnw += rtDW
. ko1ido1o3s ; if ( rtDW . hlnhqvglnw < 0 ) { rtDW . hlnhqvglnw += 8192 ; }
rtDW . ko1ido1o3s = 0 ; } uIdx = 0 ; yIdx = rtDW . hlnhqvglnw ; if ( rtDW .
hlnhqvglnw < 0 ) { yIdx = rtDW . hlnhqvglnw + 8192 ; } nSampsAtBot = 8192 -
yIdx ; nSamps = 4096 ; if ( 8192 - yIdx <= 4096 ) { for ( i = 0 ; i < 8192 -
yIdx ; i ++ ) { rtB . aftmuloeee [ i ] = rtDW . fgmcscr1iy [ yIdx + i ] ; }
uIdx = 8192 - yIdx ; yIdx = 0 ; nSamps = 4096 - nSampsAtBot ; } for ( i = 0 ;
i < nSamps ; i ++ ) { rtB . aftmuloeee [ uIdx + i ] = rtDW . fgmcscr1iy [
yIdx + i ] ; } rtDW . hlnhqvglnw = yIdx + nSamps ; for ( i = 0 ; i < 4096 ; i
++ ) { rtB . bxe1le5ikg [ i ] = rtB . aftmuloeee [ i ] . re ; rtB .
jvbcgma2dm [ i ] = rtB . aftmuloeee [ i ] . im ; u_p = muDoubleScalarFloor (
rtB . bxe1le5ikg [ i ] * 2048.0 ) ; if ( muDoubleScalarIsNaN ( u_p ) ||
muDoubleScalarIsInf ( u_p ) ) { tmp = 0 ; } else { tmp = ( int16_T )
muDoubleScalarRem ( u_p , 4096.0 ) ; } rtB . o1szxg5mdq [ i ] = ( int16_T ) (
( int16_T ) ( tmp & 2048 ) != 0 ? ( int32_T ) ( int16_T ) ( tmp | - 2048 ) :
( int32_T ) ( int16_T ) ( tmp & 2047 ) ) ; u_p = muDoubleScalarFloor ( rtB .
jvbcgma2dm [ i ] * 2048.0 ) ; if ( muDoubleScalarIsNaN ( u_p ) ||
muDoubleScalarIsInf ( u_p ) ) { tmp = 0 ; } else { tmp = ( int16_T )
muDoubleScalarRem ( u_p , 4096.0 ) ; } rtB . hwwkismpaq [ i ] = ( int16_T ) (
( int16_T ) ( tmp & 2048 ) != 0 ? ( int32_T ) ( int16_T ) ( tmp | - 2048 ) :
( int32_T ) ( int16_T ) ( tmp & 2047 ) ) ; } toHw_Outputs_wrapper ( & rtB .
o1szxg5mdq [ 0 ] , & rtB . hwwkismpaq [ 0 ] ) ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlTerminate ( void ) { char_T * sErr ; sErr = GetErrorBuffer ( & rtDW .
nuoavhbzfe [ 0U ] ) ; LibTerminate ( & rtDW . nuoavhbzfe [ 0U ] ) ; if ( *
sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1
) ; } LibDestroy_Audio ( & rtDW . nuoavhbzfe [ 0U ] , 0 , 1 ) ;
DestroyHostLibrary ( & rtDW . nuoavhbzfe [ 0U ] ) ; toHw_Terminate_wrapper (
) ; if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 19 ) ;
ssSetNumBlockIO ( rtS , 13 ) ; ssSetNumBlockParams ( rtS , 68 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 8.0E-5 ) ;
ssSetSampleTime ( rtS , 1 , 0.002 ) ; ssSetSampleTime ( rtS , 2 , 0.02048 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1711761817U ) ; ssSetChecksumVal ( rtS , 1 ,
686016757U ) ; ssSetChecksumVal ( rtS , 2 , 2344704805U ) ; ssSetChecksumVal
( rtS , 3 , 614464673U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { void * dwork =
( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork
, 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset
( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo (
rtS , & dtInfo ) ; dtInfo . numDataTypes = 21 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; } QPSK_send_new_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"QPSK_send_new" ) ; ssSetPath ( rtS , "QPSK_send_new" ) ; ssSetTStart ( rtS ,
0.0 ) ; ssSetTFinal ( rtS , 100000.00000000001 ) ; ssSetStepSize ( rtS ,
8.0E-5 ) ; ssSetFixedStepSize ( rtS , 8.0E-5 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 10 , 8192 , 4 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 10 , 8192 , 4 , 1 , 1 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32 } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 1 , 1 , 0 , 0 , 0 , 0 } ; static const
char_T * rt_LoggedStateLabels [ ] = { "TapDelayBuff" , "CircBuf" , "shiftReg"
, "inBufPtrIdx" , "outBufPtrIdx" , "bufferLength" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"QPSK_send_new/Raised Cosine\nTransmit Filter/FIR\nInterpolation" ,
"QPSK_send_new/Buffer2" , "QPSK_send_new/Bit Generation/Scrambler" ,
"QPSK_send_new/Buffer2" , "QPSK_send_new/Buffer2" , "QPSK_send_new/Buffer2" }
; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "shiftReg" , ""
, "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 ,
0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { {
0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 ,
0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 }
, { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 ,
SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 6 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , ( NULL ) , { rt_LoggedStateLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , {
rt_LoggedStateNames } , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert
} ; static void * rt_LoggedStateSignalPtrs [ 6 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) rtDW . hoeg5pvh24 ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . fgmcscr1iy ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . njjl2slvq4 ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . kfwjt2w4bi ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . hlnhqvglnw ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . ko1ido1o3s ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo )
; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver (
rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
1711761817U ) ; ssSetChecksumVal ( rtS , 1 , 686016757U ) ; ssSetChecksumVal
( rtS , 2 , 2344704805U ) ; ssSetChecksumVal ( rtS , 3 , 614464673U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = - 1 ; void MdlOutputsParameterSampleTime
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
