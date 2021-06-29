#include "holberton.h"

/**
 * puts2 - prints every other character and new line
 *
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
