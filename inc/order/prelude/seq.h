#ifndef ORDER_PRELUDE_SEQ_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8import_seq ORDER_PP_FN_MACRO_P(1,ORDER_PP_IMPORT_SEQ)
#define ORDER_PP_IMPORT_SEQ(P,s) ORDER_PP_SEQ_TERMINATE(ORDER_PP_IMPORT_SEQ_A P##s)
#define ORDER_PP_IMPORT_SEQ_A(x) (,ORDER_PP_BOTH(,x))ORDER_PP_IMPORT_SEQ_B
#define ORDER_PP_IMPORT_SEQ_A0
#define ORDER_PP_IMPORT_SEQ_B(x) (,ORDER_PP_BOTH(,x))ORDER_PP_IMPORT_SEQ_A
#define ORDER_PP_IMPORT_SEQ_B0

#define ORDER_PP_DEF_8import_args_seq ORDER_PP_FN_MACRO_P(1,ORDER_PP_IMPORT_ARGS_SEQ)
#define ORDER_PP_IMPORT_ARGS_SEQ(P,ts) ORDER_PP_SEQ_TERMINATE(ORDER_PP_IMPORT_ARGS_SEQ_A P##ts)
#define ORDER_PP_IMPORT_ARGS_SEQ_A(...) (,(ORDER_PP_BOTH(,__VA_ARGS__)))ORDER_PP_IMPORT_ARGS_SEQ_B
#define ORDER_PP_IMPORT_ARGS_SEQ_A0
#define ORDER_PP_IMPORT_ARGS_SEQ_B(...) (,(ORDER_PP_BOTH(,__VA_ARGS__)))ORDER_PP_IMPORT_ARGS_SEQ_A
#define ORDER_PP_IMPORT_ARGS_SEQ_B0

#define ORDER_PP_DEF_8import_tuple_seq ORDER_PP_FN_MACRO_P(1,ORDER_PP_IMPORT_TUPLE_SEQ)
#define ORDER_PP_IMPORT_TUPLE_SEQ(P,ts) ORDER_PP_SEQ_TERMINATE(ORDER_PP_IMPORT_TUPLE_SEQ_A P##ts)
#define ORDER_PP_IMPORT_TUPLE_SEQ_A(...) (,(,ORDER_PP_BOTH(,__VA_ARGS__)))ORDER_PP_IMPORT_TUPLE_SEQ_B
#define ORDER_PP_IMPORT_TUPLE_SEQ_A0
#define ORDER_PP_IMPORT_TUPLE_SEQ_B(...) (,(,ORDER_PP_BOTH(,__VA_ARGS__)))ORDER_PP_IMPORT_TUPLE_SEQ_A
#define ORDER_PP_IMPORT_TUPLE_SEQ_B0

#define ORDER_PP_DEF_8seq ORDER_PP_CTOR_N(8SEQ)
#define ORDER_PP_8SEQ_1(P,_0,...) (,(,P##_0),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_2(P,_0,_1,...) (,(,P##_0)(,P##_1),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_3(P,_0,_1,_2,...) (,(,P##_0)(,P##_1)(,P##_2),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_4(P,_0,_1,_2,_3,...) (,(,P##_0)(,P##_1)(,P##_2)(,P##_3),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_5(P,_0,_1,_2,_3,_4,...) (,(,P##_0)(,P##_1)(,P##_2)(,P##_3)(,P##_4),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_6(P,_0,_1,_2,_3,_4,_5,...) (,(,P##_0)(,P##_1)(,P##_2)(,P##_3)(,P##_4)(,P##_5),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_7(P,_0,_1,_2,_3,_4,_5,_6,...) (,(,P##_0)(,P##_1)(,P##_2)(,P##_3)(,P##_4)(,P##_5)(,P##_6),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_8(P,_0,_1,_2,_3,_4,_5,_6,_7,...) (,(,P##_0)(,P##_1)(,P##_2)(,P##_3)(,P##_4)(,P##_5)(,P##_6)(,P##_7),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,...) (,(,P##_0)(,P##_1)(,P##_2)(,P##_3)(,P##_4)(,P##_5)(,P##_6)(,P##_7)(,P##_8),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) (,(,P##_0)(,P##_1)(,P##_2)(,P##_3)(,P##_4)(,P##_5)(,P##_6)(,P##_7)(,P##_8)(,P##_9),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_append ORDER_PP_OP_LEFT_CM(8SEQ_APPEND_2)
#define ORDER_PP_8SEQ_APPEND_2(P,r,l,...) (,ORDER_PP_OPEN(,l##P)P##r,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_at ORDER_PP_FN_CM(2,8SEQ_AT)
#define ORDER_PP_8SEQ_AT(P,i,s,...) (,ORDER_PP_FX(,ORDER_PP_SEQ_AT,(,0,ORDER_PP_FX(,ORDER_PP_TUPLE_AT_1,(,ORDER_PP_SEQ_SPLIT_AT_##i P##s,)))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_first ORDER_PP_FN_CM(1,8SEQ_FIRST)
#define ORDER_PP_8SEQ_FIRST(P,s,...) (,ORDER_PP_SEQ_AT(,0,P##s),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_first_n ORDER_PP_FN_CM(2,8SEQ_FIRST_N)
#define ORDER_PP_8SEQ_FIRST_N(P,n,s,...) (,ORDER_PP_FX(,ORDER_PP_TUPLE_AT_0,(,ORDER_PP_SEQ_SPLIT_AT_##n P##s,)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_is_nil ORDER_PP_FN_CM(1,8SEQ_IS_NIL)
#define ORDER_PP_8SEQ_IS_NIL(P,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_isnt_nil ORDER_PP_FN_CM(1,8SEQ_ISNT_NIL)
#define ORDER_PP_8SEQ_ISNT_NIL(P,s,...) (,ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST s##P,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_map_seq ORDER_PP_FN_MACRO_P(1,ORDER_PP_SEQ_MAP_SEQ)

