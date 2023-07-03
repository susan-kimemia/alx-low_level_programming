#include "main.h"

/**
 * _strspn - Find length of string that consists only of chosen bytes
 * @s: String to search
 * @accept: The acceptable bytes string can contain
 * Return: lgth
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int w, len, y, x;
w = len = 0;
while (s[w] != 0)
{
y = 0;
x = 0;
while (accept[y] != 0)
{
if (s[w] != accept[y])
{
y++;
}
else if (s[w] == accept[y])
{
x++;
len++;
y++;
}
}
if (x == 0)
return (len);
w++;
}
return (len);
}

