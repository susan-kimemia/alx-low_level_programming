#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - making change
 * @argc: Counting
 * @argv: data
 * Return: error 1, negative 0
 */
int main(int argc, char *argv[])
{
int cents, w = 0;
if (argc == 2)
{
cents = atoi(*(argv + 1));
while (cents > 0)
{
if (cents % 25 < cents)
{
cents -= 25;
w++;
}
else if (cents % 10 < cents)
{
cents -= 10;
w++;
}
	else if (cents % 5 < cents)
	{
	cents -= 5;
	w++;
	}
	else if (cents % 2 < cents)
	{
	cents -= 2;
	w++;
	}
	else if (cents % 1 < cents)
	{
	cents -= 1;
	w++;
	}
	}
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", w);
	return (0);
}

