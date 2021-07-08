#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * checker - checks for palindrome
 *
 * @s: string
 * @l: string length
 * @i: index
 *
 * Return: return 1 if palindrome
 */

int checker(char *s, int l, int i)
{
	if (i < ((l + 1) / 2))
	{
		return ((s[i] == s[(l - 1) - i] ? 1 : 0) * checker(s, l, i + 1));
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to string
 *
 * Return: return 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (_srtlen_recursion(s) == 0)
		return (1);
	return (checker(s, _strlen_recursion(s), 0));

	_putchar('\n');
}
