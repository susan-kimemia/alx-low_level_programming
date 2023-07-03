#include "main.h"

/**
 * _strpbrk - find the 1st occurence of any accepted byte
 * @s: string being  searched
 * @accept: accepted bytes
 * Return: pointer to the 1st occurence of byte
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
char *srch;

i = 0;
while (s[i] != 0)
{
j = 0;
while (accept[j] != 0)
{
if (s[i] == accept[j])
{
srch = &s[i];
return (srch);
}
j++;
}
i++;
}
return (0);
}