#define ORDER_PP_DEF_8seq_nil 8DEF_CONST,

#define ORDER_PP_DEF_8seq_pop_at ORDER_PP_FN_CM(2,8SEQ_POP_AT)
#define ORDER_PP_8SEQ_POP_AT(P,i,s,...) (,ORDER_PP_FX(,ORDER_PP_SEQ_POP_AT_B,(,ORDER_PP_SEQ_SPLIT_AT_##i P##s,)),P##__VA_ARGS__)
#define ORDER_PP_SEQ_POP_AT_B(P,l,r,...) ORDER_PP_LEFT(,l##P)ORDER_PP_EAT r##P

#define ORDER_PP_DEF_8seq_pop_back ORDER_PP_FN_CM(1,8SEQ_POP_BACK)
#define ORDER_PP_8SEQ_POP_BACK(P,s,...) (,ORDER_PP_FX(,ORDER_PP_SEQ_POP_BACK_SWAP_A,ORDER_PP_SEQ_POP_BACK_SHIFT P##s(0,)),P##__VA_ARGS__)

#define ORDER_PP_SEQ_POP_BACK_SHIFT(P,x) (x##P,ORDER_PP_SEQ_POP_BACK_SHIFT_A##P
#define ORDER_PP_SEQ_POP_BACK_SHIFT_A(P,x) P)(x##P,ORDER_PP_SEQ_POP_BACK_SHIFT_B##P
#define ORDER_PP_SEQ_POP_BACK_SHIFT_A0 )
#define ORDER_PP_SEQ_POP_BACK_SHIFT_B(P,x) P)(x##P,ORDER_PP_SEQ_POP_BACK_SHIFT_A##P
#define ORDER_PP_SEQ_POP_BACK_SHIFT_B0 )

#define ORDER_PP_SEQ_POP_BACK_SWAP_A(x,P) ORDER_PP_SEQ_POP_BACK_SWAP_F##P(,P##x,B)
#define ORDER_PP_SEQ_POP_BACK_SWAP_B(x,P) ORDER_PP_SEQ_POP_BACK_SWAP_F##P(,P##x,A)
#define ORDER_PP_SEQ_POP_BACK_SWAP_F(P,x,i) (,P##x)ORDER_PP_SEQ_POP_BACK_SWAP_##i
#define ORDER_PP_SEQ_POP_BACK_SWAP_F0(...) ORDER_PP_EAT

#define ORDER_PP_DEF_8seq_pop_front ORDER_PP_FN_CM(1,8SEQ_REST)

#define ORDER_PP_DEF_8seq_push_at ORDER_PP_FN_CM(3,8SEQ_PUSH_AT)
#define ORDER_PP_8SEQ_PUSH_AT(P,i,s,x,...) (,ORDER_PP_FX(,ORDER_PP_SEQ_PUSH_AT_B,(,P##x,ORDER_PP_SEQ_SPLIT_AT_##i P##s,)),P##__VA_ARGS__)
#define ORDER_PP_SEQ_PUSH_AT_B(P,x,l,r,...) l##P(,P##x)P##r

