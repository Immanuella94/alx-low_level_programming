#include "holberton.h"

/**
 * is_prime_number - checks if @n is a prime number
 * and new line
 *
 * @n: argument
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0
			|| n % 7 == 0 || n < 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
	return (0);
}
