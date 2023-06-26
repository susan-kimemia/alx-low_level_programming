#include "main.h"
/**
 * rev_string - print reverses a string
 * @s: input
 * Return: string
 */
void rev_string(char *s)
{
int c = 0;
char rev = s[0];
int i;
while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rev = s[i];
s[i] = s[c];
s[c] = rev;
}
}

