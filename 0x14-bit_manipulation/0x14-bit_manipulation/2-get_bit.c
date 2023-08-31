#include "main.h"

/**
 * get_bit - print bit value at an index in a decimal namba
 * @n: Checked namba
 * @index: index bit
 *
 * Return: Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;

if (index > 63)
return (-1);

bit = (n >> index) & 1;
return (bit);
}

