#include "holberton.h"

/**
 * memset - fills memeory with constant byte
 *
 * @s: pointer to string
 * @b: constatnt byte
 * @n: bytes of the memory area pointed to by @s
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (s[i] = 0; s[i] < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
