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
	int l1, l2, i;
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
	if (n >= l2}
			{
		*s3 = *s2;
		s2++;
		s3++
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			s3[i] = s2[i];
			s3++;
		}
	}
	}
	}
	else
	{
	return (NULL);
	}
	s3 -= l1 + l2;
	return (s3);
}
