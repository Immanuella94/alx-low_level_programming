#include "main.h"
#include <string.h>

/**
 * _strlen - function returns the length of a string
 *
 * @s: string to be checked
 *
 * Return: Always 0
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
