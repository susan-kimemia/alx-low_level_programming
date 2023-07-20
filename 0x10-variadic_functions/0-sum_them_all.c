#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - summation
 * @n: NUM.arg
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int add = 0;
va_list l;
va_start(l, n);
for (x = 0; x < n; x++)
add += va_arg(l, int);
va_end(l);
return (add);
}

