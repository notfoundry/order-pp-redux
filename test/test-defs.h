#ifndef ORDER_TEST_TEST_DEFS_H_VAJK20040620
#define ORDER_TEST_TEST_DEFS_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_8id ORDER_PP_FN(8fn(8X,8X))
#define ORDER_PP_DEF_1st ORDER_PP_FN(8fn(8X,  ,8X))
#define ORDER_PP_DEF_2nd ORDER_PP_FN(8fn(  ,8Y,8Y))

#define ORDER_PP_DEF_8macro_let(s,i,t) ORDER_PP_MACRO(8ap(8fn(s,t),i))

#define ORDER_PP_DEF_8constant_contents ORDER_PP_CONST(is in two parts)
#define ORDER_PP_DEF_8constant_embedding ORDER_PP_CONST(This constant ORDER_PP_GET_CONST(8constant_contents)!)

#define ORDER_PP_DEF_8exp_delay                 \
ORDER_PP_FN(8fn(8N,                             \
                8unless(8is_0(8N),              \
                        8exp_delay(8dec(8N)),   \
                        8exp_delay(8dec(8N)))))

#endif
