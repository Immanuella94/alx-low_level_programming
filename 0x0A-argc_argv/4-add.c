#include "holberton.h"
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments
 * @argv: pointer to string of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum, n;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (n != 0)
		{
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
