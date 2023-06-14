#include <stdio.h>


typedef double (*double_func)(void);

typedef void (*double_double_func)(double, double);

typedef int (*int_func)(void);

typedef int_func (*int_int_func)(int);

typedef int_func (*int_int_func)(int);

typedef void (*triple_func)(double_func, double_double_func, int_int_func);
