#include "main.h"

/**
 * _print_rev_recursion - printing the string in recursively in reverse
 * @s: the string being printed
 */

void _print_rev_recursion(char *s)
{
if (*s != 0)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

