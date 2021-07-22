#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 1; i <= n; i++)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (separator != NULL)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
