#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 *
 *s: pointer to input string
 *
 * Return: pointer to resulting string
 */

char *cap_string(char *s)
{
	int i;
	char a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0' && a[i] != '\0'; i++)
	{
		for (s[i] = a[i])
			;
			continue;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