#define ORDER_PP_DEF_8seq_push_back ORDER_PP_FN_CM(2,8SEQ_PUSH_BACK)
#define ORDER_PP_8SEQ_PUSH_BACK(P,x,s,...) (,P##s(,P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_push_front ORDER_PP_FN_CM(2,8SEQ_PUSH_FRONT)
#define ORDER_PP_8SEQ_PUSH_FRONT(P,x,s,...) (,(,P##x)P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_range ORDER_PP_FN_CM(3,8SEQ_RANGE)
#define ORDER_PP_8SEQ_RANGE(P,i,n,s,...) (,ORDER_PP_FX(,ORDER_PP_TUPLE_AT_0,(,ORDER_PP_FX(,ORDER_PP_SEQ_SPLIT_AT_##n,ORDER_PP_FX(,ORDER_PP_TUPLE_AT_1,(,ORDER_PP_SEQ_SPLIT_AT_##i P##s,))),)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_rest ORDER_PP_FN_CM(1,8SEQ_REST)
#define ORDER_PP_8SEQ_REST(P,s,...) (,ORDER_PP_EAT P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_rest_n ORDER_PP_FN_CM(2,8SEQ_REST_N)
#define ORDER_PP_8SEQ_REST_N(P,n,s,...) (,ORDER_PP_FX(,ORDER_PP_TUPLE_AT_1,(,ORDER_PP_SEQ_SPLIT_AT_##n P##s,)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_reverse ORDER_PP_FN_CM(1,8SEQ_REVERSE)
#define ORDER_PP_8SEQ_REVERSE(P,s,...) (,ORDER_PP_PM(,P##s,8SEQ_REV_PAIR,0,),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_REV_PAIR(P,s,n,...) (,ORDER_PP_SEQ_IS_SIZE_LT_1(,P##s)(,ORDER_PP_OPEN(,P##s,8SEQ_REV_SWAP,P##n),ORDER_PP_SEQ_REV_PAIR_A P##s(0,),8SEQ_REV_PAIR,ORDER_PP_INC_##n),)
#define ORDER_PP_SEQ_REV_PAIR_A(P,x) ORDER_PP_SEQ_REV_PAIR_B##P(,x##P)
#define ORDER_PP_SEQ_REV_PAIR_B(P,x) (,(,P##x,ORDER_PP_SEQ_REV_PAIR_C
#define ORDER_PP_SEQ_REV_PAIR_B0(...)
#define ORDER_PP_SEQ_REV_PAIR_C(P,x) ORDER_PP_SEQ_REV_PAIR_D##P(,x##P)
#define ORDER_PP_SEQ_REV_PAIR_D(P,x) P##x,))ORDER_PP_SEQ_REV_PAIR_A
#define ORDER_PP_SEQ_REV_PAIR_D0(...) ,0))
#define ORDER_PP_8SEQ_REV_SWAP(P,s,n,...) ORDER_PP_IS_0_##n(,ORDER_PP_8EXIT(,P##s,),(,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_REV_SWAP_A P##s),8SEQ_REV_SWAP,ORDER_PP_DEC_##n,))
#define ORDER_PP_SEQ_REV_SWAP_A(P,PxyS) ORDER_PP_SEQ_REV_SWAP_B PxyS##P
#define ORDER_PP_SEQ_REV_SWAP_A0
#define ORDER_PP_SEQ_REV_SWAP_B(P,x,y,S) ORDER_PP_SEQ_REV_SWAP_F##S(,P##y)(,P##x)ORDER_PP_SEQ_REV_SWAP_C
#define ORDER_PP_SEQ_REV_SWAP_C(P,PxyS) ORDER_PP_SEQ_REV_SWAP_D PxyS##P
#define ORDER_PP_SEQ_REV_SWAP_C0
#define ORDER_PP_SEQ_REV_SWAP_D(P,x,y,S) ORDER_PP_SEQ_REV_SWAP_F##S(,P##y)(,P##x)ORDER_PP_SEQ_REV_SWAP_A
#define ORDER_PP_SEQ_REV_SWAP_F
#define ORDER_PP_SEQ_REV_SWAP_F0(...)

#define ORDER_PP_DEF_8seq_set ORDER_PP_FN_CM(3,8SEQ_SET)
#define ORDER_PP_8SEQ_SET(P,i,s,x,...) (,ORDER_PP_FX(,ORDER_PP_SEQ_SET_B,(,P##x,ORDER_PP_SEQ_SPLIT_AT_##i P##s,)),P##__VA_ARGS__)
#define ORDER_PP_SEQ_SET_B(P,x,l,r,...) l##P(,P##x)ORDER_PP_EAT r##P

