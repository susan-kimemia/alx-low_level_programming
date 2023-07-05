#include "main.h"

/**
 * _pow_recursion - looks for value of x to power y
 * @x: number being multiplied
 * @y: the power multiplied to x
 * Return: the value of x to power y
 */

	int _pow_recursion(int x, int y)
	{
	if (y < 0)
	return (-1);

	else if (y == 0)
	return (1);

	else if (y > 0)
	return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}

