#include "main.h"

/**
 * factorial - the factorial value of n
 * @n: is the number
 *
 * Return: factorial value
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	else if (n == 0)
	return (1);

	else if (n > 1)
	return (n * factorial(n - 1));

	else
	return (n);
}

