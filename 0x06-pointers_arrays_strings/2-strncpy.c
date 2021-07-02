#include "holberton.h"

/**
 * _strncpy - function copies a string
 *
 * @dest: pointer to the string to be copied to
 * @src: source string to be copied to @dest
 * @n: number of bytes from @src
 *
 * Return: pointer to destination string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = sr[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
