#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;


	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	s3 = malloc(strlen(s1) + strlen(s2) + 1);

	while (*s1 != '\0')
	{
		*s3 = *s1;
		s1++;
		s3++;
	}
	while (*s2 != '\0')
	{
		*s3 = *s2;
		s2++;
		s3++;
	}
	*s3 = '\0';

	return (s3);
}
