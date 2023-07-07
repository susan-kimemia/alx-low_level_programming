#include <stdio.h>
#include <stdlib.h>
/**
 * main - miltiplies 2 numbers
 * @argc: argu nummbers
 * @argv: the one received
 * Return: one
 */
	int main(int argc, char *argv[])
	{
	if (argc == 3)
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}

