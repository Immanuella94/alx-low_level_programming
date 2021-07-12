#include "holberton.h"

/**
 * main - prints it's own name
 *
 * @argc: count of command line arguments
 * @argv: pointer to string of command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	if (argc == 1)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
