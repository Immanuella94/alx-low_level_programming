/**
 * main - Entry point
 * description - prints Holberton
 * and a new line
 * Return: Always 0 (success)
 */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

#include <stdio.h>
#include "holberton.h"

int main(void)
{
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');

	putchar('\n');

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
