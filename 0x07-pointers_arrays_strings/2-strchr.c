#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to search for charcter @c
 * @c: find occurence of character
 *
 * Return: first occurence of character c in string s,
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		i++;
	}
	return (0);
}
