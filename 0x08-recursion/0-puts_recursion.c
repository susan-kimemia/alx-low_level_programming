#include "main.h"

/**
 * _puts_recursion - printing the string _putchar recursively
 * @s: string being printed
 * Return: 0 (Success)
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else if (*s == '\0')
{
_putchar('\n');
}
}