#define ORDER_PP_DEF_8seq_size ORDER_PP_FN_MACRO_P(1,ORDER_PP_SEQ_SIZE)
#define ORDER_PP_SEQ_SIZE(P,s) ORDER_PP_DEC(ORDER_PP_SCAN(ORDER_PP_SEQ_SIZE_A P##s(0,) ORDER_PP_SEQ_CLOSE_A P##s(0,)))
#define ORDER_PP_SEQ_SIZE_A(P,x) ORDER_PP_INC ORDER_PP_BLOCK(ORDER_PP_SEQ_SIZE_B##P
#define ORDER_PP_SEQ_SIZE_A0 0
#define ORDER_PP_SEQ_SIZE_B(P,x) ORDER_PP_INC ORDER_PP_BLOCK(ORDER_PP_SEQ_SIZE_A##P
#define ORDER_PP_SEQ_SIZE_B0 0

#define ORDER_PP_DEF_8seq_to_tuple ORDER_PP_FN_MACRO_P(1,ORDER_PP_SEQ_TO_TUPLE)
#define ORDER_PP_SEQ_TO_TUPLE(P,s) ORDER_PP_FX(,ORDER_PP_SEQ_TO_TUPLE_TERMINATE,(ORDER_PP_SEQ_TO_TUPLE_A P##s))
#define ORDER_PP_SEQ_TO_TUPLE_TERMINATE(...) ORDER_PP_SEQ_TO_TUPLE_##__VA_ARGS__##0
#define ORDER_PP_SEQ_TO_TUPLE_ORDER_PP_SEQ_TO_TUPLE_A0
#define ORDER_PP_SEQ_TO_TUPLE_0 (
#define ORDER_PP_SEQ_TO_TUPLE_A(P,x) 0,ORDER_PP_RIGHT(,P##x)ORDER_PP_SEQ_TO_TUPLE_B
#define ORDER_PP_SEQ_TO_TUPLE_B(P,x) ORDER_PP_RIGHT(,,P##x)ORDER_PP_SEQ_TO_TUPLE_C
#define ORDER_PP_SEQ_TO_TUPLE_B0 )
#define ORDER_PP_SEQ_TO_TUPLE_C(P,x) ORDER_PP_RIGHT(,,P##x)ORDER_PP_SEQ_TO_TUPLE_B
#define ORDER_PP_SEQ_TO_TUPLE_C0 )

// Higher-order functions

