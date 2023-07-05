#include "main.h"

/**
 * wildcmp - main  compaes 2 strigs; wildcard char
 * @s1: 1st string being compared
 * @s2: 2nd string compared to s1
 * Return: identical 1, 0 otherwise
 */

	int wildcmp(char *s1, char *s2)
	{
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
	if (*(s2 + 1) == '*')
	return (wildcmp(s1, s2 + 1));
	if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
	return (1);
	}
return (0);
}

