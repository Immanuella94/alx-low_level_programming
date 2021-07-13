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
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(*p) * size);

	if (p)
	{
		while (i < size)
		{
			p[i] = c;
			i++;
		}
		return (p);
	}
	else
		return (NULL);
	free(p);
}
