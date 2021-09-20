#include "main.h"

/**
 * _islower - checks for lowercase character and new line
 *
 * @c: character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96)
	{
		if (c < 123)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
