#include "__cf_QPSK_rec_new.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "QPSK_rec_new_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "QPSK_rec_new.h"
#include "QPSK_rec_new_capi.h"
#include "QPSK_rec_new_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"QPSK_rec_new/Data Type Conversion" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 0 , TARGET_STRING ( "QPSK_rec_new/Data Type Conversion7" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"QPSK_rec_new/Data Type Conversion8" ) , TARGET_STRING ( "" ) , 0 , 2 , 2 , 0
, 1 } , { 3 , 0 , TARGET_STRING ( "QPSK_rec_new/Gain1" ) , TARGET_STRING ( ""
) , 0 , 1 , 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"QPSK_rec_new/Rate Transition" ) , TARGET_STRING ( "" ) , 0 , 1 , 3 , 0 , 2 }
, { 5 , 0 , TARGET_STRING ( "QPSK_rec_new/Real-Imag to Complex" ) ,
TARGET_STRING ( "" ) , 0 , 3 , 0 , 1 , 0 } , { 6 , 0 , TARGET_STRING (
"QPSK_rec_new/Bit to Integer Converter1" ) , TARGET_STRING ( "" ) , 0 , 2 , 1
, 0 , 1 } , { 7 , 0 , TARGET_STRING ( "QPSK_rec_new/Submatrix1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 1 } , { 8 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding" ) , TARGET_STRING ( "" ) , 0 , 1 , 3 ,
0 , 3 } , { 9 , 0 , TARGET_STRING ( "QPSK_rec_new/Receiver/Buffer" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 4 } , { 10 , 0 , TARGET_STRING (
"QPSK_rec_new/fromHW/S-Function Builder" ) , TARGET_STRING ( "" ) , 0 , 4 , 0
, 1 , 0 } , { 11 , 0 , TARGET_STRING (
"QPSK_rec_new/fromHW/S-Function Builder" ) , TARGET_STRING ( "" ) , 1 , 4 , 0
, 1 , 0 } , { 12 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Coarse Frequency Compensation/Gain" ) , TARGET_STRING
( "" ) , 0 , 1 , 5 , 0 , 5 } , { 13 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Compensate for Frequency Offset"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 5 } , { 14 , 2 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Align Data" ) , TARGET_STRING ( "" ) , 0
, 0 , 7 , 0 , 3 } , { 15 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Buffer" ) , TARGET_STRING ( "" ) , 0 , 0
, 8 , 0 , 6 } , { 16 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Delay" ) , TARGET_STRING ( "" ) , 0 , 1
, 5 , 0 , 3 } , { 17 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Delay1" ) , TARGET_STRING ( "" ) , 0 , 1
, 5 , 0 , 3 } , { 18 , 5 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/PED" ) , TARGET_STRING (
"" ) , 0 , 1 , 5 , 0 , 7 } , { 19 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Delay1" ) , TARGET_STRING
( "" ) , 0 , 0 , 5 , 0 , 7 } , { 20 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Unbuffer" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 7 } , { 21 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Raised Cosine Receive Filter/FIR Decimation" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 5 } , { 22 , 6 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer" ) , TARGET_STRING (
"" ) , 0 , 0 , 9 , 0 , 8 } , { 23 , 7 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer" ) , TARGET_STRING (
"" ) , 1 , 5 , 5 , 0 , 7 } , { 24 , 1 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Find Frequency Offset"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 5 } , { 25 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Probe"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 5 } , { 26 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Probe"
) , TARGET_STRING ( "" ) , 1 , 1 , 10 , 0 , 5 } , { 27 , 4 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Barker Code  Symbol Generation /QPSK Modulator Baseband"
) , TARGET_STRING ( "" ) , 0 , 0 , 11 , 0 , 3 } , { 28 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Barker Code  Symbol Generation /Repeat"
) , TARGET_STRING ( "" ) , 0 , 1 , 12 , 0 , 3 } , { 29 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Abs" ) , TARGET_STRING (
"" ) , 0 , 1 , 13 , 0 , 3 } , { 30 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Math Function" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 3 } , { 31 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Probe" ) , TARGET_STRING (
"" ) , 0 , 1 , 5 , 0 , 3 } , { 32 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Correlation" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 13 , 0 , 3 } , { 33 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Maximum" ) , TARGET_STRING
( "" ) , 0 , 1 , 5 , 0 , 3 } , { 34 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Sum" ) , TARGET_STRING (
"" ) , 0 , 1 , 5 , 0 , 3 } , { 35 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Sum1" ) , TARGET_STRING (
"" ) , 0 , 1 , 5 , 0 , 3 } , { 36 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Descrambling/Descrambler" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 3 , 0 , 3 } , { 37 , 4 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Ambiguity Correction & Demodulation/Gain"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 3 } , { 38 , 4 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Ambiguity Correction & Demodulation/QPSK Demodulator Baseband"
) , TARGET_STRING ( "" ) , 0 , 1 , 14 , 0 , 3 } , { 39 , 3 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Offset Estimator/Phase Offset Detection"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 3 } , { 40 , 4 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Offset Estimator/Complex to Magnitude-Angle"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 3 } , { 41 , 4 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Phase Offset Estimator/Math Function" )
, TARGET_STRING ( "x*(t)" ) , 0 , 0 , 11 , 0 , 3 } , { 42 , 4 , TARGET_STRING
( "QPSK_rec_new/Receiver/Data Decoding/Phase Offset Estimator/Product" ) ,
TARGET_STRING ( "y_1(t)" ) , 0 , 0 , 11 , 0 , 3 } , { 43 , 4 , TARGET_STRING
( "QPSK_rec_new/Receiver/Data Decoding/Phase Offset Estimator/Mean" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 3 } , { 44 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Fine Frequency Compensation/Complex Phase Shift/Magnitude-Angle to Complex"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 7 } , { 45 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Complex Phase Shift/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 7 } , { 46 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/DDS/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 47 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/DDS/Digital Filter" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 48 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/K1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 49 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/K2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 50 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/Digital Filter"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 51 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 52 , 6 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 8 } , { 53 , 6 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer" ) ,
TARGET_STRING ( "" ) , 1 , 5 , 5 , 0 , 7 } , { 54 , 7 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 5 , 5 , 0 , 7 } , { 55 , 8 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Interpolation Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 7 } , { 56 , 9 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/NCO Control" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 57 , 9 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/NCO Control" ) ,
TARGET_STRING ( "" ) , 1 , 1 , 5 , 0 , 7 } , { 58 , 10 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Timing Error Detector"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 59 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Integer Delay1" )
, TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 60 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Integer Delay2" )
, TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 61 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Complex Power/Magnitude-Angle to Complex"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 5 } , { 62 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 15 , 0 , 5 } , { 63 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Window"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 5 } , { 64 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Window"
) , TARGET_STRING ( "" ) , 1 , 1 , 6 , 0 , 5 } , { 65 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Digital Filter"
) , TARGET_STRING ( "" ) , 0 , 1 , 15 , 0 , 5 } , { 66 , 4 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Ambiguity Correction & Demodulation/Complex Phase Shift/Magnitude-Angle to Complex"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 3 } , { 67 , 4 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Ambiguity Correction & Demodulation/Complex Phase Shift/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 3 } , { 68 , 6 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Delay Line"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 8 } , { 69 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/K1" )
, TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 70 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/K2" )
, TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 71 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/Digital Filter"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 72 , 0 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/Sum2"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 7 } , { 73 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Magnitude FFT/Magnitude Squared"
) , TARGET_STRING ( "" ) , 0 , 1 , 15 , 0 , 5 } , { 74 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Magnitude FFT/FFT"
) , TARGET_STRING ( "" ) , 0 , 0 , 15 , 0 , 5 } , { 75 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Normalization For PSD/Math Function1"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 5 } , { 76 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Normalization For PSD/Dot Product"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 5 } , { 77 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Periodogram - Frame Period To Sample Time/Input  dimensions"
) , TARGET_STRING ( "" ) , 0 , 1 , 10 , 0 , 5 } , { 78 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Periodogram - Frame Period To Sample Time/Input sample time"
) , TARGET_STRING ( "" ) , 0 , 1 , 10 , 0 , 5 } , { 79 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Periodogram - Frame Period To Sample Time/Product2"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 5 } , { 80 , 0 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Periodogram - Frame Period To Sample Time/Select number  of rows in  input matrix"
) , TARGET_STRING ( "" ) , 0 , 1 , 5 , 0 , 5 } , { 81 , 6 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 5 , 5 , 0 , 7 } , { 82 , 6 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Counter Limited/Output"
) , TARGET_STRING ( "" ) , 0 , 6 , 5 , 0 , 7 } , { 83 , 6 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Counter Limited/Increment Real World/FixPt Sum1"
) , TARGET_STRING ( "" ) , 0 , 6 , 5 , 0 , 7 } , { 84 , 6 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Counter Limited/Wrap To Zero/FixPt Switch"
) , TARGET_STRING ( "" ) , 0 , 6 , 5 , 0 , 7 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 85 , TARGET_STRING ( "QPSK_rec_new/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 5 , 0 } , { 86 , TARGET_STRING (
"QPSK_rec_new/To Audio Device1" ) , TARGET_STRING ( "P1" ) , 1 , 5 , 0 } , {
87 , TARGET_STRING ( "QPSK_rec_new/To Audio Device1" ) , TARGET_STRING ( "P2"
) , 1 , 5 , 0 } , { 88 , TARGET_STRING ( "QPSK_rec_new/To Audio Device1" ) ,
TARGET_STRING ( "P3" ) , 1 , 5 , 0 } , { 89 , TARGET_STRING (
"QPSK_rec_new/Receiver/Buffer" ) , TARGET_STRING ( "ic" ) , 1 , 5 , 0 } , {
90 , TARGET_STRING ( "QPSK_rec_new/fromHW/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 5 , 0 } , { 91 , TARGET_STRING (
"QPSK_rec_new/fromHW/S-Function Builder" ) , TARGET_STRING ( "P1" ) , 1 , 5 ,
0 } , { 92 , TARGET_STRING (
"QPSK_rec_new/Receiver/Coarse Frequency Compensation/Gain" ) , TARGET_STRING
( "Gain" ) , 1 , 5 , 0 } , { 93 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Compensate for Frequency Offset"
) , TARGET_STRING ( "Phase" ) , 1 , 5 , 0 } , { 94 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Buffer" ) , TARGET_STRING ( "ic" ) , 1 ,
5 , 0 } , { 95 , TARGET_STRING ( "QPSK_rec_new/Receiver/Data Decoding/Delay"
) , TARGET_STRING ( "DelayLength" ) , 7 , 5 , 0 } , { 96 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 5 , 0 } , { 97 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Delay1" ) , TARGET_STRING (
"DelayLength" ) , 7 , 5 , 0 } , { 98 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 5 , 0 } , { 99 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Delay1" ) , TARGET_STRING
( "DelayLength" ) , 7 , 5 , 0 } , { 100 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Delay1" ) , TARGET_STRING
( "InitialCondition" ) , 1 , 5 , 0 } , { 101 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Unbuffer" ) ,
TARGET_STRING ( "ic" ) , 1 , 5 , 0 } , { 102 , TARGET_STRING (
"QPSK_rec_new/Receiver/Raised Cosine Receive Filter/FIR Decimation" ) ,
TARGET_STRING ( "FILT" ) , 1 , 16 , 0 } , { 103 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Alphabet size"
) , TARGET_STRING ( "Value" ) , 1 , 5 , 0 } , { 104 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Barker Code  Symbol Generation /Constant Barker Code"
) , TARGET_STRING ( "Value" ) , 1 , 17 , 0 } , { 105 , TARGET_STRING (
"QPSK_rec_new/Receiver/Data Decoding/Compute Delay/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 5 , 0 } , { 106 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Ambiguity Correction & Demodulation/Gain"
) , TARGET_STRING ( "Gain" ) , 1 , 5 , 0 } , { 107 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Fine Frequency Compensation/Complex Phase Shift/Magnitude-Angle to Complex"
) , TARGET_STRING ( "ConstantPart" ) , 1 , 5 , 0 } , { 108 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/DDS/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 5 , 0 } , { 109 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/DDS/Digital Filter" ) ,
TARGET_STRING ( "NumCoeffs" ) , 1 , 18 , 0 } , { 110 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/DDS/Digital Filter" ) ,
TARGET_STRING ( "DenCoeffs" ) , 1 , 18 , 0 } , { 111 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/K1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 5 , 0 } , { 112 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/K2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 5 , 0 } , { 113 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/Digital Filter"
) , TARGET_STRING ( "NumCoeffs" ) , 1 , 18 , 0 } , { 114 , TARGET_STRING (
"QPSK_rec_new/Receiver/Fine Frequency Compensation/Loop Filter/Digital Filter"
) , TARGET_STRING ( "DenCoeffs" ) , 1 , 18 , 0 } , { 115 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Integer Delay1" )
, TARGET_STRING ( "DelayLength" ) , 7 , 5 , 0 } , { 116 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Integer Delay1" )
, TARGET_STRING ( "InitialCondition" ) , 1 , 5 , 0 } , { 117 , TARGET_STRING
( "QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Integer Delay2"
) , TARGET_STRING ( "DelayLength" ) , 7 , 5 , 0 } , { 118 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Integer Delay2" )
, TARGET_STRING ( "InitialCondition" ) , 1 , 5 , 0 } , { 119 , TARGET_STRING
(
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Digital Filter"
) , TARGET_STRING ( "InitialStates" ) , 1 , 5 , 0 } , { 120 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Coarse Frequency Compensation/Find Frequency Offset/Periodogram/Digital Filter"
) , TARGET_STRING ( "Coefficients" ) , 1 , 18 , 0 } , { 121 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Data Decoding/Phase Ambiguity Correction & Demodulation/Complex Phase Shift/Magnitude-Angle to Complex"
) , TARGET_STRING ( "ConstantPart" ) , 1 , 5 , 0 } , { 122 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Compare To Constant"
) , TARGET_STRING ( "const" ) , 6 , 5 , 0 } , { 123 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Counter Limited"
) , TARGET_STRING ( "uplimit" ) , 6 , 5 , 0 } , { 124 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/K1" )
, TARGET_STRING ( "Gain" ) , 1 , 5 , 0 } , { 125 , TARGET_STRING (
"QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/K2" )
, TARGET_STRING ( "Gain" ) , 1 , 5 , 0 } , { 126 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/Digital Filter"
) , TARGET_STRING ( "NumCoeffs" ) , 1 , 18 , 0 } , { 127 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Timing Recovery PLL/Loop Filter/Digital Filter"
) , TARGET_STRING ( "DenCoeffs" ) , 1 , 18 , 0 } , { 128 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Counter Limited/Output"
) , TARGET_STRING ( "InitialCondition" ) , 6 , 5 , 0 } , { 129 ,
TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Counter Limited/Increment Real World/FixPt Constant"
) , TARGET_STRING ( "Value" ) , 6 , 5 , 0 } , { 130 , TARGET_STRING (
 "QPSK_rec_new/Receiver/Timing Recovery/Modified Buffer/Modified Buffer/Counter Limited/Wrap To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 6 , 5 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . minxrdkfnw [ 0 ] . re , & rtB .
km2ayjw1ft [ 0 ] , & rtB . cz25yszbgm [ 0 ] , & rtB . isoscd3hxa [ 0 ] , &
rtB . o1ydd51tpe [ 0 ] , & rtB . e5rykhtqm2 [ 0 ] . re , & rtB . has4tk4gru [
0 ] , & rtB . pqyu05wbdd [ 0 ] , & rtB . nfgvfi3av2 [ 0 ] , & rtB .
fvj531xizo [ 0 ] . re , & rtB . eyid12vzph [ 0 ] , & rtB . fwdjmw1rs5 [ 0 ] ,
& rtB . j4vvlljgpx , & rtB . ovjxaccksb [ 0 ] . re , & rtB . gvvtdp5xcm [ 0 ]
. re , & rtB . ipgnpglywt [ 0 ] . re , & rtB . lvhi1ezcxd , & rtB .
gpopjinata , & rtB . hyzdvtfnio , & rtB . cofyxefywj . re , & rtB .
fpc14ms2ti . re , & rtB . fb3mramyi2 [ 0 ] . re , & rtB . csbznulm04 [ 0 ] .
re , & rtB . cbdvezzfie , & rtB . hetsq4myqc , & rtB . mwspxnqhvh , & rtB .
lsrweaeuar [ 0 ] , & rtB . aja0cn3qsg [ 0 ] . re , & rtB . gplb5zarwj [ 0 ] ,
& rtB . hitgbienc0 [ 0 ] , & rtB . brghorksve , & rtB . fq0yv3mn1s , & rtB .
ehxhqbkdhz [ 0 ] . re , & rtB . fo2nbqef0x , & rtB . db3uscyfsp , & rtB .
eyetzj3uq1 , & rtB . nfgvfi3av2 [ 0 ] , & rtB . fzzwpatmzm , & rtB .
aka4gb231h [ 0 ] , & rtB . loovichlml , & rtB . d3burfccqn , & rtB .
k2f4fy42ut [ 0 ] . re , & rtB . dp1z0w3pyb [ 0 ] . re , & rtB . i2fhusba1q .
re , & rtB . neeeqzegf1 . re , & rtB . cuiphlrvh3 . re , & rtB . e33vjmweeo ,
& rtB . ak3sje44b5 , & rtB . auidd2k43x , & rtB . iardd3mkw3 , & rtB .
gxdfvjpcut , & rtB . kzyd4u3ksq , & rtB . csbznulm04 [ 0 ] . re , & rtB .
onboscufhy , & rtB . cbdvezzfie , & rtB . ggid3ra30q . re , & rtB .
dlexrl4ki2 , & rtB . pdexr5mw4l , & rtB . mtal0lmzoj , & rtB . pxnn0khacz , &
rtB . iswwz5qktn , & rtB . oteo0hgonb [ 0 ] . re , & rtB . a4s11ojk1m [ 0 ] ,
& rtB . lgr1arenbz [ 0 ] . re , & rtB . ishhgfdoic [ 0 ] , & rtB . o3emxfgw5k
[ 0 ] , & rtB . fobbopvf0e . re , & rtB . kom1j355dw [ 0 ] . re , & rtB .
csbznulm04 [ 0 ] . re , & rtB . f52rciltnu , & rtB . og0uhfdt4r , & rtB .
dt3ojgl0oz , & rtB . ivalynhusz , & rtB . lcukeg4ra1 [ 0 ] , & rtB .
kvzns23b5z [ 0 ] . re , & rtB . kwd0e0b1d5 , & rtB . atw401twj1 , & rtB .
fz3ctbaoql [ 0 ] , & rtB . geedmuaywp [ 0 ] , & rtB . becw5lzrrr , & rtB .
pobnd0mg5i , & rtB . onboscufhy , & rtB . egka4n0wgk , & rtB . bu0vc1o0ko , &
rtB . biivyniief , & rtP . Gain1_Gain , & rtP . ToAudioDevice1_P1 , & rtP .
ToAudioDevice1_P2 , & rtP . ToAudioDevice1_P3 , & rtP . Buffer_ic_mhhskld4kq
, & rtP . Constant_Value , & rtP . SFunctionBuilder_P1 , & rtP .
Gain_Gain_f3wchj02z3 , & rtP . CompensateforFrequencyOffset_Phase , & rtP .
Buffer_ic , & rtP . Delay_DelayLength , & rtP . Delay_InitialCondition , &
rtP . Delay1_DelayLength , & rtP . Delay1_InitialCondition , & rtP .
Delay1_DelayLength_fhvxo5d3vu , & rtP . Delay1_InitialCondition_ndhyglan5c ,
& rtP . Unbuffer_ic , & rtP . FIRDecimation_FILT [ 0 ] , & rtP .
Alphabetsize_Value , & rtP . ConstantBarkerCode_Value [ 0 ] , & rtP .
Constant1_Value , & rtP . Gain_Gain , & rtP .
MagnitudeAngletoComplex_ConstantPart_ni3ctenwcr , & rtP .
Gain_Gain_lh2vjcl0wj , & rtP . DigitalFilter_NumCoeffs_pm3tdg2tvj [ 0 ] , &
rtP . DigitalFilter_DenCoeffs_o4x43fum1w [ 0 ] , & rtP . K1_Gain , & rtP .
K2_Gain , & rtP . DigitalFilter_NumCoeffs [ 0 ] , & rtP .
DigitalFilter_DenCoeffs [ 0 ] , & rtP . IntegerDelay1_DelayLength , & rtP .
IntegerDelay1_InitialCondition , & rtP . IntegerDelay2_DelayLength , & rtP .
IntegerDelay2_InitialCondition , & rtP . DigitalFilter_InitialStates , & rtP
. DigitalFilter_Coefficients [ 0 ] , & rtP .
MagnitudeAngletoComplex_ConstantPart , & rtP . CompareToConstant_const , &
rtP . CounterLimited_uplimit , & rtP . K1_Gain_hbz2ttd0l3 , & rtP .
K2_Gain_m5hzi5qib5 , & rtP . DigitalFilter_NumCoeffs_ilqcl03itu [ 0 ] , & rtP
. DigitalFilter_DenCoeffs_kep0pa5mts [ 0 ] , & rtP . Output_InitialCondition
, & rtP . FixPtConstant_Value , & rtP . Constant_Value_k5dpjwyc51 , } ;
static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "struct" ,
"creal_T" , 0 , 0 , sizeof ( creal_T ) , SS_DOUBLE , 1 , 0 } , { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , { "signed char"
, "int8_T" , 0 , 0 , sizeof ( int8_T ) , SS_INT8 , 0 , 0 } , { "struct" ,
"cint16_T" , 0 , 0 , sizeof ( cint16_T ) , SS_INT16 , 1 , 0 } , { "short" ,
"int16_T" , 0 , 0 , sizeof ( int16_T ) , SS_INT16 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8
, 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) ,
SS_UINT32 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0
} , { rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_SCALAR , 10 , 2 , 0
} , { rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0
} , { rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR ,
14 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR ,
20 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 22 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 26 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 28 , 2
, 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } , { rtwCAPI_VECTOR , 30 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 4096 , 1 , 21 , 1 , 168 , 1 ,
174 , 1 , 4000 , 1 , 1 , 1 , 2000 , 1 , 100 , 1 , 200 , 1 , 2 , 1 , 13 , 1 ,
26 , 1 , 112 , 1 , 2048 , 1 , 21 , 2 , 1 , 2 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.02048 , 0.0 , 0.002 , 1.0 , 0.02 , 1.0E-5 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 3 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 12 , - 11 , 1 } } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 3 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 1 } , { ( const void * ) & rtcapiStoredFloats
[ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 , 0 } , { ( NULL ) ,
( NULL ) , - 1 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 2 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 4 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 2 ,
0 } , { ( NULL ) , ( NULL ) , - 1 , 1 } , { ( const void * ) &
rtcapiStoredFloats [ 5 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 5 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 0 , 1 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 85 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 46 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 4253915896U , 1430370651U , 739386552U ,
4287294336U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
QPSK_rec_new_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void QPSK_rec_new_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
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
void QPSK_rec_new_host_InitializeDataMapInfo (
QPSK_rec_new_host_DataMapInfo_T * dataMap , const char * path ) {
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
