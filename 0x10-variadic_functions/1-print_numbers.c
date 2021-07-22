#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return: void
 */
void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	int nums;
	va_list ap;

	va_start(ap, n);
	nums = 0;
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			nums = va_arg(ap, int);
			printf("%d ", nums);
			if ((i + 1) == n)
				printf("%d", nums);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			nums = va_arg(ap, int);
			printf("%d%s ", nums, separator);
			if ((i + 1) == n)
				printf("%d", nums);
		}
		printf("\n");
	}
}
