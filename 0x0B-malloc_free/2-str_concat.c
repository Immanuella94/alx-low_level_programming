#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - gets string length
 *
 * @s: string
 *
 * Return: count
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	return (counter);
}

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
	int l1, l2;
	char *s3;

	l1 = s1 == NULL ? 0 : _strlen(s1);
	l2 = s2 == NULL ? 0 : _strlen(s2);

	s3 = (char *)malloc(l1 + l2 + 1);

	if (s3 == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (*s1)
		{
			*s3 = *s1;
			s1++;
			s3++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			*s3 = *s2;
			s2++;
			s3++;
		}
	}

	s3 -= l1 + l2;

	return (s3);
}
