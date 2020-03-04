#include "__cf_QPSK_send_new.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "QPSK_send_new_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "QPSK_send_new.h"
#include "QPSK_send_new_capi.h"
#include "QPSK_send_new_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"QPSK_send_new/Complex to Real-Imag3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 1 , 0 , TARGET_STRING ( "QPSK_send_new/Complex to Real-Imag3" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"QPSK_send_new/Data Type Conversion3" ) , TARGET_STRING ( "" ) , 0 , 1 , 0 ,
1 , 0 } , { 3 , 0 , TARGET_STRING ( "QPSK_send_new/Data Type Conversion4" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 1 , 0 } , { 4 , 0 , TARGET_STRING (
"QPSK_send_new/QPSK Modulator Baseband" ) , TARGET_STRING ( "" ) , 0 , 2 , 1
, 0 , 1 } , { 5 , 0 , TARGET_STRING ( "QPSK_send_new/Buffer2" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Matrix Concatenate" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Matrix Concatenate1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Constant2" ) , TARGET_STRING ( "" ) , 0 , 0 , 4
, 0 , 2 } , { 9 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Data Type Conversion6" ) , TARGET_STRING ( "" )
, 0 , 0 , 5 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Gain" ) , TARGET_STRING ( "" ) , 0 , 1 , 6 , 2
, 2 } , { 11 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/From Audio Device" ) , TARGET_STRING ( "" ) , 0
, 0 , 6 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Integer to Bit Converter" ) , TARGET_STRING (
"" ) , 0 , 3 , 7 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Repeat" ) , TARGET_STRING ( "" ) , 0 , 0 , 8 ,
0 , 1 } , { 14 , 0 , TARGET_STRING ( "QPSK_send_new/Bit Generation/Scrambler"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"QPSK_send_new/Raised Cosine Transmit Filter/FIR Interpolation" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 10 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 16 , TARGET_STRING ( "QPSK_send_new/Buffer2" ) ,
TARGET_STRING ( "ic" ) , 0 , 11 , 0 } , { 17 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Constant2" ) , TARGET_STRING ( "Value" ) , 0 ,
4 , 0 } , { 18 , TARGET_STRING ( "QPSK_send_new/Bit Generation/Gain" ) ,
TARGET_STRING ( "Gain" ) , 4 , 11 , 3 } , { 19 , TARGET_STRING (
"QPSK_send_new/Bit Generation/From Audio Device" ) , TARGET_STRING ( "P1" ) ,
0 , 11 , 0 } , { 20 , TARGET_STRING (
"QPSK_send_new/Bit Generation/From Audio Device" ) , TARGET_STRING ( "P2" ) ,
0 , 11 , 0 } , { 21 , TARGET_STRING (
"QPSK_send_new/Bit Generation/From Audio Device" ) , TARGET_STRING ( "P3" ) ,
0 , 11 , 0 } , { 22 , TARGET_STRING (
"QPSK_send_new/Raised Cosine Transmit Filter/FIR Interpolation" ) ,
TARGET_STRING ( "FILTER_COEFF" ) , 0 , 12 , 0 } , { 23 , TARGET_STRING (
"QPSK_send_new/Bit Generation/Barker Code SS/Constant Barker Code" ) ,
TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0
, 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0
, ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . bxe1le5ikg [ 0 ] , & rtB .
jvbcgma2dm [ 0 ] , & rtB . o1szxg5mdq [ 0 ] , & rtB . hwwkismpaq [ 0 ] , &
rtB . gvbyyw5o3g [ 0 ] . re , & rtB . aftmuloeee [ 0 ] . re , & rtB .
jd01qs5m4z [ 0 ] , & rtB . premmh4kdg [ 0 ] , ( ( & rtB . premmh4kdg [ 0 ] )
+ 168 ) , & rtB . premmh4kdg [ 0 ] , & rtB . op5mprqu15 [ 0 ] , & rtB .
ehbk4bryz1 [ 0 ] , & rtB . dkjitcvete [ 0 ] , & rtB . jd01qs5m4z [ 0 ] , ( (
& rtB . jd01qs5m4z [ 0 ] ) + 26 ) , & rtB . ouvvvzepvb [ 0 ] . re , & rtP .
Buffer2_ic , & rtP . Constant2_Value [ 0 ] , & rtP . Gain_Gain , & rtP .
FromAudioDevice_P1 , & rtP . FromAudioDevice_P2 , & rtP . FromAudioDevice_P3
, & rtP . FIRInterpolation_FILTER_COEFF [ 0 ] , & rtP .
ConstantBarkerCode_Value [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] =
{ ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , { "short" ,
"int16_T" , 0 , 0 , sizeof ( int16_T ) , SS_INT16 , 0 , 0 } , { "struct" ,
"creal_T" , 0 , 0 , sizeof ( creal_T ) , SS_DOUBLE , 1 , 0 } , {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 , 0 , 0 }
, { "signed char" , "int8_T" , 0 , 0 , sizeof ( int8_T ) , SS_INT8 , 0 , 0 }
} ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR ,
6 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0
} , { rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR ,
10 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0
} , { rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_SCALAR , 18 , 2 , 0
} , { rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } , { rtwCAPI_VECTOR , 22 , 2 , 0
} } ; static const uint_T rtDimensionArray [ ] = { 4096 , 1 , 100 , 1 , 200 ,
1 , 174 , 1 , 6 , 1 , 168 , 1 , 21 , 1 , 26 , 1 , 400 , 1 , 1 , 1 , 11 , 4 ,
13 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.02048 , 0.0 , 1.0
, 0.002 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 12 , - 11 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 16 , - 6 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 8 , 1 , 1 } } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 2 ,
1 } , { ( const void * ) & rtcapiStoredFloats [ 3 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 3 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 , 1 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 16 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 8 , rtModelParameters , 0 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 1711761817U , 686016757U
, 2344704805U , 614464673U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * QPSK_send_new_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void QPSK_send_new_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void QPSK_send_new_host_InitializeDataMapInfo (
QPSK_send_new_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
