#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer to be used
 *
 * Return: index of first element for which @cmp dunction
 * doesn't return 0, -1 if no element matches, -1 if @size is
 * <= 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
				return (i + 1);
			if (!(cmp(array[i])))
				return (-1);
		}
	}
	return (0);
}
