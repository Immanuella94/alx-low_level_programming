#include <stdio.h>
#include "holberton.h"

/**
 *_isupper - function that checks for uppercase character
 *@c: character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	while (c < 91)
	{
		if (c >= 65)
		{
			if (c <= 90)
			{
				return (1);
			}
		}
		c++;
	}

	return (0);

	_putchar('\n');
}
