#include "main.h"

/**
 * print_binary - Prints binary equivalent of a dec number
 * @n: Namba to print in binary
 */
void print_binary(unsigned long int n)
{
int i;
int checks = 0;
unsigned long int immed;

for (i = 63; i >= 0; i--)
{
immed = n >> i;
if (immed & 1)
{
_putchar('1');
checks++;
}
else if (checks)
{
_putchar('0');
}
}

if (!checks)
{
_putchar('0');
}
}

