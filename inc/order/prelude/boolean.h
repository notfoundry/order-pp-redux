#ifndef ORDER_PRELUDE_BOOLEAN_H_VAJK20040620
#define ORDER_PRELUDE_BOOLEAN_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_8true 8DEF_CONST,8true
#define ORDER_PP_SYM_8true_8true(P,v) ,P##v,

#define ORDER_PP_DEF_8false 8DEF_CONST,8false
#define ORDER_PP_SYM_8false_8false(P,v) ,P##v,

#define ORDER_PP_DEF_8not ORDER_PP_FN_CM(1,8NOT)
#define ORDER_PP_CM_8NOT(P,b,...) (,ORDER_PP_CM_8NOT_##b,P##__VA_ARGS__)
#define ORDER_PP_CM_8NOT_8true 8false
#define ORDER_PP_CM_8NOT_8false 8true

#endif
