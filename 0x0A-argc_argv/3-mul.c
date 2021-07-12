#include "holberton.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: pointer to string
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int i, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	if (argc > 3)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
	}
	printf("%d\n", mul);
	return (0);
}
