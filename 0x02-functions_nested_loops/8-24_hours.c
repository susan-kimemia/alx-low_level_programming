#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: printing every minute from 00:00 to 23:59
 * Return: 0 (Success) 
 */
void jack_bauer(void)
{
int m, n;
for (m = 0; m < 24; m++)
{
for (n = 0; n < 60; n++)
{
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar(':');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar('\n');
}
}
}

