#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - counts length of string
 *
 * @s: string
 *
 * Return: counter
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
 * _strdup - returns pointer with newlly allocated memory
 * which has copy of @str
 *
 * @str: pointer to string
 *
 * Return: NULL if @str is NULL, pointer to duplictae string otherwise
 */

char *_strdup(char *str)
{
	char *str2;
	int s;

	s = str != NULL ? _strlen(str) : 0;

	if (str == NULL)
		return (NULL);

	str2 = (char *)malloc(s + 1);

	if (str2 == NULL)
		return (NULL);

	while (s)
	{
		str2[s - 1] = str[s - 1];
		s--;
	}
	return (str2);
}