#define ORDER_PP_DEF_8seq_build ORDER_PP_FN_CM(2,8SEQ_BUILD)
#define ORDER_PP_8SEQ_BUILD(P,f,xs,...) (,ORDER_PP_SEQ_IS_NIL(,P##xs)(,,ORDER_PP_SEQ_AT(,0,P##xs),8SEQ_BUILD_3,P##f,ORDER_PP_EAT xs##P),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_BUILD_3(P,y,f,xs,...) (,ORDER_PP_SEQ_IS_NIL(,P##xs)(,P##y,ORDER_PP_SEQ_AT(,0,P##xs),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,1,P##xs(,P##y)),8SEQ_BUILD_3,P##f,ORDER_PP_EAT_2 xs##P(,P##y)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_exists ORDER_PP_FN_CM(2,8SEQ_EXISTS)
#define ORDER_PP_8SEQ_EXISTS(P,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,8false,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_EXISTS_4,P##f,ORDER_PP_SEQ_AT_1 P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_EXISTS_4(P,b,f,x,xs,...) (,ORDER_PP_SELECT_4(ORDER_PP_IF_##b,ORDER_PP_SEQ_IS_NIL(,P##xs))(,8true,8true,ORDER_PP_LEFT(,P##x,ORDER_PP_OPEN f##P),P##x,ORDER_PP_OPEN f##P,8SEQ_EXISTS_4,P##f,ORDER_PP_SEQ_AT_0 P##xs),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_filter ORDER_PP_FN_CM(2,8REMAP_021,,8SEQ_FILTER_3)
#define ORDER_PP_8SEQ_FILTER_3(P,f,out,in,...) (,ORDER_PP_SEQ_IS_NIL(,P##in)(,P##out,ORDER_PP_SEQ_AT(,0,P##in),ORDER_PP_OPEN f##P,8SEQ_FILTER_3_B,P##f,P##out,ORDER_PP_SEQ_AT_0 in##P),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FILTER_3_B(P,b,f,out,x,...) ORDER_PP_CM_INVOKE(8SEQ_FILTER_3,P##f,ORDER_PP_LEFT(,out##P)ORDER_PP_WHEN_##b(,(,P##x))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_fold ORDER_PP_FN_CM(3,8REMAP_102,8SEQ_FOLD)
#define ORDER_PP_8SEQ_FOLD(P,x,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,P##x,P##x,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##s),8SEQ_FOLD,P##f,ORDER_PP_EAT s##P),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_all ORDER_PP_FN_CM(2,8SEQ_FOR_ALL)
#define ORDER_PP_8SEQ_FOR_ALL(P,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,8true,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_FOR_ALL_4,P##f,ORDER_PP_SEQ_AT_1 P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_ALL_4(P,b,f,x,xs,...) (,ORDER_PP_IF_NOT_##b(,8false,P##x,ORDER_PP_OPEN f##P ORDER_PP_SEQ_IS_NIL(,P##xs)(,,,8SEQ_FOR_ALL_4,P##f,ORDER_PP_SEQ_AT_0 P##xs)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each ORDER_PP_FN_CM(2,8REMAP_201,,8SEQ_FOR_EACH_3)
#define ORDER_PP_8SEQ_FOR_EACH_3(P,_,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_FOR_EACH_3,P##f,ORDER_PP_EAT s##P),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each_in_product ORDER_PP_FN_CM(2,8SEQ_FOR_EACH_IN_PRODUCT)
#define ORDER_PP_8SEQ_FOR_EACH_IN_PRODUCT(P,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,,8SEQ_FOR_EACH_3,(,ORDER_PP_OPEN f##P,8SEQ_FOR_EACH_IN_PRODUCT,ORDER_PP_EAT s##P),ORDER_PP_SEQ_AT(,0,P##s)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each_with_idx ORDER_PP_FN_CM(2,8REMAP_2013,,0,8SEQ_FOR_EACH_WITH_IDX_4)
#define ORDER_PP_8SEQ_FOR_EACH_WITH_IDX_4(P,_,f,s,i,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,P##i,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##s),8SEQ_FOR_EACH_WITH_IDX_4,P##f,ORDER_PP_EAT s##P,ORDER_PP_INC_##i),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_map ORDER_PP_FN_CM(2,8SEQ_MAP)
#define ORDER_PP_8SEQ_MAP(P,f,in,...) (,ORDER_PP_SEQ_IS_NIL(,P##in)(,,ORDER_PP_SEQ_AT(,0,P##in),ORDER_PP_OPEN f##P,8SEQ_MAP_3,P##f,ORDER_PP_EAT in##P,),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_MAP_3(P,x,f,in,out,...) (,ORDER_PP_SEQ_IS_NIL(,P##in)(,,ORDER_PP_SEQ_AT(,0,P##in),ORDER_PP_OPEN f##P,8SEQ_MAP_3,P##f,ORDER_PP_EAT in##P,)P##out(,P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_merge ORDER_PP_FN_CM(3,8SEQ_MERGE_4,)
#define ORDER_PP_8SEQ_MERGE_4(P,f,ls,rs,out,...) (,ORDER_PP_SELECT_4(ORDER_PP_SEQ_IS_NIL(,P##ls),ORDER_PP_SEQ_IS_NIL(,P##rs))(,P##out,ORDER_PP_OPEN(,out##P)P##rs,ORDER_PP_OPEN(,out##P)P##ls,ORDER_PP_SEQ_AT(,0,P##ls),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##rs),8SEQ_MERGE_4_B,P##f,ORDER_PP_SEQ_AT_0 ls##P,ORDER_PP_SEQ_AT_0 rs##P,P##out),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_MERGE_4_B(P,c,f,l,ls,r,rs,out,...) ORDER_PP_CM_INVOKE(8SEQ_MERGE_4,P##f,ORDER_PP_UNLESS_##c(,(,P##l))P##ls,ORDER_PP_WHEN_##c(,(,P##r))P##rs,out##P(,ORDER_PP_IF_##c(,P##l,P##r))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_merge_sort ORDER_PP_FN_CM(2,8SEQ_MERGE_SORT)
#define ORDER_PP_8SEQ_MERGE_SORT(P,f,s,...) (,(,8WAIT_2,8REMAP_2013,(,P##f,,8SEQ_MERGE_4,)),8SEQ_BUILD,ORDER_PP_SEQ_MAP_SEQ(,P##s),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_partition ORDER_PP_FN_CM(2,8SEQ_PARTITION_4,,,8TUPLE_2)
#define ORDER_PP_8SEQ_PARTITION_4(P,f,in,ot,of,K,...) (,ORDER_PP_SEQ_IS_NIL(,P##in)(,ORDER_PP_OPEN(,P##ot,P##K,P##of),ORDER_PP_SEQ_AT(,0,P##in),ORDER_PP_OPEN f##P,8SEQ_PARTITION_4_B,P##f,ORDER_PP_SEQ_AT_0 in##P,P##ot,P##of,P##K),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_4_B(P,b,f,x,in,ot,of,...) ORDER_PP_CM_INVOKE(8SEQ_PARTITION_4,P##f,P##in,ORDER_PP_LEFT(,ot##P)ORDER_PP_WHEN_##b(,(,P##x)),ORDER_PP_LEFT(,of##P)ORDER_PP_UNLESS_##b(,(,P##x))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_partition_sort ORDER_PP_FN_CM(2,8SEQ_PARTITION_SORT)
#define ORDER_PP_8SEQ_PARTITION_SORT(P,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_PARTITION_4,ORDER_PP_EAT s##P,,,8SEQ_PARTITION_SORT_B,ORDER_PP_SEQ_AT(,0,P##s),P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_SORT_B(P,st,sf,m,f,...) (,P##f,8SEQ_PARTITION_SORT,P##st,8SEQ_PARTITION_SORT_C,P##sf,P##m,P##f,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_SORT_C(P,st,sf,m,f,...) (,P##f,8SEQ_PARTITION_SORT,P##sf,8SEQ_PARTITION_SORT_D,P##m,P##st,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_SORT_D(P,sl,m,sr,...) (,P##sl(,P##m)P##sr,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_select ORDER_PP_FN_CM(3,8REMAP_120,8SEQ_SELECT)
#define ORDER_PP_8SEQ_SELECT(P,y,xs,f,...) (,ORDER_PP_SEQ_IS_NIL(,P##xs)(,P##y,P##y,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##xs),8SEQ_SELECT_B,P##y,ORDER_PP_SEQ_AT_0 xs##P,P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_SELECT_B(P,b,y,x,...) ORDER_PP_CM_INVOKE(8SEQ_SELECT,ORDER_PP_IF_##b(,P##x,P##y)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_sort ORDER_PP_FN_CM(2,8SEQ_MERGE_SORT)

