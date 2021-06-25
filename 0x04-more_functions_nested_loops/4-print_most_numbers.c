#include <stdio.h>
#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	while (i < 58)
	{
		if (i >= 48)
		{
			if (i <= 57)
			{
				if (i != 50 && i != 52)
				{
					_putchar(1);
				}
			}
		}

		i++;
	}

	_putchar('\n');
}
