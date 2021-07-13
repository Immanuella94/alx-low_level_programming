#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to 2d array of intagers
 *
 * @width: integer
 * @height: integer
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **A;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	if (width != 0 && height != 0)
	{
		A = malloc(width * height * sizeof(int));
		return (A);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
