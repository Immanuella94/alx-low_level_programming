#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees up 2d array
 *
 * @grid: pointer to grid of 2d array integers
 * @height: integer
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	while (height)
	{
		free(grid[--height]);
		free(grid);
	}
}
