#include "main.h"
#include <stdio.h>

/**
 * print_array - number of items in an array of integers
 * @a: print array
 * @n: number of items from the array
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int m;
for (m = 0; m < n; m++)
{
printf("%d", *(a + m));
if (m != n - 1)
printf(", ");
}
putchar('\n');
}

