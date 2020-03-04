#include "__cf_QPSK_rec_new.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( struct_tWjMVrOBp0cYoZ8XXGA92G
) , sizeof ( struct_nEAWNfhTll1UtDV8aniGT ) , sizeof (
struct_pRh2I6kb8EpGWYupLmWg4F ) , sizeof ( struct_TiYjGQy9n8bHGyacNpAe5G ) ,
sizeof ( struct_unxZgldSDWNxWQd5eN6VqH ) , sizeof (
struct_Ys0g6NvmxKEOD5COiDA9mC ) , sizeof ( struct_ejcL2iq8Ixn9j3Blra8OiD ) ,
sizeof ( struct_ZffMk8eIv9fpK1rr3UvwpF ) , sizeof (
struct_XmnguBwLXKPSNZuEnPyUVC ) , sizeof ( struct_6vjZE1zVXiMs9MoZnA9ZPB ) ,
sizeof ( int16_T ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T"
, "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "struct_tWjMVrOBp0cYoZ8XXGA92G" ,
"struct_nEAWNfhTll1UtDV8aniGT" , "struct_pRh2I6kb8EpGWYupLmWg4F" ,
"struct_TiYjGQy9n8bHGyacNpAe5G" , "struct_unxZgldSDWNxWQd5eN6VqH" ,
"struct_Ys0g6NvmxKEOD5COiDA9mC" , "struct_ejcL2iq8Ixn9j3Blra8OiD" ,
"struct_ZffMk8eIv9fpK1rr3UvwpF" , "struct_XmnguBwLXKPSNZuEnPyUVC" ,
"struct_6vjZE1zVXiMs9MoZnA9ZPB" , "int16_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . minxrdkfnw [ 0 ] . re ) , 0 ,
1 , 20192 } , { ( char_T * ) ( & rtB . fpc14ms2ti . re ) , 0 , 1 , 17412 } ,
{ ( char_T * ) ( & rtB . mwspxnqhvh ) , 0 , 0 , 9079 } , { ( char_T * ) ( &
rtB . e5rykhtqm2 [ 0 ] . re ) , 24 , 1 , 8192 } , { ( char_T * ) ( & rtB .
eyid12vzph [ 0 ] ) , 24 , 0 , 8192 } , { ( char_T * ) ( & rtB . cz25yszbgm [
0 ] ) , 2 , 0 , 189 } , { ( char_T * ) ( & rtB . egka4n0wgk ) , 3 , 0 , 3 } ,
{ ( char_T * ) ( & rtB . cbdvezzfie ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtDW
. lsxpdgmogp [ 0 ] . re ) , 0 , 1 , 20674 } , { ( char_T * ) ( & rtDW .
dhj4vkzmaf [ 0 ] ) , 0 , 0 , 2060 } , { ( char_T * ) ( & rtDW . ebuhvi04cr .
re ) , 0 , 1 , 38 } , { ( char_T * ) ( & rtDW . ml1as53acs ) , 0 , 0 , 3 } ,
{ ( char_T * ) ( & rtDW . dooxhebqgo ) , 6 , 0 , 12 } , { ( char_T * ) ( &
rtDW . phbiknpp2r ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW . ebgqyj5dd2 ) ,
2 , 0 , 2 } , { ( char_T * ) ( & rtDW . hmivrtfkd4 [ 0 ] ) , 3 , 0 , 1096 } ,
{ ( char_T * ) ( & rtDW . m1yucxivnk ) , 8 , 0 , 4 } } ; static
DataTypeTransitionTable rtBTransTable = { 17U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
DigitalFilter_DenCoeffs [ 0 ] ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP .
CompareToConstant_const ) , 3 , 0 , 2 } , { ( char_T * ) ( & rtP .
Delay_InitialCondition ) , 0 , 0 , 84 } , { ( char_T * ) ( & rtP .
Delay_DelayLength ) , 7 , 0 , 5 } , { ( char_T * ) ( & rtP .
Output_InitialCondition ) , 3 , 0 , 3 } } ; static DataTypeTransitionTable
rtPTransTable = { 5U , rtPTransitions } ;
