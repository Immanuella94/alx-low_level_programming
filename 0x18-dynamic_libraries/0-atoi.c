#include "main.h"

/**
 * _atoi - prints character
 *
 * @s: pointer to string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int res, i;

	res = 0;
	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (res);
}
