#ifndef __c2_QPSK_send_new_h__
#define __c2_QPSK_send_new_h__

/* Type Definitions */
#ifndef typedef_SFc2_QPSK_send_newInstanceStruct
#define typedef_SFc2_QPSK_send_newInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_QPSK_send_new;
  void *c2_fEmlrtCtx;
  real_T (*c2_data)[19];
  real_T (*c2_y)[20];
} SFc2_QPSK_send_newInstanceStruct;

#endif                                 /*typedef_SFc2_QPSK_send_newInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_QPSK_send_new_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_QPSK_send_new_get_check_sum(mxArray *plhs[]);
extern void c2_QPSK_send_new_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
