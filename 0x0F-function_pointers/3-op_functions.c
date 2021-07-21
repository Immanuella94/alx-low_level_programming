#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - gets sum of two integers
 * @a: integer
 * @b: integer
 *
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets difference of two integers
 * @a: integer
 * @b: integer
 *
 * Return: difference of @a nad @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gets the multiplication of two integers
 * @a: integer
 * @b: integer
 *
 * Return: multiplication of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two integers
 * @a: integer
 * @b: integer
 *
 * Return: division of @a and @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of division of two integers
 * @a: integer
 * @b: integer
 *
 * Return: remeinder of division of @a and @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
