#include "main.h"

/**
 * set_bit - setting bit at a given index to one
 * @n: ptr to the number to be changed
 * @index: index of bit set to one
 * Return: 1 (success), -1 failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}

