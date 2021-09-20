#include "main.h"

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
	int i, j;

	i = -1;

	for (j = 0; dest[j] != '\0'; j++)
		;
	do {
		i++;
		dest[j] = src[i];
		j++;
	} while (src[i] != '\0');
	return (dest);
}