// Details

#define ORDER_PP_EAT_2(...) ORDER_PP_EAT

#define ORDER_PP_SEQ_AT(P,i,s) ORDER_PP_SEQ_AT_B(ORDER_PP_SEQ_AT_##i P##s)
#define ORDER_PP_SEQ_AT_B(...) ORDER_PP_TUPLE_AT_0(,__VA_ARGS__)
#define ORDER_PP_SEQ_AT_0(P,x) x##P,
#define ORDER_PP_SEQ_AT_1(...) ORDER_PP_SEQ_AT_0

#define ORDER_PP_SEQ_CLOSE(P,s) ORDER_PP_SEQ_CLOSE_A P##s(0,)
#define ORDER_PP_SEQ_CLOSE_A(P,x) )ORDER_PP_SEQ_CLOSE_B##P
#define ORDER_PP_SEQ_CLOSE_A0
#define ORDER_PP_SEQ_CLOSE_B(P,x) )ORDER_PP_SEQ_CLOSE_A##P
#define ORDER_PP_SEQ_CLOSE_B0

#define ORDER_PP_SEQ_IS_NIL(P,s) ORDER_PP_FX(,ORDER_PP_TUPLE_AT_0,(,ORDER_PP_SEQ_IS_NIL_TEST P##s(0,)))
#define ORDER_PP_SEQ_IS_NIL_TEST(P,...) ORDER_PP_SEQ_IS_NIL_COND##P,
#define ORDER_PP_SEQ_IS_NIL_COND(P,t,...) P##__VA_ARGS__
#define ORDER_PP_SEQ_IS_NIL_COND0(P,t,...) P##t

#define ORDER_PP_SEQ_IS_SIZE_LT_1(P,s) ORDER_PP_FX(,ORDER_PP_TUPLE_AT_0,(,ORDER_PP_SEQ_IS_SIZE_LT_1_TEST P##s(0,)(0,)))
#define ORDER_PP_SEQ_IS_SIZE_LT_1_TEST(...) ORDER_PP_SEQ_IS_NIL_TEST

