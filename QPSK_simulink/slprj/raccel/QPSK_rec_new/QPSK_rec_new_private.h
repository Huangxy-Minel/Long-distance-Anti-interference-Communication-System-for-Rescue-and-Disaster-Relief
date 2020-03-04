#include "__cf_QPSK_rec_new.h"
#ifndef RTW_HEADER_QPSK_rec_new_private_h_
#define RTW_HEADER_QPSK_rec_new_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifndef UCHAR_MAX
#include <limits.h>
#endif
#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
#endif
#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
#endif
#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
#endif
#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
#endif
#if 0
#if ( ULLONG_MAX != (0xFFFFFFFFFFFFFFFFULL) ) || ( LLONG_MAX != (0x7FFFFFFFFFFFFFFFLL) )
#error Code was generated for compiler with different sized ulong_long/long_long. \
#endif
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern void fromHw_Start_wrapper ( const real_T * sampleTime , const int_T
p_width0 ) ; extern void fromHw_Outputs_wrapper ( const real_T * in , int16_T
* iData , int16_T * qData , const real_T * sampleTime , const int_T p_width0
) ; extern void fromHw_Terminate_wrapper ( const real_T * sampleTime , const
int_T p_width0 ) ;
#ifdef __cplusplus
}
#endif
extern void MWDSPCG_R2BRScramble_InPlace_Z ( creal_T y [ ] , int32_T nChans ,
int32_T nRows , int32_T fftLen , int32_T offset ) ; extern void
MWDSPCG_R2DIT_TBLS_Z ( creal_T y [ ] , int32_T nChans , int32_T nRows ,
int32_T fftLen , int32_T offset , const real_T tablePtr [ ] , int32_T
twiddleStep , boolean_T isInverse ) ;
#if defined(MULTITASKING)
#error Model (QPSK_rec_new) was built in \
#endif
#endif