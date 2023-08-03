#include "main.h"

/**
 * clear_bit - it Set the value of a given bit to zero
 * @n: ptr to the number to be changed
 * @index: bit index
 *
 * Return: 1 (success), else -1 failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}

