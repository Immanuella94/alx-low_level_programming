#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet and new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
