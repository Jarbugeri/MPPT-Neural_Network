#include "__cf_MPPT.h"
#ifndef RTW_HEADER_MPPT_acc_private_h_
#define RTW_HEADER_MPPT_acc_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "MPPT_acc.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
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
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)   (((v1)==(v2))?((double)(v1)):  (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?   muDoubleScalarFloor((v) + 0.5) :   muDoubleScalarCeil((v) - 0.5) )
#endif
void oav24anpde ( gb5oerlwuf * localB , b2vgh5tvgj * localP ) ; void
kb3gnicghz ( SimStruct * const S , real_T nov4t33dh5 , real_T fzvinx4yep ,
gb5oerlwuf * localB , og0hizz4vj * localDW , celktmhpcw * localZCE ) ; void
ouojpwpuwe ( SimStruct * const S ) ; void pmtqqn0qrt ( SimStruct * const S )
; void doydbp5xog ( SimStruct * const S ) ; void dayezeyhm3 ( SimStruct *
const S ) ; void ksid4woqdi ( SimStruct * const S ) ; void beue4oz41i (
SimStruct * const S ) ; void hzreni4qoa ( SimStruct * const S ) ;
#endif
