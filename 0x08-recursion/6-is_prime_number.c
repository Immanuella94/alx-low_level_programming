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
	int i;

	i = n / 2;

	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
		i = i - 1;
		is_prime_number(n);
	}
	_putchar('\n');
	return (0);
}
