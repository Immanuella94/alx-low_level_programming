#include "holberton.h"

/**
 * factorial - returns the factorial of an integer and new line
 *
 * @n: integer argument
 *
 * Return: Always 0
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
		return (i);
	}
	_putchar('\n');
	return (0);
}
