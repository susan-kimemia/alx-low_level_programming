#include <stdio.h>
/**
 * main - main printing lowercase alphabets
 * Description: small a to z
 * Return: 0 (Success)
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; ++alph)
putchar(alph);
putchar('\n');
return (0);
}

