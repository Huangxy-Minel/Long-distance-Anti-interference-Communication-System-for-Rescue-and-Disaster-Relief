#include "__cf_QPSK_rec_new.h"
#include "rt_logging_mmi.h"
#include "QPSK_rec_new_capi.h"
#include <math.h>
#include "QPSK_rec_new.h"
#include "QPSK_rec_new_private.h"
#include "QPSK_rec_new_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
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
"slprj\\raccel\\QPSK_rec_new\\QPSK_rec_new_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ; SimStruct *
const rtS = & model_S ; static void fe0cfd5swa ( real_T x [ 2048 ] ) ; static
real_T buqzotejy2 ( real_T x ) ; void MWDSPCG_R2BRScramble_InPlace_Z (
creal_T y [ ] , int32_T nChans , int32_T nRows , int32_T fftLen , int32_T
offset ) { int32_T j ; int32_T i ; int32_T bit_fftLen ; real_T tmp_re ;
real_T tmp_im ; while ( nChans > 0 ) { nChans -- ; j = fftLen >> 1 ; for ( i
= 1 ; i < fftLen - 2 ; i ++ ) { if ( i < j ) { tmp_re = y [ offset + j ] . re
; tmp_im = y [ offset + j ] . im ; y [ offset + j ] = y [ offset + i ] ; y [
offset + i ] . re = tmp_re ; y [ offset + i ] . im = tmp_im ; } bit_fftLen =
fftLen ; do { bit_fftLen = ( int32_T ) ( ( uint32_T ) bit_fftLen >> 1 ) ; j
^= bit_fftLen ; } while ( ! ( ( j & bit_fftLen ) != 0 ) ) ; } offset += nRows
; } } void MWDSPCG_R2DIT_TBLS_Z ( creal_T y [ ] , int32_T nChans , int32_T
nRows , int32_T fftLen , int32_T offset , const real_T tablePtr [ ] , int32_T
twiddleStep , boolean_T isInverse ) { int32_T nHalf ; real_T twidRe ; real_T
twidIm ; int32_T nQtr ; int32_T fwdInvFactor ; int32_T iCh ; int32_T offsetCh
; int32_T idelta ; int32_T ix ; int32_T k ; int32_T kratio ; int32_T istart ;
int32_T i1 ; int32_T j ; int32_T i2 ; real_T tmp_re ; real_T tmp_im ; nHalf =
( fftLen >> 1 ) * twiddleStep ; nQtr = nHalf >> 1 ; fwdInvFactor = isInverse
? - 1 : 1 ; offsetCh = offset ; for ( iCh = 0 ; iCh < nChans ; iCh ++ ) { for
( ix = offsetCh ; ix < ( fftLen + offsetCh ) - 1 ; ix += 2 ) { tmp_re = y [
ix + 1 ] . re ; tmp_im = y [ ix + 1 ] . im ; y [ ix + 1 ] . re = y [ ix ] .
re - tmp_re ; y [ ix + 1 ] . im = y [ ix ] . im - tmp_im ; y [ ix ] . re +=
tmp_re ; y [ ix ] . im += tmp_im ; } idelta = 2 ; k = fftLen >> 2 ; kratio =
k * twiddleStep ; while ( k > 0 ) { i1 = offsetCh ; for ( ix = 0 ; ix < k ;
ix ++ ) { i2 = i1 + idelta ; tmp_re = y [ i2 ] . re ; tmp_im = y [ i2 ] . im
; y [ i2 ] . re = y [ i1 ] . re - y [ i2 ] . re ; y [ i2 ] . im = y [ i1 ] .
im - tmp_im ; y [ i1 ] . re += tmp_re ; y [ i1 ] . im += tmp_im ; i1 +=
idelta << 1 ; } istart = offsetCh ; for ( j = kratio ; j < nHalf ; j +=
kratio ) { i1 = istart + 1 ; twidRe = tablePtr [ j ] ; twidIm = tablePtr [ j
+ nQtr ] * ( real_T ) fwdInvFactor ; for ( ix = 0 ; ix < k ; ix ++ ) { i2 =
i1 + idelta ; tmp_re = y [ i2 ] . re * twidRe - y [ i2 ] . im * twidIm ;
tmp_im = y [ i2 ] . re * twidIm + y [ i2 ] . im * twidRe ; y [ i2 ] . re = y
[ i1 ] . re - tmp_re ; y [ i2 ] . im = y [ i1 ] . im - tmp_im ; y [ i1 ] . re
+= tmp_re ; y [ i1 ] . im += tmp_im ; i1 += idelta << 1 ; } istart ++ ; }
idelta <<= 1 ; k >>= 1 ; kratio >>= 1 ; } offsetCh += nRows ; } } static void
fe0cfd5swa ( real_T x [ 2048 ] ) { int32_T i2 ; int32_T i1 ; int32_T ia ;
int32_T ib ; real_T xtmp ; int32_T b_k ; i2 = 0 ; i1 = 1 ; while ( i1 <= 1 )
{ i1 = i2 ; i2 += 2047 ; ia = 1 ; while ( ia <= 1 ) { i1 ++ ; i2 ++ ; ia = i1
- 1 ; ib = i1 + 1023 ; for ( b_k = 1 ; b_k < 1025 ; b_k ++ ) { xtmp = x [ ia
] ; x [ ia ] = x [ ib ] ; x [ ib ] = xtmp ; ia ++ ; ib ++ ; } ia = 2 ; } i1 =
2 ; } } static real_T buqzotejy2 ( real_T x ) { real_T r ; if ( ( !
muDoubleScalarIsInf ( x ) ) && ( ! muDoubleScalarIsNaN ( x ) ) ) { if ( x ==
0.0 ) { r = 0.0 ; } else { r = muDoubleScalarRem ( x , 1.0 ) ; if ( r == 0.0
) { r = 0.0 ; } else { if ( x < 0.0 ) { r ++ ; } } } } else { r = ( rtNaN ) ;
} return r ; } void MdlInitialize ( void ) { int32_T idxIn ; int32_T i ; for
( i = 0 ; i < 8096 ; i ++ ) { rtDW . lsxpdgmogp [ i ] . re = rtP .
Buffer_ic_mhhskld4kq ; rtDW . lsxpdgmogp [ i ] . im = 0.0 ; } rtDW .
dooxhebqgo = 4000 ; rtDW . ld4ftkewcy = 4000 ; rtDW . cddzpwnuex = 0 ; rtDW .
fqxk0amxeb = 21 ; rtDW . df0s3yujg1 = 1 ; rtDW . gpf2nblmlt = 20 ; rtDW .
bnupsmlzt5 . re = 0.0 ; rtDW . bnupsmlzt5 . im = 0.0 ; memset ( & rtDW .
gqx5btuepb [ 0 ] , 0 , 40U * sizeof ( creal_T ) ) ; rtDW . m1yucxivnk = false
; for ( i = 0 ; i < 2048 ; i ++ ) { rtDW . dhj4vkzmaf [ i ] = rtP .
DigitalFilter_InitialStates ; } rtDW . effey3xwny = 0.0 ; rtDW . pc5arjiauv =
0 ; for ( i = 0 ; i < 2000 ; i ++ ) { rtDW . h1ipc2chyf [ i ] . re = rtP .
Unbuffer_ic ; rtDW . h1ipc2chyf [ i ] . im = 0.0 ; } rtDW . elczwj5tyr . re =
rtP . Delay1_InitialCondition_ndhyglan5c ; rtDW . elczwj5tyr . im = 0.0 ;
rtDW . ptaxny3roj [ 0 ] = 0.0 ; rtDW . ptaxny3roj [ 1 ] = 0.0 ; rtDW .
posib3ggdt [ 0 ] = 0.0 ; rtDW . posib3ggdt [ 1 ] = 0.0 ; rtDW . mc5uo0whgt =
rtP . IntegerDelay2_InitialCondition ; rtDW . kfpmh01a1k = rtP .
IntegerDelay1_InitialCondition ; rtDW . ptnmznb0hw [ 0 ] = 0.0 ; rtDW .
ptnmznb0hw [ 1 ] = 0.0 ; rtDW . p5sfhhwl21 = false ; rtDW . phbiknpp2r = rtP
. Output_InitialCondition ; idxIn = 0 ; for ( i = 0 ; i < 99 ; i ++ ) { rtDW
. a4roe1syac [ idxIn ] . re = 0.0 ; rtDW . a4roe1syac [ idxIn ] . im = 0.0 ;
idxIn ++ ; } rtDW . lvdcsrlwfa = 0 ; rtDW . fefqcieipy = rtP .
Delay_InitialCondition ; for ( i = 0 ; i < 100 ; i ++ ) { rtDW . merzb44fhx [
i ] . re = rtP . Buffer_ic ; rtDW . merzb44fhx [ i ] . im = 0.0 ; } rtDW .
evsdrk450n = rtP . Delay1_InitialCondition ; rtDW . m3asvljnha [ 0 ] = 0 ;
rtDW . m3asvljnha [ 1 ] = 0 ; rtDW . m3asvljnha [ 2 ] = 0 ; rtDW . m3asvljnha
[ 3 ] = 0 ; rtDW . gjqfu0f13v = false ; rtDW . ml1as53acs = 0.0 ; rtDW .
clvzofwwc2 = false ; } void MdlStart ( void ) { char_T * sErr ; { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const char *
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
} } fromHw_Start_wrapper ( & rtP . SFunctionBuilder_P1 , 1 ) ; rtB .
mwspxnqhvh = 2000.0 ; rtB . lsrweaeuar [ 0 ] = 0.02 ; rtB . lsrweaeuar [ 1 ]
= 0.0 ; rtB . geedmuaywp [ 0 ] = 0.02 ; rtB . geedmuaywp [ 1 ] = 0.0 ; rtB .
fz3ctbaoql [ 0 ] = 2000.0 ; rtB . fz3ctbaoql [ 1 ] = 1.0 ; rtB . fq0yv3mn1s =
100.0 ; sErr = GetErrorBuffer ( & rtDW . hmivrtfkd4 [ 0U ] ) ;
CreateHostLibrary ( "hostlibaudio.dll" , & rtDW . hmivrtfkd4 [ 0U ] ) ; if (
* sErr == 0 ) { LibCreate_Audio ( & rtDW . hmivrtfkd4 [ 0U ] , 0 , "Default"
, 1 , 1 , 1 , 10500.0 , 1 , 1024 , 10500 , 21 , 0 , NULL ) ; } if ( * sErr !=
0 ) { DestroyHostLibrary ( & rtDW . hmivrtfkd4 [ 0U ] ) ; if ( * sErr != 0 )
{ ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } }
MdlInitialize ( ) ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { int32_T jIdx ; int32_T curTapIdx ;
int32_T maxWindow ; char_T * sErr ; real_T mtmp ; int32_T yIdx ; int32_T
yIndx ; int32_T bIndx ; int32_T idx2 ; int32_T i ; real_T acc_im ; boolean_T
exitg1 ; srClearBC ( rtDW . ojjfczgzl5 ) ; if ( ssIsSampleHit ( rtS , 0 , 0 )
) { srClearBC ( rtDW . ebgqyj5dd2 ) ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) )
{ fromHw_Outputs_wrapper ( & rtP . Constant_Value , & rtB . eyid12vzph [ 0 ]
, & rtB . fwdjmw1rs5 [ 0 ] , & rtP . SFunctionBuilder_P1 , 1 ) ; for ( i = 0
; i < 4096 ; i ++ ) { rtB . e5rykhtqm2 [ i ] . re = rtB . eyid12vzph [ i ] ;
rtB . e5rykhtqm2 [ i ] . im = rtB . fwdjmw1rs5 [ i ] ; rtB . minxrdkfnw [ i ]
. re = ( real_T ) rtB . e5rykhtqm2 [ i ] . re * 0.00048828125 ; rtB .
minxrdkfnw [ i ] . im = ( real_T ) rtB . e5rykhtqm2 [ i ] . im *
0.00048828125 ; } idx2 = 0 ; yIndx = 4096 ; bIndx = rtDW . dooxhebqgo ; if (
8096 - rtDW . dooxhebqgo <= 4096 ) { for ( i = 0 ; i < 8096 - rtDW .
dooxhebqgo ; i ++ ) { rtDW . lsxpdgmogp [ rtDW . dooxhebqgo + i ] = rtB .
minxrdkfnw [ i ] ; } idx2 = 8096 - rtDW . dooxhebqgo ; bIndx = 0 ; yIndx =
rtDW . dooxhebqgo - 4000 ; } for ( i = 0 ; i < yIndx ; i ++ ) { rtDW .
lsxpdgmogp [ bIndx + i ] = rtB . minxrdkfnw [ idx2 + i ] ; } rtDW .
dooxhebqgo += 4096 ; if ( rtDW . dooxhebqgo >= 8096 ) { rtDW . dooxhebqgo -=
8096 ; } rtDW . ld4ftkewcy += 4096 ; if ( rtDW . ld4ftkewcy > 8096 ) { rtDW .
cddzpwnuex = ( rtDW . cddzpwnuex + rtDW . ld4ftkewcy ) - 8096 ; if ( rtDW .
cddzpwnuex > 8096 ) { rtDW . cddzpwnuex -= 8096 ; } rtDW . ld4ftkewcy = 8096
; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . ld4ftkewcy -= 4000 ; if (
rtDW . ld4ftkewcy < 0 ) { rtDW . cddzpwnuex += rtDW . ld4ftkewcy ; if ( rtDW
. cddzpwnuex < 0 ) { rtDW . cddzpwnuex += 8096 ; } rtDW . ld4ftkewcy = 0 ; }
idx2 = 0 ; yIdx = rtDW . cddzpwnuex ; if ( rtDW . cddzpwnuex < 0 ) { yIdx =
rtDW . cddzpwnuex + 8096 ; } curTapIdx = 8096 - yIdx ; yIndx = 4000 ; if (
8096 - yIdx <= 4000 ) { for ( i = 0 ; i < 8096 - yIdx ; i ++ ) { rtB .
fvj531xizo [ i ] = rtDW . lsxpdgmogp [ yIdx + i ] ; } idx2 = 8096 - yIdx ;
yIdx = 0 ; yIndx = 4000 - curTapIdx ; } for ( i = 0 ; i < yIndx ; i ++ ) {
rtB . fvj531xizo [ idx2 + i ] = rtDW . lsxpdgmogp [ yIdx + i ] ; } yIdx +=
yIndx ; rtDW . cddzpwnuex = yIdx ; yIdx = 0 ; curTapIdx = rtDW . gpf2nblmlt ;
bIndx = rtDW . df0s3yujg1 ; yIndx = rtDW . fqxk0amxeb ; idx2 = 0 ; maxWindow
= ( rtDW . df0s3yujg1 + 1 ) * 20 - 20 ; for ( i = 0 ; i < 4000 ; i ++ ) {
rtDW . bnupsmlzt5 . re += rtB . fvj531xizo [ yIdx ] . re * rtP .
FIRDecimation_FILT [ yIndx ] ; rtDW . bnupsmlzt5 . im += rtB . fvj531xizo [
yIdx ] . im * rtP . FIRDecimation_FILT [ yIndx ] ; yIndx ++ ; for ( jIdx =
curTapIdx + 1 ; jIdx < maxWindow + 20 ; jIdx ++ ) { rtDW . bnupsmlzt5 . re +=
rtDW . gqx5btuepb [ jIdx ] . re * rtP . FIRDecimation_FILT [ yIndx ] ; rtDW .
bnupsmlzt5 . im += rtDW . gqx5btuepb [ jIdx ] . im * rtP . FIRDecimation_FILT
[ yIndx ] ; yIndx ++ ; } for ( jIdx = maxWindow ; jIdx <= curTapIdx ; jIdx ++
) { rtDW . bnupsmlzt5 . re += rtDW . gqx5btuepb [ jIdx ] . re * rtP .
FIRDecimation_FILT [ yIndx ] ; rtDW . bnupsmlzt5 . im += rtDW . gqx5btuepb [
jIdx ] . im * rtP . FIRDecimation_FILT [ yIndx ] ; yIndx ++ ; } rtDW .
gqx5btuepb [ curTapIdx ] = rtB . fvj531xizo [ yIdx ] ; yIdx ++ ; curTapIdx +=
20 ; if ( curTapIdx >= 40 ) { curTapIdx -= 40 ; } bIndx ++ ; if ( bIndx < 2 )
{ maxWindow += 20 ; } else { rtB . fb3mramyi2 [ idx2 ] = rtDW . bnupsmlzt5 ;
idx2 ++ ; rtDW . bnupsmlzt5 . re = 0.0 ; rtDW . bnupsmlzt5 . im = 0.0 ; bIndx
= 0 ; yIndx = 0 ; curTapIdx -- ; if ( curTapIdx < 0 ) { curTapIdx += 20 ; }
maxWindow = 0 ; } } rtDW . gpf2nblmlt = curTapIdx ; rtDW . fqxk0amxeb = yIndx
; rtDW . df0s3yujg1 = bIndx ; for ( i = 0 ; i < 2000 ; i ++ ) { rtB .
meqi0c4wdo [ i ] = muDoubleScalarHypot ( rtB . fb3mramyi2 [ i ] . re , rtB .
fb3mramyi2 [ i ] . im ) ; rtB . c0hy5wnloq [ i ] = muDoubleScalarAtan2 ( rtB
. fb3mramyi2 [ i ] . im , rtB . fb3mramyi2 [ i ] . re ) ; if ( ( rtB .
meqi0c4wdo [ i ] < 0.0 ) && ( rtP . Alphabetsize_Value > muDoubleScalarFloor
( rtP . Alphabetsize_Value ) ) ) { rtB . meqi0c4wdo [ i ] = -
muDoubleScalarPower ( - rtB . meqi0c4wdo [ i ] , rtP . Alphabetsize_Value ) ;
} else { rtB . meqi0c4wdo [ i ] = muDoubleScalarPower ( rtB . meqi0c4wdo [ i
] , rtP . Alphabetsize_Value ) ; } rtB . c0hy5wnloq [ i ] *= rtP .
Alphabetsize_Value ; rtB . oteo0hgonb [ i ] . re = rtB . meqi0c4wdo [ i ] *
muDoubleScalarCos ( rtB . c0hy5wnloq [ i ] ) ; rtB . oteo0hgonb [ i ] . im =
rtB . meqi0c4wdo [ i ] * muDoubleScalarSin ( rtB . c0hy5wnloq [ i ] ) ; } i =
0 ; bIndx = 0 ; for ( yIdx = 0 ; yIdx < 2000 ; yIdx ++ ) { rtB . lgr1arenbz [
i ] . re = rtB . oteo0hgonb [ i ] . re * rtConstP . lu3il44puf [ bIndx ] ;
rtB . lgr1arenbz [ i ] . im = rtB . oteo0hgonb [ i ] . im * rtConstP .
lu3il44puf [ bIndx ] ; i ++ ; bIndx ++ ; } if ( ! rtDW . m1yucxivnk ) { rtDW
. m1yucxivnk = true ; rtB . ishhgfdoic [ 0 ] = rtConstP . lu3il44puf [ 0 ] ;
bIndx = 1 ; for ( yIdx = 0 ; yIdx < 1999 ; yIdx ++ ) { rtB . ishhgfdoic [
bIndx ] = rtConstP . lu3il44puf [ bIndx ] ; bIndx ++ ; } } bIndx = 0 ; yIdx =
0 ; for ( yIndx = 0 ; yIndx < 2000 ; yIndx ++ ) { rtB . kvzns23b5z [ yIdx ] =
rtB . lgr1arenbz [ bIndx ] ; bIndx ++ ; yIdx ++ ; } for ( yIndx = 0 ; yIndx <
48 ; yIndx ++ ) { rtB . kvzns23b5z [ yIdx ] . re = 0.0 ; rtB . kvzns23b5z [
yIdx ] . im = 0.0 ; yIdx ++ ; } MWDSPCG_R2BRScramble_InPlace_Z ( & rtB .
kvzns23b5z [ 0U ] , 1 , 2048 , 2048 , 0 ) ; MWDSPCG_R2DIT_TBLS_Z ( & rtB .
kvzns23b5z [ 0U ] , 1 , 2048 , 2048 , 0 , & rtConstP . far4cejajf [ 0U ] , 1
, false ) ; for ( i = 0 ; i < 2048 ; i ++ ) { rtB . lcukeg4ra1 [ i ] = rtB .
kvzns23b5z [ i ] . re * rtB . kvzns23b5z [ i ] . re + rtB . kvzns23b5z [ i ]
. im * rtB . kvzns23b5z [ i ] . im ; } idx2 = 0 ; for ( yIdx = 0 ; yIdx <
2048 ; yIdx ++ ) { mtmp = rtB . lcukeg4ra1 [ idx2 ] * rtP .
DigitalFilter_Coefficients [ 0 ] ; idx2 ++ ; mtmp += rtDW . dhj4vkzmaf [ yIdx
] * rtP . DigitalFilter_Coefficients [ 1 ] ; rtB . o3emxfgw5k [ yIdx ] = mtmp
; } mtmp = 0.0 ; for ( yIdx = 0 ; yIdx < 2000 ; yIdx ++ ) { mtmp += rtB .
ishhgfdoic [ yIdx ] * rtB . ishhgfdoic [ yIdx ] ; } rtB . atw401twj1 = mtmp ;
rtB . kwd0e0b1d5 = 1.0 / rtB . atw401twj1 ; rtB . pobnd0mg5i = rtB .
fz3ctbaoql [ 0 ] ; rtB . becw5lzrrr = rtB . geedmuaywp [ 0 ] / rtB .
pobnd0mg5i ; for ( i = 0 ; i < 2048 ; i ++ ) { rtB . a4s11ojk1m [ i ] = rtB .
o3emxfgw5k [ i ] * rtB . kwd0e0b1d5 * rtB . becw5lzrrr ; rtB . j3naqhnr5n [ i
] = rtB . a4s11ojk1m [ i ] ; } fe0cfd5swa ( rtB . j3naqhnr5n ) ; i = 1 ; mtmp
= rtB . j3naqhnr5n [ 0 ] ; yIndx = 1 ; if ( muDoubleScalarIsNaN ( rtB .
j3naqhnr5n [ 0 ] ) ) { bIndx = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && (
bIndx < 2049 ) ) { i = bIndx ; if ( ! muDoubleScalarIsNaN ( rtB . j3naqhnr5n
[ bIndx - 1 ] ) ) { mtmp = rtB . j3naqhnr5n [ bIndx - 1 ] ; yIndx = bIndx ;
exitg1 = true ; } else { bIndx ++ ; } } } if ( i < 2048 ) { while ( i + 1 <
2049 ) { if ( rtB . j3naqhnr5n [ i ] > mtmp ) { mtmp = rtB . j3naqhnr5n [ i ]
; yIndx = i + 1 ; } i ++ ; } } rtB . hetsq4myqc = 1.0 / ( rtB . lsrweaeuar [
0 ] / rtB . mwspxnqhvh ) / 2048.0 * ( ( ( real_T ) yIndx - 1.0 ) - 1024.0 ) /
4.0 ; rtB . j4vvlljgpx = rtP . Gain_Gain_f3wchj02z3 * rtB . hetsq4myqc ; for
( i = 0 ; i < 2000 ; i ++ ) { mtmp = 6.2831853071795862 * rtDW . effey3xwny +
rtP . CompensateforFrequencyOffset_Phase ; rtB . ovjxaccksb [ i ] . re = rtB
. fb3mramyi2 [ i ] . re * muDoubleScalarCos ( mtmp ) - rtB . fb3mramyi2 [ i ]
. im * muDoubleScalarSin ( mtmp ) ; rtB . ovjxaccksb [ i ] . im = rtB .
fb3mramyi2 [ i ] . re * muDoubleScalarSin ( mtmp ) + rtB . fb3mramyi2 [ i ] .
im * muDoubleScalarCos ( mtmp ) ; rtDW . effey3xwny += rtB . j4vvlljgpx *
1.0E-5 ; rtDW . h1ipc2chyf [ i ] = rtB . ovjxaccksb [ i ] ; } rtDW .
pc5arjiauv = 0 ; } rtB . fpc14ms2ti = rtDW . h1ipc2chyf [ rtDW . pc5arjiauv ]
; if ( rtDW . pc5arjiauv < 1999 ) { rtDW . pc5arjiauv ++ ; } rtB . cofyxefywj
= rtDW . elczwj5tyr ; rtB . hyzdvtfnio = muDoubleScalarSign ( rtB .
cofyxefywj . re ) * rtB . cofyxefywj . im - muDoubleScalarSign ( rtB .
cofyxefywj . im ) * rtB . cofyxefywj . re ; rtB . auidd2k43x = rtP . K1_Gain
* rtB . hyzdvtfnio ; rtB . iardd3mkw3 = rtP . K2_Gain * rtB . hyzdvtfnio ;
rtB . gxdfvjpcut = rtP . DigitalFilter_NumCoeffs [ 0 ] * rtB . iardd3mkw3 +
rtDW . ptaxny3roj [ 0 ] ; rtDW . ptaxny3roj [ 0 ] = ( rtP .
DigitalFilter_NumCoeffs [ 1 ] * rtB . iardd3mkw3 + rtDW . ptaxny3roj [ 1 ] )
- rtP . DigitalFilter_DenCoeffs [ 1 ] * rtB . gxdfvjpcut ; rtB . kzyd4u3ksq =
rtB . auidd2k43x + rtB . gxdfvjpcut ; rtB . ak3sje44b5 = rtP .
DigitalFilter_NumCoeffs_pm3tdg2tvj [ 0 ] * rtB . kzyd4u3ksq + rtDW .
posib3ggdt [ 0 ] ; rtDW . posib3ggdt [ 0 ] = ( rtP .
DigitalFilter_NumCoeffs_pm3tdg2tvj [ 1 ] * rtB . kzyd4u3ksq + rtDW .
posib3ggdt [ 1 ] ) - rtP . DigitalFilter_DenCoeffs_o4x43fum1w [ 1 ] * rtB .
ak3sje44b5 ; rtB . e33vjmweeo = rtP . Gain_Gain_lh2vjcl0wj * rtB . ak3sje44b5
; rtB . neeeqzegf1 . re = rtP .
MagnitudeAngletoComplex_ConstantPart_ni3ctenwcr * muDoubleScalarCos ( rtB .
e33vjmweeo ) ; rtB . neeeqzegf1 . im = rtP .
MagnitudeAngletoComplex_ConstantPart_ni3ctenwcr * muDoubleScalarSin ( rtB .
e33vjmweeo ) ; rtB . cuiphlrvh3 . re = rtB . fpc14ms2ti . re * rtB .
neeeqzegf1 . re - rtB . fpc14ms2ti . im * rtB . neeeqzegf1 . im ; rtB .
cuiphlrvh3 . im = rtB . fpc14ms2ti . re * rtB . neeeqzegf1 . im + rtB .
fpc14ms2ti . im * rtB . neeeqzegf1 . re ; rtB . iswwz5qktn = rtDW .
mc5uo0whgt ; if ( ! rtDW . p5sfhhwl21 ) { rtDW . lyiqnjqybi . re = 0.0 ; rtDW
. lyiqnjqybi . im = 0.0 ; rtDW . p5sfhhwl21 = true ; rtDW . akdn11h4te . re =
0.0 ; rtDW . akdn11h4te . im = 0.0 ; rtDW . fvcogczy1o . re = 0.0 ; rtDW .
fvcogczy1o . im = 0.0 ; } rtB . ggid3ra30q . re = ( ( ( ( rtB . cuiphlrvh3 .
re + rtDW . akdn11h4te . re ) + rtDW . fvcogczy1o . re ) * - 0.5 + 1.5 * rtDW
. lyiqnjqybi . re ) * rtB . iswwz5qktn + rtDW . akdn11h4te . re ) + ( ( (
rtDW . lyiqnjqybi . re + rtDW . akdn11h4te . re ) - rtB . cuiphlrvh3 . re ) -
rtDW . fvcogczy1o . re ) * - 0.5 * ( rtB . iswwz5qktn * rtB . iswwz5qktn ) ;
rtB . ggid3ra30q . im = ( ( ( ( rtB . cuiphlrvh3 . im + rtDW . akdn11h4te .
im ) + rtDW . fvcogczy1o . im ) * - 0.5 + 1.5 * rtDW . lyiqnjqybi . im ) *
rtB . iswwz5qktn + rtDW . akdn11h4te . im ) + ( ( ( rtDW . lyiqnjqybi . im +
rtDW . akdn11h4te . im ) - rtB . cuiphlrvh3 . im ) - rtDW . fvcogczy1o . im )
* - 0.5 * ( rtB . iswwz5qktn * rtB . iswwz5qktn ) ; rtDW . fvcogczy1o = rtDW
. akdn11h4te ; rtDW . akdn11h4te = rtDW . lyiqnjqybi ; rtDW . lyiqnjqybi =
rtB . cuiphlrvh3 ; rtB . pxnn0khacz = rtDW . kfpmh01a1k ; if ( rtB .
pxnn0khacz > 0.0 ) { rtB . egka4n0wgk = rtDW . phbiknpp2r ; rtB . onboscufhy
= ( rtB . egka4n0wgk == rtP . CompareToConstant_const ) ; rtB . bu0vc1o0ko =
( uint8_T ) ( ( uint32_T ) rtB . egka4n0wgk + rtP . FixPtConstant_Value ) ;
if ( rtB . bu0vc1o0ko > rtP . CounterLimited_uplimit ) { rtB . biivyniief =
rtP . Constant_Value_k5dpjwyc51 ; } else { rtB . biivyniief = rtB .
bu0vc1o0ko ; } if ( rtB . onboscufhy ) { for ( yIdx = 0 ; yIdx < 99 - rtDW .
lvdcsrlwfa ; yIdx ++ ) { rtB . csbznulm04 [ yIdx ] = rtDW . a4roe1syac [ rtDW
. lvdcsrlwfa + yIdx ] ; } idx2 = 99 - rtDW . lvdcsrlwfa ; for ( yIdx = 0 ;
yIdx < rtDW . lvdcsrlwfa ; yIdx ++ ) { rtB . csbznulm04 [ idx2 + yIdx ] =
rtDW . a4roe1syac [ yIdx ] ; } rtB . csbznulm04 [ 99 ] = rtB . ggid3ra30q ; }
srUpdateBC ( rtDW . ebgqyj5dd2 ) ; } rtB . cbdvezzfie = ( rtB . onboscufhy &&
( rtB . pxnn0khacz != 0.0 ) ) ; if ( rtB . cbdvezzfie && ( rtPrevZCX .
dhhabe2ujw != POS_ZCSIG ) ) { rtB . lvhi1ezcxd = rtDW . fefqcieipy ; for ( i
= 0 ; i < 100 ; i ++ ) { rtB . ipgnpglywt [ i ] = rtDW . merzb44fhx [ i ] ;
rtB . ipgnpglywt [ i + 100 ] = rtB . csbznulm04 [ i ] ; } for ( i = 0 ; i <
100 ; i ++ ) { rtDW . merzb44fhx [ i ] = rtB . csbznulm04 [ i ] ; rtB .
gvvtdp5xcm [ i ] = rtB . ipgnpglywt [ ( int32_T ) ( ( ( real_T ) i + 1.0 ) +
rtB . lvhi1ezcxd ) - 1 ] ; } yIdx = 0 ; for ( idx2 = 0 ; idx2 < 13 ; idx2 ++
) { rtB . gplb5zarwj [ yIdx ] = rtP . ConstantBarkerCode_Value [ idx2 ] ;
yIdx ++ ; rtB . gplb5zarwj [ yIdx ] = rtP . ConstantBarkerCode_Value [ idx2 ]
; yIdx ++ ; } yIdx = 0 ; idx2 = 0 ; for ( i = 0 ; i < 13 ; i ++ ) { mtmp =
rtB . gplb5zarwj [ yIdx ] ; yIdx ++ ; bIndx = ( int32_T ) muDoubleScalarFloor
( mtmp ) << 1 ; mtmp = rtB . gplb5zarwj [ yIdx ] ; yIdx ++ ; bIndx += (
int32_T ) muDoubleScalarFloor ( mtmp ) ; yIndx = 1 ; while ( yIndx < 2 ) {
bIndx ^= bIndx >> 1 ; yIndx = 2 ; } rtB . aja0cn3qsg [ idx2 ] . re = rtConstP
. hfr0d2fmdg [ bIndx << 1 ] ; rtB . aja0cn3qsg [ idx2 ] . im = rtConstP .
hfr0d2fmdg [ ( bIndx << 1 ) + 1 ] ; idx2 ++ ; } bIndx = 0 ; for ( i = 0 ; i <
112 ; i ++ ) { yIdx = i - 99 ; yIndx = muIntScalarMax_sint32 ( yIdx , 0 ) +
99 ; idx2 = muIntScalarMin_sint32 ( i , 12 ) ; mtmp = rtB . aja0cn3qsg [
yIndx - 99 ] . re * rtB . csbznulm04 [ yIndx - i ] . re - rtB . aja0cn3qsg [
yIndx - 99 ] . im * - rtB . csbznulm04 [ yIndx - i ] . im ; acc_im = rtB .
aja0cn3qsg [ yIndx - 99 ] . re * - rtB . csbznulm04 [ yIndx - i ] . im + rtB
. aja0cn3qsg [ yIndx - 99 ] . im * rtB . csbznulm04 [ yIndx - i ] . re ; for
( yIndx ++ ; yIndx - 99 <= idx2 ; yIndx ++ ) { mtmp += rtB . aja0cn3qsg [
yIndx - 99 ] . re * rtB . csbznulm04 [ yIndx - i ] . re - rtB . aja0cn3qsg [
yIndx - 99 ] . im * - rtB . csbznulm04 [ yIndx - i ] . im ; acc_im += rtB .
aja0cn3qsg [ yIndx - 99 ] . re * - rtB . csbznulm04 [ yIndx - i ] . im + rtB
. aja0cn3qsg [ yIndx - 99 ] . im * rtB . csbznulm04 [ yIndx - i ] . re ; }
rtB . ehxhqbkdhz [ bIndx ] . re = mtmp ; rtB . ehxhqbkdhz [ bIndx ] . im =
acc_im ; bIndx ++ ; } for ( i = 0 ; i < 112 ; i ++ ) { rtB . hitgbienc0 [ i ]
= muDoubleScalarHypot ( rtB . ehxhqbkdhz [ i ] . re , rtB . ehxhqbkdhz [ i ]
. im ) ; } bIndx = 1 ; rtDW . ktnxdhpbxz = rtB . hitgbienc0 [ 0 ] ; rtB .
fo2nbqef0x = 1.0 ; for ( yIndx = 0 ; yIndx < 111 ; yIndx ++ ) { if ( rtB .
hitgbienc0 [ bIndx ] > rtDW . ktnxdhpbxz ) { rtDW . ktnxdhpbxz = rtB .
hitgbienc0 [ bIndx ] ; rtB . fo2nbqef0x = ( real_T ) yIndx + 2.0 ; } bIndx ++
; } rtB . db3uscyfsp = rtB . fq0yv3mn1s - rtB . fo2nbqef0x ; rtB . eyetzj3uq1
= rtB . fq0yv3mn1s - rtP . Constant1_Value ; rtB . brghorksve =
muDoubleScalarMod ( rtB . db3uscyfsp , rtB . eyetzj3uq1 ) ; rtB . gpopjinata
= rtDW . evsdrk450n ; rtB . fzzwpatmzm = rtP . Gain_Gain * rtB . gpopjinata ;
rtB . fobbopvf0e . re = rtP . MagnitudeAngletoComplex_ConstantPart *
muDoubleScalarCos ( rtB . fzzwpatmzm ) ; rtB . fobbopvf0e . im = rtP .
MagnitudeAngletoComplex_ConstantPart * muDoubleScalarSin ( rtB . fzzwpatmzm )
; for ( i = 0 ; i < 100 ; i ++ ) { rtB . kom1j355dw [ i ] . re = rtB .
gvvtdp5xcm [ i ] . re * rtB . fobbopvf0e . re - rtB . gvvtdp5xcm [ i ] . im *
rtB . fobbopvf0e . im ; rtB . kom1j355dw [ i ] . im = rtB . gvvtdp5xcm [ i ]
. re * rtB . fobbopvf0e . im + rtB . gvvtdp5xcm [ i ] . im * rtB . fobbopvf0e
. re ; if ( rtB . kom1j355dw [ i ] . re > 0.0 ) { if ( rtB . kom1j355dw [ i ]
. im >= 0.0 ) { bIndx = 0 ; } else { bIndx = 3 ; } } else if ( rtB .
kom1j355dw [ i ] . re < 0.0 ) { if ( rtB . kom1j355dw [ i ] . im <= 0.0 ) {
bIndx = 2 ; } else { bIndx = 1 ; } } else if ( rtB . kom1j355dw [ i ] . im <
0.0 ) { bIndx = 3 ; } else { bIndx = ( rtB . kom1j355dw [ i ] . im > 0.0 ) ;
} bIndx ^= bIndx >> 1 ; rtB . aka4gb231h [ ( i << 1 ) + 1 ] = bIndx % 2 ;
bIndx >>= 1 ; rtB . aka4gb231h [ i << 1 ] = bIndx % 2 ; } for ( yIndx = 0 ;
yIndx < 174 ; yIndx ++ ) { for ( bIndx = ( ( ( int32_T ) muDoubleScalarFloor
( rtB . aka4gb231h [ yIndx + 26 ] ) - ( uint8_T ) rtDW . m3asvljnha [ 0 ] ) -
( uint8_T ) rtDW . m3asvljnha [ 1 ] ) - ( uint8_T ) rtDW . m3asvljnha [ 3 ] ;
bIndx < 0 ; bIndx += 2 ) { } bIndx %= 2 ; rtB . nfgvfi3av2 [ yIndx ] = bIndx
; rtDW . m3asvljnha [ 3 ] = rtDW . m3asvljnha [ 2 ] ; rtDW . m3asvljnha [ 2 ]
= rtDW . m3asvljnha [ 1 ] ; rtDW . m3asvljnha [ 1 ] = rtDW . m3asvljnha [ 0 ]
; rtDW . m3asvljnha [ 0U ] = ( int32_T ) muDoubleScalarFloor ( rtB .
aka4gb231h [ yIndx + 26 ] ) ; } for ( i = 0 ; i < 13 ; i ++ ) { rtB .
k2f4fy42ut [ i ] . re = rtB . aja0cn3qsg [ i ] . re ; rtB . k2f4fy42ut [ i ]
. im = - rtB . aja0cn3qsg [ i ] . im ; rtB . dp1z0w3pyb [ i ] . re = rtB .
k2f4fy42ut [ i ] . re * rtB . gvvtdp5xcm [ i ] . re - rtB . k2f4fy42ut [ i ]
. im * rtB . gvvtdp5xcm [ i ] . im ; rtB . dp1z0w3pyb [ i ] . im = rtB .
k2f4fy42ut [ i ] . re * rtB . gvvtdp5xcm [ i ] . im + rtB . k2f4fy42ut [ i ]
. im * rtB . gvvtdp5xcm [ i ] . re ; } for ( i = 0 ; i < 13 ; i += 13 ) { for
( yIndx = i ; yIndx < i + 1 ; yIndx ++ ) { rtDW . mwa4qpprzx = rtB .
dp1z0w3pyb [ yIndx ] ; bIndx = 1 ; for ( yIdx = 11 ; yIdx >= 0 ; yIdx -- ) {
rtDW . mwa4qpprzx . re += rtB . dp1z0w3pyb [ yIndx + bIndx ] . re ; rtDW .
mwa4qpprzx . im += rtB . dp1z0w3pyb [ yIndx + bIndx ] . im ; bIndx ++ ; } rtB
. i2fhusba1q . re = rtDW . mwa4qpprzx . re / 13.0 ; rtB . i2fhusba1q . im =
rtDW . mwa4qpprzx . im / 13.0 ; } } rtB . d3burfccqn = muDoubleScalarAtan2 (
rtB . i2fhusba1q . im , rtB . i2fhusba1q . re ) ; rtB . loovichlml =
muDoubleScalarRound ( rtB . d3burfccqn * 2.0 / 3.1415926535897931 ) / 2.0 *
3.1415926535897931 ; rtDW . fefqcieipy = rtB . brghorksve ; rtDW . evsdrk450n
= rtB . loovichlml ; rtDW . ojjfczgzl5 = 4 ; } rtPrevZCX . dhhabe2ujw = rtB .
cbdvezzfie ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { memcpy ( & rtB .
o1ydd51tpe [ 0 ] , & rtB . nfgvfi3av2 [ 0 ] , 174U * sizeof ( real_T ) ) ;
for ( yIndx = 0 ; yIndx < 168 ; yIndx ++ ) { rtB . pqyu05wbdd [ yIndx ] = rtB
. o1ydd51tpe [ yIndx ] ; mtmp = muDoubleScalarFloor ( rtB . pqyu05wbdd [
yIndx ] ) ; if ( muDoubleScalarIsNaN ( mtmp ) || muDoubleScalarIsInf ( mtmp )
) { mtmp = 0.0 ; } else { mtmp = muDoubleScalarRem ( mtmp , 256.0 ) ; } rtB .
cz25yszbgm [ yIndx ] = ( int8_T ) ( mtmp < 0.0 ? ( int32_T ) ( int8_T ) - (
int8_T ) ( uint8_T ) - mtmp : ( int32_T ) ( int8_T ) ( uint8_T ) mtmp ) ; }
yIdx = 0 ; for ( i = 0 ; i < 21 ; i ++ ) { idx2 = 0 ; for ( yIndx = 0 ; yIndx
< 8 ; yIndx ++ ) { idx2 <<= 1U ; idx2 |= rtB . cz25yszbgm [ yIdx ] ; if ( (
yIndx == 0 ) && ( idx2 != 0 ) ) { idx2 = - 1 ; } yIdx ++ ; } rtB . has4tk4gru
[ i ] = ( int8_T ) idx2 ; } for ( i = 0 ; i < 21 ; i ++ ) { rtB . km2ayjw1ft
[ i ] = rtB . has4tk4gru [ i ] ; } for ( i = 0 ; i < 21 ; i ++ ) { rtB .
isoscd3hxa [ i ] = rtP . Gain1_Gain * rtB . km2ayjw1ft [ i ] ; } sErr =
GetErrorBuffer ( & rtDW . hmivrtfkd4 [ 0U ] ) ; LibUpdate_Audio ( & rtDW .
hmivrtfkd4 [ 0U ] , & rtB . isoscd3hxa [ 0U ] , 0 , 21 , 0U ) ; if ( * sErr
!= 0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; }
} if ( ! rtDW . gjqfu0f13v ) { rtDW . ebuhvi04cr . re = 0.0 ; rtDW .
ebuhvi04cr . im = 0.0 ; rtDW . gjqfu0f13v = true ; rtDW . o0xvwnxylh . re =
0.0 ; rtDW . o0xvwnxylh . im = 0.0 ; } if ( ( rtB . pxnn0khacz == 1.0 ) && (
rtDW . ml1as53acs != rtB . pxnn0khacz ) ) { rtB . mtal0lmzoj = (
muDoubleScalarSign ( rtDW . o0xvwnxylh . re ) - muDoubleScalarSign ( rtB .
ggid3ra30q . re ) ) * rtDW . ebuhvi04cr . re + ( muDoubleScalarSign ( rtDW .
o0xvwnxylh . im ) - muDoubleScalarSign ( rtB . ggid3ra30q . im ) ) * rtDW .
ebuhvi04cr . im ; } else { rtB . mtal0lmzoj = 0.0 ; } if ( rtDW . ml1as53acs
!= rtB . pxnn0khacz ) { rtDW . o0xvwnxylh = rtDW . ebuhvi04cr ; rtDW .
ebuhvi04cr = rtB . ggid3ra30q ; } else { if ( rtB . pxnn0khacz == 1.0 ) {
rtDW . o0xvwnxylh . re = 0.0 ; rtDW . o0xvwnxylh . im = 0.0 ; rtDW .
ebuhvi04cr = rtB . ggid3ra30q ; } } rtDW . ml1as53acs = rtB . pxnn0khacz ;
rtB . og0uhfdt4r = rtP . K2_Gain_m5hzi5qib5 * rtB . mtal0lmzoj ; rtB .
dt3ojgl0oz = rtP . DigitalFilter_NumCoeffs_ilqcl03itu [ 0 ] * rtB .
og0uhfdt4r + rtDW . ptnmznb0hw [ 0 ] ; rtDW . ptnmznb0hw [ 0 ] = ( rtP .
DigitalFilter_NumCoeffs_ilqcl03itu [ 1 ] * rtB . og0uhfdt4r + rtDW .
ptnmznb0hw [ 1 ] ) - rtP . DigitalFilter_DenCoeffs_kep0pa5mts [ 1 ] * rtB .
dt3ojgl0oz ; rtB . f52rciltnu = rtP . K1_Gain_hbz2ttd0l3 * rtB . mtal0lmzoj ;
rtB . ivalynhusz = rtB . f52rciltnu + rtB . dt3ojgl0oz ; if ( ! rtDW .
clvzofwwc2 ) { rtDW . mpq12xyhdw = 0.0 ; rtDW . clvzofwwc2 = true ; rtDW .
lunjgzjc24 = 0.0 ; } if ( ( buqzotejy2 ( rtDW . mpq12xyhdw ) - rtB .
ivalynhusz ) - 0.5 < 0.0 ) { rtB . dlexrl4ki2 = 1.0 ; rtDW . lunjgzjc24 =
buqzotejy2 ( rtDW . mpq12xyhdw ) / ( rtB . ivalynhusz + 0.5 ) ; } else { rtB
. dlexrl4ki2 = 0.0 ; } rtB . pdexr5mw4l = rtDW . lunjgzjc24 ; rtDW .
mpq12xyhdw = ( buqzotejy2 ( rtDW . mpq12xyhdw ) - rtB . ivalynhusz ) - 0.5 ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { memcpy ( & rtDW . dhj4vkzmaf [ 0 ] , & rtB
. lcukeg4ra1 [ 0 ] , sizeof ( real_T ) << 11U ) ; } rtDW . elczwj5tyr = rtB .
cuiphlrvh3 ; rtDW . mc5uo0whgt = rtB . pdexr5mw4l ; rtDW . kfpmh01a1k = rtB .
dlexrl4ki2 ; if ( rtB . pxnn0khacz > 0.0 ) { rtDW . phbiknpp2r = rtB .
biivyniief ; rtDW . a4roe1syac [ rtDW . lvdcsrlwfa ] = rtB . ggid3ra30q ;
rtDW . lvdcsrlwfa ++ ; while ( rtDW . lvdcsrlwfa >= 99 ) { rtDW . lvdcsrlwfa
-= 99 ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { char_T * sErr ;
fromHw_Terminate_wrapper ( & rtP . SFunctionBuilder_P1 , 1 ) ; sErr =
GetErrorBuffer ( & rtDW . hmivrtfkd4 [ 0U ] ) ; LibTerminate ( & rtDW .
hmivrtfkd4 [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy_Audio ( & rtDW . hmivrtfkd4 [
0U ] , 1 , 1 ) ; DestroyHostLibrary ( & rtDW . hmivrtfkd4 [ 0U ] ) ; if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY (
rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 4 ) ; ssSetNumBlocks ( rtS , 97 ) ;
ssSetNumBlockIO ( rtS , 82 ) ; ssSetNumBlockParams ( rtS , 106 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 1.0E-5 ) ;
ssSetSampleTime ( rtS , 1 , 0.002 ) ; ssSetSampleTime ( rtS , 2 , 0.02 ) ;
ssSetSampleTime ( rtS , 3 , 0.02048 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 4253915896U ) ; ssSetChecksumVal ( rtS , 1 ,
1430370651U ) ; ssSetChecksumVal ( rtS , 2 , 739386552U ) ; ssSetChecksumVal
( rtS , 3 , 4287294336U ) ; }
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
rtS , & dtInfo ) ; dtInfo . numDataTypes = 25 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; } QPSK_rec_new_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"QPSK_rec_new" ) ; ssSetPath ( rtS , "QPSK_rec_new" ) ; ssSetTStart ( rtS ,
0.0 ) ; ssSetTFinal ( rtS , 100.00000000000001 ) ; ssSetStepSize ( rtS ,
1.0E-5 ) ; ssSetFixedStepSize ( rtS , 1.0E-5 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 8096 , 1 , 40 , 2000 , 1 , 99 , 100 , 2048 , 1 ,
2 , 2 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 4 , 1 } ;
static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
} ; static int_T rt_LoggedStateDimensions [ ] = { 8096 , 1 , 40 , 2000 , 1 ,
99 , 100 , 2048 , 1 , 2 , 2 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 4 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_INT32 ,
SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32 ,
SS_INT32 , SS_UINT8 } ; static int_T rt_LoggedStateComplexSignals [ ] = { 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels [ ] =
{ "CircBuf" , "Sums" , "StatesBuff" , "CircBuff" , "DSTATE" , "Buff" ,
"CircBuff" , "states" , "omegatTnow" , "FILT_STATES" , "FILT_STATES" ,
"DSTATE" , "DSTATE" , "FILT_STATES" , "DSTATE" , "Valdata" , "DSTATE" ,
"inBufPtrIdx" , "outBufPtrIdx" , "bufferLength" , "PhaseIdx" , "CoeffIdx" ,
"TapDelayIndex" , "memIdx" , "BUFF_OFFSET" , "shiftReg" , "DSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"QPSK_rec_new/Receiver/Buffer" ,
"QPSK_rec_new/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"QPSK_rec_new/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"QPSK_rec_new/Receiver/Fine Frequency\nCompensation/Unbuffer" ,
"QPSK_rec_new/Receiver/Fine Frequency\nCompensation/Delay1" ,
 "QPSK_rec_new/Receiver/Timing\nRecovery/Modified Buffer/Modified Buffer/Delay Line"
, "QPSK_rec_new/Receiver/Data Decoding/Buffer" ,
 "QPSK_rec_new/Receiver/Coarse Frequency\nCompensation/Find Frequency\nOffset/Periodogram/Digital Filter"
,
 "QPSK_rec_new/Receiver/Coarse Frequency\nCompensation/Compensate\nfor Frequency Offset"
,
"QPSK_rec_new/Receiver/Fine Frequency\nCompensation/Loop Filter/Digital Filter"
, "QPSK_rec_new/Receiver/Fine Frequency\nCompensation/DDS/Digital Filter" ,
"QPSK_rec_new/Receiver/Timing\nRecovery/Timing Recovery PLL/Integer Delay2" ,
"QPSK_rec_new/Receiver/Timing\nRecovery/Timing Recovery PLL/Integer Delay1" ,
 "QPSK_rec_new/Receiver/Timing\nRecovery/Timing Recovery PLL/Loop\nFilter/Digital Filter"
, "QPSK_rec_new/Receiver/Data Decoding/Delay" ,
"QPSK_rec_new/Receiver/Data Decoding/Compute\nDelay/Maximum" ,
"QPSK_rec_new/Receiver/Data Decoding/Delay1" , "QPSK_rec_new/Receiver/Buffer"
, "QPSK_rec_new/Receiver/Buffer" , "QPSK_rec_new/Receiver/Buffer" ,
"QPSK_rec_new/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"QPSK_rec_new/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"QPSK_rec_new/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"QPSK_rec_new/Receiver/Fine Frequency\nCompensation/Unbuffer" ,
 "QPSK_rec_new/Receiver/Timing\nRecovery/Modified Buffer/Modified Buffer/Delay Line"
, "QPSK_rec_new/Receiver/Data Decoding/Descrambling/Descrambler" ,
 "QPSK_rec_new/Receiver/Timing\nRecovery/Modified Buffer/Modified Buffer/Counter\nLimited/Output"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "omegatTnow" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "shiftReg" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0
} , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32
, SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0
} , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32
, SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0
} , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 27 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , ( NULL ) , { rt_LoggedStateLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , {
rt_LoggedStateNames } , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert
} ; static void * rt_LoggedStateSignalPtrs [ 27 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) rtDW . lsxpdgmogp ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . bnupsmlzt5 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . gqx5btuepb ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . h1ipc2chyf ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . elczwj5tyr ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) rtDW . a4roe1syac ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) rtDW . merzb44fhx ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) rtDW . dhj4vkzmaf ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . effey3xwny ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) rtDW . ptaxny3roj ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) rtDW . posib3ggdt ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . mc5uo0whgt ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . kfpmh01a1k ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) rtDW . ptnmznb0hw ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . fefqcieipy ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtDW . ktnxdhpbxz ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtDW . evsdrk450n ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . dooxhebqgo ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . cddzpwnuex ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . ld4ftkewcy ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . df0s3yujg1 ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtDW . fqxk0amxeb ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtDW . gpf2nblmlt ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtDW . pc5arjiauv ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtDW . lvdcsrlwfa ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) rtDW . m3asvljnha ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtDW . phbiknpp2r ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver ( rtS
, 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } { ZCSigState * zc = ( ZCSigState * ) &
rtPrevZCX ; ssSetPrevZCSigState ( rtS , zc ) ; } { rtPrevZCX . dhhabe2ujw =
POS_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 4253915896U ) ; ssSetChecksumVal (
rtS , 1 , 1430370651U ) ; ssSetChecksumVal ( rtS , 2 , 739386552U ) ;
ssSetChecksumVal ( rtS , 3 , 4287294336U ) ; { static const sysRanDType
rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo
; static const sysRanDType * systemRan [ 11 ] ; gblRTWExtModeInfo = &
rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = ( sysRanDType * ) & rtDW . ojjfczgzl5 ; systemRan [ 3 ] = (
sysRanDType * ) & rtDW . ojjfczgzl5 ; systemRan [ 4 ] = ( sysRanDType * ) &
rtDW . ojjfczgzl5 ; systemRan [ 5 ] = & rtAlwaysEnabled ; systemRan [ 6 ] = (
sysRanDType * ) & rtDW . ebgqyj5dd2 ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
