#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adding positive numbers
 * @argc: the number
 * @argv: the received
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int s;
	int c;
	int j;

	c = 1;
	s = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (c < argc)
	{
		for (j = 0; argv[c][j] != '\0'; j++)
		{
			if (!(isdigit(argv[c][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[c]);
		c++;
	}
	printf("%d\n", s);
	return (0);
}

