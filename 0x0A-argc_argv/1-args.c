#include <stdio.h>

/**
 * main - printing num of arguements
 * @argc: update
 * @argv: array
 * Return: zero
 */

	int main(int argc, char *argv[] __attribute__((unused)))
	{
	printf("%d\n", argc - 1);
	return (0);
}

