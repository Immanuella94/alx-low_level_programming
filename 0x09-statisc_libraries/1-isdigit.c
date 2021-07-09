#include <stdio.h>
#include "holberton.h"

/**
 *_isdigit - function that checks for digit 0 t0 9
 *@c: character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	while (c < 58)
	{
		if (c >= 48)
		{
			if (c <= 57)
			{
				return (1);
			}
		}
		c++;
	}

	return (0);

	_putchar('\n');
}
