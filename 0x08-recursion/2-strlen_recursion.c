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
	int len;

	len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	_putchar('\n');
	return (len);
}
