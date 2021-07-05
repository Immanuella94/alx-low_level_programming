#include "holberton.h"

/**
 * strstr - finds the first occurence of @needle in @haystack,
 * terminating null bytes(\0) not included
 *
 * @needle: pointer to string to search inside @haystack
 * @haystack: pointer to string to search for @needle
 *
 * Return: pointer to firat occurence of @needle in @haystack
 * or NULL if the substring is not found
 */

char *strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle[j]);
			}
		}
	}
	return (0);
}
