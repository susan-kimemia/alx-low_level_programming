#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by new line
 * description: prints lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
return;
}

