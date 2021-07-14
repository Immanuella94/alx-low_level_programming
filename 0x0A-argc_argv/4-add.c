#include "holberton.h"
#include <stdlib.h>

/*
 * is_number - checks for characters
 *
 * @s: string
 *
 * Return: 1 if number 0 otherwise
 */
int is_number(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

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
	int sum;
	int is_num;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		i = 1;
		for (i = 1; i < argc; i++)
		{
			is_num = is_number(argv[i]);
			if (is_num == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
