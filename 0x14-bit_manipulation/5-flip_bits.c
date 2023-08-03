#include "main.h"

/**
 * flip_bits - counts namba of bits changed
 * @n: First namba
 * @m: Second namba
 *
 * Return: Namba changed bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a;
int checks = 0;
unsigned long int immed;
unsigned long int unsensor = n ^ m;

for (a = 63; a >= 0; a--)
{
immed = unsensor >> a;
if (immed & 1)
checks++;
}

return (checks);
}

