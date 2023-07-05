#include "main.h"

/**
 * _strlen_recursion - fins lngth of string
 * @s: the string under investigation
 * Return: the lngth
 */

int _strlen_recursion(char *s)
{
int lngth;
lngth = 0;
if (*s != 0)
{
lngth++;
return (lngth + _strlen_recursion(s + 1));
}
return (lngth);
}

