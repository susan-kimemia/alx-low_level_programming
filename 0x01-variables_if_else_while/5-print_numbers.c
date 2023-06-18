#include <stdio.h>
/**
 * main - main prints single digit
 * Description: all single digit numbers of base 10 starting from 0
 * Return: at 0 (Success)
 */
int main(void)
{
int nmb;
for (nmb = 0; nmb <= 9; ++nmb)
printf("%d", nmb);
printf("\n");
return (0);
}

