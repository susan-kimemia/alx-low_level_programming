#include "main.h"

/**
 * _strlen_recursion - main finds length of string
 * @s: string
 *
 * Return: the length
 */

int _strlen_recursion(char *s)
{
int l;
l = 0;
if (*s != 0)
{
l++;
return (l + _strlen_recursion(s + 1));
}
return (l);
}

/**
 * pal_check - main checks palindrome
 * @s: string
 * @l: the length of the s
 *
 * Return: palindrome 1, otherwise 0.
 */

	int pal_check(char *s, int l)
	{
	if (l <= 1)
	return (1);
	if (*s != s[l - 1])
	return (0);
	else
	return (pal_check((s + 1), (l - 2)));
	}

/**
 * is_palindrome - main palindrome
 * @s: the string being checked
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
int l;
l = _strlen_recursion(s);
if (l <= 1)
return (1);
return (pal_check(s, l));
}

