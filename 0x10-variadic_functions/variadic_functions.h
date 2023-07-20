#ifndef _VAR_FUNCT
#define _VAR_FUNCT_
#include <stdarg.h>
typedef struct printer
{
char *symbol;
void (*print)(va_list arg);
}printer_t;
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

