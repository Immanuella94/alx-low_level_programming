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
	int **p, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			while (i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
