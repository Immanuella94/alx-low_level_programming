#include "holberton.h"
#include <stdlib.h>
#include <string.h>

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

	if (str == NULL)
		return (NULL);

	s = strlen(str);

	str2 = malloc(sizeof(*str2) * (s + 1));

	while (*str)
	{
		*str2++ = *str++;
	}

	if (str2 == NULL)
		return (NULL);
	
	return (str2);
	free(str2);
}
