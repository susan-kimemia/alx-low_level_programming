#include "main.h"

/**
 * prime_check - main checks for prime number
 * @n: number checked
 * @f:the  number that is ched to n
 * Return: if its a prime 1, otherwise 0
 */

	int prime_check(int n, int f)
	{
	if (n % f == 0 && f != (n / 2))
	return (0);
	else if (f >= (n / 2))
	return (1);
	else
	return (prime_check(n, f + 1));
	}

/**
 * is_prime_number - the function finds prime number
 * @n:Number that is being cheked
 * Return: 1 if prime, otherwise return 0
 */

	int is_prime_number(int n)
	{
	if (n > 1)
	return (prime_check(n, 2));
	else if (n < 0)
	return (0);
return (0);
}

