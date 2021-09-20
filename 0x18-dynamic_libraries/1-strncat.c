#include "main.h"

/**
 * _strncat - function conactenates two strings
 *
 * @dest: pointer to the string to be concetenated upon
 * @src: source string to be appended at end of @dest
 * @n: number of bytes from @src
 *
 * Return: pointer to destination string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; n > 0 && src[a] != '\0'; i++, a++, n++)
	{
		dest[i] = src[a];
	}
	return (dest);
}
