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
	void *p;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	filler = p;
	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (p);
}
