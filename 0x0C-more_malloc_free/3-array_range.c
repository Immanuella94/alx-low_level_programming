#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 *
 * @min: integer
 * @max: integer
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = (int *)malloc(sizeof(int) * max);
	if (p == NULL)
		return (NULL);
	for (i = min; i < max; i++)
	{
		p[i] = i;
	}
	return (p);
}
