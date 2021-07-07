#include "holberton.h"

/**
 * _strlen_recursion - returns the string length and prints new line
 *
 * @s: pointer to string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		c++;
		s++;
		_strlen_recursion(s);
	}
	_putchar('\n');
	return (c);
}
