#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - gets string length
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 * @n: number of bytes to be copied from @s2
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = l2 = 0;
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
		n = l2;
	s3 = malloc((l1 + n + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++, j++;
	}
	s3[i] = '\0';
	return (s3);
}
