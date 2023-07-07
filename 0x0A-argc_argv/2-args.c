#include <stdio.h>

/**
 * main - received arguements
 * @argc: the number
 * @argv: the argun
 * Return: zero
 */

	int main(int argc, char *argv[])
	{
	while (argc--)
	{
	printf("%s\n", *argv++);
	}
	return (0);
}
