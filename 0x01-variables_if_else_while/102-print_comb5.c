#include <stdio.h>
/**
 * main - main display all possible different combinations
 * Description: 00 01 and 01 00 are considered similar
 * Return: at 0 (Success)
 */
int main(void)
{
int a, i, b, c;
for (a = 48; a <= 57; ++a)
{
for (i = 48; i <= 57; ++i)
{
for (b = 48; b <= 57; ++b)
{
for (c = 48; c <= 57; ++c)
{
if (((b + c) > (a + i) && b >= a) || a < b)
{
putchar(a);
putchar(i);
putchar(' ');
putchar(b);
putchar(c);
if (a + i + b + c == 227 && a == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}

