#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * Description: followed by a new line using _putchar
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
char a;
char b;
for (b = 0; b < 10; b++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
return;
}
