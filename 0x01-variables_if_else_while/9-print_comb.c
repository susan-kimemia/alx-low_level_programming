#include <stdio.h>
/**
 * main - main printing all combombinations
 * Description: prints all possible combinations of single-digit numbers
 * Return: at 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}

