#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, x, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; j = length - 1; i < j; i++, j--)
	{
		x = s[i];
		s[i] = s[j];
		s[j] = x;
	}
}
