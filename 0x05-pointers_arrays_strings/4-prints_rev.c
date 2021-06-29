#include "holberton.h"

/**
 * print_rev - prints a string in reverse, and new line
 *
 * @s: string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
