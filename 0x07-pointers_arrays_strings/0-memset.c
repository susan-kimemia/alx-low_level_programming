#include "main.h"
/**
 * _memset - filling the n bytes of the memory
 * @s: area pointed to
 * @b: byte to fill with
 * @n: amount
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