#define ORDER_PP_SEQ_MAP_SEQ(P,s) ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_MAP_SEQ_A P##s)
#define ORDER_PP_SEQ_MAP_SEQ_A(P,x) (,(,P##x))ORDER_PP_SEQ_MAP_SEQ_B
#define ORDER_PP_SEQ_MAP_SEQ_A0
#define ORDER_PP_SEQ_MAP_SEQ_B(P,x) (,(,P##x))ORDER_PP_SEQ_MAP_SEQ_A
#define ORDER_PP_SEQ_MAP_SEQ_B0

#define ORDER_PP_SEQ_TERMINATE(...) ORDER_PP_SEQ_TERMINATE_B(__VA_ARGS__)
#define ORDER_PP_SEQ_TERMINATE_B(...) __VA_ARGS__##0

#define ORDER_PP_SEQ_SPLIT_AT(P,i,s) ORDER_PP_SEQ_SPLIT_AT_##i P##s
#define ORDER_PP_SEQ_SPLIT_AT_0 ,
#define ORDER_PP_SEQ_SPLIT_AT_1(P,x) (,P##x),

/*
(let ((n 100))
    (loop for i from 2 to n do
    (insert "#define ORDER_PP_SEQ_SPLIT_AT_" (number-to-string i) "(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_" (number-to-string (- i 1)) "\n")))
*/

