#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to string to be compared to @accept
 * @accept: pinter to prefix substring
 *
 * Return: number of bytes in initial segment of @s
 * which consists only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			while (s[i] == accept[j])
			{
				i++;
			}
			return (i);
		}
	}
	return (0);
}
