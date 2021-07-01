#include "holberton.h"

/**
 * _strcat - function conactenates two strings
 *
 * @dest: pointer to the string to be concetenated upon
 * @src: source string to be appended at end of @dest
 *
 * Return: pointer to destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i, j;

	len1 = len2 = 0;
	j = len1 + len2;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; j < len1; i++, j++)
	{
		dest[j] = dest[i];
	}
	for (i = len1 + 1; j < len1 + len2; i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