#define ORDER_PP_SEQ_SPLIT_AT_2(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_1
#define ORDER_PP_SEQ_SPLIT_AT_3(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_2
#define ORDER_PP_SEQ_SPLIT_AT_4(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_3
#define ORDER_PP_SEQ_SPLIT_AT_5(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_4
#define ORDER_PP_SEQ_SPLIT_AT_6(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_5
#define ORDER_PP_SEQ_SPLIT_AT_7(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_6
#define ORDER_PP_SEQ_SPLIT_AT_8(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_7
#define ORDER_PP_SEQ_SPLIT_AT_9(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_8
#define ORDER_PP_SEQ_SPLIT_AT_10(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_9
#define ORDER_PP_SEQ_SPLIT_AT_11(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_10
#define ORDER_PP_SEQ_SPLIT_AT_12(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_11
#define ORDER_PP_SEQ_SPLIT_AT_13(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_12
#define ORDER_PP_SEQ_SPLIT_AT_14(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_13
#define ORDER_PP_SEQ_SPLIT_AT_15(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_14
#define ORDER_PP_SEQ_SPLIT_AT_16(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_15
#define ORDER_PP_SEQ_SPLIT_AT_17(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_16
#define ORDER_PP_SEQ_SPLIT_AT_18(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_17
#define ORDER_PP_SEQ_SPLIT_AT_19(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_18
#define ORDER_PP_SEQ_SPLIT_AT_20(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_19
#define ORDER_PP_SEQ_SPLIT_AT_21(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_20
#define ORDER_PP_SEQ_SPLIT_AT_22(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_21
#define ORDER_PP_SEQ_SPLIT_AT_23(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_22
#define ORDER_PP_SEQ_SPLIT_AT_24(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_23
#define ORDER_PP_SEQ_SPLIT_AT_25(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_24
#define ORDER_PP_SEQ_SPLIT_AT_26(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_25
#define ORDER_PP_SEQ_SPLIT_AT_27(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_26
#define ORDER_PP_SEQ_SPLIT_AT_28(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_27
#define ORDER_PP_SEQ_SPLIT_AT_29(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_28
#define ORDER_PP_SEQ_SPLIT_AT_30(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_29
#define ORDER_PP_SEQ_SPLIT_AT_31(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_30
#define ORDER_PP_SEQ_SPLIT_AT_32(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_31
#define ORDER_PP_SEQ_SPLIT_AT_33(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_32
#define ORDER_PP_SEQ_SPLIT_AT_34(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_33
#define ORDER_PP_SEQ_SPLIT_AT_35(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_34
#define ORDER_PP_SEQ_SPLIT_AT_36(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_35
#define ORDER_PP_SEQ_SPLIT_AT_37(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_36
#define ORDER_PP_SEQ_SPLIT_AT_38(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_37
#define ORDER_PP_SEQ_SPLIT_AT_39(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_38
#define ORDER_PP_SEQ_SPLIT_AT_40(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_39
#define ORDER_PP_SEQ_SPLIT_AT_41(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_40
#define ORDER_PP_SEQ_SPLIT_AT_42(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_41
#define ORDER_PP_SEQ_SPLIT_AT_43(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_42
#define ORDER_PP_SEQ_SPLIT_AT_44(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_43
#define ORDER_PP_SEQ_SPLIT_AT_45(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_44
#define ORDER_PP_SEQ_SPLIT_AT_46(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_45
#define ORDER_PP_SEQ_SPLIT_AT_47(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_46
#define ORDER_PP_SEQ_SPLIT_AT_48(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_47
#define ORDER_PP_SEQ_SPLIT_AT_49(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_48
#define ORDER_PP_SEQ_SPLIT_AT_50(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_49
#define ORDER_PP_SEQ_SPLIT_AT_51(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_50
#define ORDER_PP_SEQ_SPLIT_AT_52(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_51
#define ORDER_PP_SEQ_SPLIT_AT_53(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_52
#define ORDER_PP_SEQ_SPLIT_AT_54(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_53
#define ORDER_PP_SEQ_SPLIT_AT_55(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_54
#define ORDER_PP_SEQ_SPLIT_AT_56(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_55
#define ORDER_PP_SEQ_SPLIT_AT_57(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_56
#define ORDER_PP_SEQ_SPLIT_AT_58(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_57
#define ORDER_PP_SEQ_SPLIT_AT_59(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_58
#define ORDER_PP_SEQ_SPLIT_AT_60(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_59
#define ORDER_PP_SEQ_SPLIT_AT_61(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_60
#define ORDER_PP_SEQ_SPLIT_AT_62(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_61
#define ORDER_PP_SEQ_SPLIT_AT_63(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_62
#define ORDER_PP_SEQ_SPLIT_AT_64(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_63
#define ORDER_PP_SEQ_SPLIT_AT_65(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_64
#define ORDER_PP_SEQ_SPLIT_AT_66(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_65
#define ORDER_PP_SEQ_SPLIT_AT_67(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_66
#define ORDER_PP_SEQ_SPLIT_AT_68(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_67
#define ORDER_PP_SEQ_SPLIT_AT_69(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_68
#define ORDER_PP_SEQ_SPLIT_AT_70(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_69
#define ORDER_PP_SEQ_SPLIT_AT_71(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_70
#define ORDER_PP_SEQ_SPLIT_AT_72(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_71
#define ORDER_PP_SEQ_SPLIT_AT_73(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_72
#define ORDER_PP_SEQ_SPLIT_AT_74(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_73
#define ORDER_PP_SEQ_SPLIT_AT_75(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_74
#define ORDER_PP_SEQ_SPLIT_AT_76(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_75
#define ORDER_PP_SEQ_SPLIT_AT_77(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_76
#define ORDER_PP_SEQ_SPLIT_AT_78(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_77
#define ORDER_PP_SEQ_SPLIT_AT_79(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_78
#define ORDER_PP_SEQ_SPLIT_AT_80(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_79
#define ORDER_PP_SEQ_SPLIT_AT_81(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_80
#define ORDER_PP_SEQ_SPLIT_AT_82(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_81
#define ORDER_PP_SEQ_SPLIT_AT_83(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_82
#define ORDER_PP_SEQ_SPLIT_AT_84(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_83
#define ORDER_PP_SEQ_SPLIT_AT_85(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_84
#define ORDER_PP_SEQ_SPLIT_AT_86(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_85
#define ORDER_PP_SEQ_SPLIT_AT_87(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_86
#define ORDER_PP_SEQ_SPLIT_AT_88(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_87
#define ORDER_PP_SEQ_SPLIT_AT_89(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_88
#define ORDER_PP_SEQ_SPLIT_AT_90(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_89
#define ORDER_PP_SEQ_SPLIT_AT_91(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_90
#define ORDER_PP_SEQ_SPLIT_AT_92(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_91
#define ORDER_PP_SEQ_SPLIT_AT_93(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_92
#define ORDER_PP_SEQ_SPLIT_AT_94(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_93
#define ORDER_PP_SEQ_SPLIT_AT_95(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_94
#define ORDER_PP_SEQ_SPLIT_AT_96(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_95
#define ORDER_PP_SEQ_SPLIT_AT_97(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_96
#define ORDER_PP_SEQ_SPLIT_AT_98(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_97
#define ORDER_PP_SEQ_SPLIT_AT_99(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_98
#define ORDER_PP_SEQ_SPLIT_AT_100(P,x) (,P##x)ORDER_PP_SEQ_SPLIT_AT_99

#endif
