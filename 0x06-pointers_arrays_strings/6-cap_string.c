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

	for (i = 0; s[i] != '\0'; i++)
	{
		do {
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		} while ((s[i] - 1) = (32 || 9 || 10 || 44
					 || 59 || 46 || 33
					 || 63 || 34 || 40
					 || 41 || 123 || 125));
	}
	return (s);
}
