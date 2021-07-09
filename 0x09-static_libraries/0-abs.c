#include "holberton.h"

/**
 * _abs - prints character
 * @n: integer
 *
 * Return: integer 
 */

int _abs(int n)
{
	int ret;

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (n *(-1));
	}
	return (ret);
}
