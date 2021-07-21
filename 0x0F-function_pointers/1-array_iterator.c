#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array given
 * @size: size of array
 * @action: pointer to function to be used
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
