#include <stdio.h>
/**
 * main - main prints all possible different combinations
 * Description: prints all possible combinations of two digits numbers
 * Return: at 0 (Success)
 */
int main(void)
{
int t;
int o;
for (t = 0; t <= 9; t++)
{
for (o = t + 1; o <= 9; o++)
{
putchar(t + '0');
putchar(o + '0');
if (t < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

