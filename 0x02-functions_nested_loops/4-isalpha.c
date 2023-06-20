#include "main.h"
/**
 * _isalpha - is checking for alphabetical character
 * @c: checked characters
 * Description: checks lowercase char
 * Return: 1 if c is lowercase, otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

