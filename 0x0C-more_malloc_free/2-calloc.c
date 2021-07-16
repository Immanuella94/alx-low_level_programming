#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of array
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(size) * nmemb);
	if (p == NULL)
		return (NULL);
	if (p != NULL)
	{
		for (i = 0; i < (int) nmemb; i++)
		{
			p[i] = 0;
		}
		return (p);
	}
}
