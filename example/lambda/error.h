#ifndef ORDER_EXAMPLE_LAMBDA_ERROR_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_ERROR_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `error(fmt, ...)' prints the formatted string, along with the prefix
// "ERROR: " and the suffix "\n", to `stderr' and then calls
// `exit(EXIT_FAILURE)' to terminate the program.
extern void error(const char* fmt, ...);

// `ERROR_exit(fmt, ...)' calls `error(fmt, ...)'. This macro is written
// in such a way that a compiler can decuce that control will never return
// from the code generated by the macro.
#define ERROR_exit(...)                         \
do {                                            \
  error(__VA_ARGS__);                           \
  while (1) {}                                  \
} while (0)

#endif
