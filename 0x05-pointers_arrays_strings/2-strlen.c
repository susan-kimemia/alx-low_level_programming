#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input char
 * Return: length
 */
int _strlen(char *s)
{
int x = 1;
int len = 0;
char w = s[0];
while (w != '\0')
{
len++;
w = s[x++];
}
return (len);
}

