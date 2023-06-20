#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: gets the last digit
 * Description: printing the last digit using _putchar
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
int l;
if (n < 0)
n = -n;
l = n % 10;
if (l < 0)
l = -l;
_putchar(l + '0');
return (l);
}

