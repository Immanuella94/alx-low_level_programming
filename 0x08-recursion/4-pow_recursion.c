#include "holberton.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * and new line
 *
 * @x: integer
 * @y: power
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	_putchar('\n');
	return (0);
}
