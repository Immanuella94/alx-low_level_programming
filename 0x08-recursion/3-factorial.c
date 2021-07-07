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

	i = 1;

	if (n != 1)
	{
		i *= n--;
		factorial(n);
	}
	return (i);
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	_putchar('\n');
	return (0);
}
