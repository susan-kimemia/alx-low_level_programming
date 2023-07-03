#include "main.h"

/**
 * _strstr - finds the first occuring of a string in another string
 * @haystack: string being searched thruogh
 * @needle: searched string
 * Return: pointer to the beginning of a string
 */

char *_strstr(char *haystack, char *needle)
{
char *bg;
char *f;
while (*haystack != '\0')
{
bg = haystack;
f = needle;
while (*f == *haystack && *haystack != 0
&& *f != 0)
{
haystack++;
f++;
}
if (*f == 0)
return (bg);
haystack = bg + 1;
}
return (0);
}

