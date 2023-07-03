#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagnols of the matrix
 * @a: matrix
 * @size: arrays length
 */

void print_diagsums(int *a, int size)
{
int m;
int sum1, sum2;
int length;

m = 0;
sum1 = sum2 = 0;
length = size * size;
while (m < length)
{
if (m % (size - 1) == 0 && m < length - 1 && m > 0)
sum2 += *(a + m);
if (m % (size + 1) == 0 || m == 0)
sum1 += *(a + m);
m++;
}
printf("%d, %d\n", sum1, sum2);
}

