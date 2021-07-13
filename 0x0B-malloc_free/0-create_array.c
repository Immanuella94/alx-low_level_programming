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
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * size);

	if (size != 0)
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
	free(ptr);
}
