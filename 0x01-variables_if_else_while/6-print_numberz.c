#include <stdio.h>
/**
 * main - main single digit
 * Description: putchar all single digit numbers of base 10 starting from 0
 * Return: at 0 (Success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
putchar(n);
putchar('\n');
return (0);
}

