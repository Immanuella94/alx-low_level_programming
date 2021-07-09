#include "holberton.h"

/**
 * _isalpha - checks if character is
 * lowercase or uppercase alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 if alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	for (c = 65; c <= 90; c++)
	{
		return (1);
	}
	for (c = 97; c <= 122; c++)
	{
		return (1);
	}
	for (c = 0; c <= 64; c++)
	{
		return (0);
	}
	for (c = 91; c <= 96; c++)
	{
		return (0);
	}
	for (c = 123; c <= 127; c++)
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
