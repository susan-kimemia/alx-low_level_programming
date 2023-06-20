#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: checked sign
 * Return: 0 or -1
 */
int print_sign(int n)
{
int v;
if (n > 0)
{
v = 1;
_putchar('+');
}
else if (n == 0)
{
v = 0;
_putchar('0');
}
else
{
v = -1;
_putchar('-');
}
return (v);
}

