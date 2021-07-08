#include "holberton.h"

/**
 * check1 - checks for the square root
 *
 * @a: intager
 * @b: integer
 *
 * Return: integer
 */

int check1(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	else
	{
		return (check1(a + 1, b));
	}
}

/**
 * _sqrt_recursion - returns sqare root of a number
 * and new line
 *
 * @n: argument
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (check1(1, n));
	}
	_putchar('\n');
}

