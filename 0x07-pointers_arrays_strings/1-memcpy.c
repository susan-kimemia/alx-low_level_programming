#include "main.h"
/**
 * _memcpy - coying n bytes of memory area src to dest
 * @dest: destination memory
 * @src: memory being copied from
 * @n: amount copied from memmory area
 * Return: pointer to memmory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

