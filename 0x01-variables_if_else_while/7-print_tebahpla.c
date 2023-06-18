#include <stdio.h>
/**
 * main - main printing the alphabet in reverse
 * Description: Alphabets are reversed from z to a
 * Return: at 0 (Success)
 */
int main(void)
{
char alph;
for (alph = 'z'; alph >= 'a'; alph--)
putchar(alph);
putchar('\n');
return (0);
}

