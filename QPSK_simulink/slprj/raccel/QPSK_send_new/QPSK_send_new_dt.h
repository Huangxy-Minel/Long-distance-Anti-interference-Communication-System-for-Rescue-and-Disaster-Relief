#include "__cf_QPSK_send_new.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( int8_T ) , sizeof ( int16_T )
, sizeof ( struct_WlRhzmDzoT2Z4Qw3Wz1vrF ) , sizeof (
struct_dra5WAEmqlluIAhMFSpUo ) , sizeof ( struct_6vjZE1zVXiMs9MoZnA9ZPB ) ,
sizeof ( int8_T ) , sizeof ( int16_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" , "int8_T" ,
"int16_T" , "struct_WlRhzmDzoT2Z4Qw3Wz1vrF" , "struct_dra5WAEmqlluIAhMFSpUo"
, "struct_6vjZE1zVXiMs9MoZnA9ZPB" , "int8_T" , "int16_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . ouvvvzepvb
[ 0 ] . re ) , 0 , 1 , 9192 } , { ( char_T * ) ( & rtB . ehbk4bryz1 [ 0 ] ) ,
0 , 0 , 8587 } , { ( char_T * ) ( & rtB . o1szxg5mdq [ 0 ] ) , 15 , 0 , 8213
} , { ( char_T * ) ( & rtB . dkjitcvete [ 0 ] ) , 3 , 0 , 168 } , { ( char_T
* ) ( & rtDW . hoeg5pvh24 [ 0 ] . re ) , 0 , 1 , 16404 } , { ( char_T * ) ( &
rtDW . njjl2slvq4 [ 0 ] ) , 6 , 0 , 7 } , { ( char_T * ) ( & rtDW .
nuoavhbzfe [ 0 ] ) , 3 , 0 , 1096 } } ; static DataTypeTransitionTable
rtBTransTable = { 7U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . ConstantBarkerCode_Value [ 0
] ) , 0 , 0 , 67 } , { ( char_T * ) ( & rtP . Gain_Gain ) , 19 , 0 , 1 } } ;
static DataTypeTransitionTable rtPTransTable = { 2U , rtPTransitions } ;
