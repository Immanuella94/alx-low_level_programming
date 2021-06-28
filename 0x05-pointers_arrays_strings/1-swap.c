#include "holberton.h"

/**
 * swap_int - function swaps the values of two integers
 *
 * @a: integer whose value is swapped
 * @b: integer whoes value is swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
