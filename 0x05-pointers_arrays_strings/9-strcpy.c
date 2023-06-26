#include "main.h"

/**
 * char *_strcpy - copys the string pointed to by src
 * @dest: string destination
 * @src: strin gsource
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
char *returnn = dest;
while (*src)
{
*dest++ = *src++;
*dest = 0;
}
return (returnn);
}

