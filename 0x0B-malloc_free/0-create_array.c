#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with @c
 *
 * @size: size of array
 * @c: character
 *
 * Return: pointer to array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(size);

	if (p == NULL)
		return (NULL);

	while (size)
	{
		p[size - 1] = c;
		size--;
	}
	return (p);
}
