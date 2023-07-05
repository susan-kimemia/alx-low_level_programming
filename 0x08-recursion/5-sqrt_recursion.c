#include "main.h"

/**
 * sqrt_check - find sqrt
 * @n: number which its sqrt is being checked
 * @c: number ched for the sqrt of n
 * Return: the value of the sqrt
 */

	int sqrt_check(int n, int c)
	{
	if (c * c == n)
	{
	return (c);
	}

	else if (c >= n / 2)
	return (-1);
	return (sqrt_check(n, c + 1));
	}

/**
 * _sqrt_recursion - look for the sqrt of the given number
 * @n: the number used to find root
 * Return: the sqrt or -1 if theres no natural sqrt
 */

	int _sqrt_recursion(int n)
	{
	if (n == 1)
	return (1);
	else if (n < 0)
	return (-1);
	else if (n == 0)
	return (0);
return (sqrt_check(n, 1));
}

