#include "holberton.h"

/**
 * _strlen - function returns the length of a string
 *
 * @s: string to be checked
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
