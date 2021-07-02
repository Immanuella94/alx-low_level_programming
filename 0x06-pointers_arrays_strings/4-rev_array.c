#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to array
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int length;
	int i;
	int tmp;

	length = n - 1;
	i = 0;
	while (i < ((n + 1) / 2))
	{
		tmp = *(a + length);
		*(a + length) = *(a + i);
		*(a + i) = tmp;
		i++;
		length--;
	}
}
