#include "holberton.h"

/**
 * leet - encodes 1337
 *
 * @s: string to be encoded
 *
 * 'a' and 'A' replaced by 4
 * 'e' and 'E' replaced by 3
 * 'o' and 'O' replaced by 0
 * 't' and 'T' replaced by 7
 * 'l' and 'L' rplaced by 1
 *
 * Return: Always 0
 */

char *leet(char *s)
{
	int i;
	char a[] = {a, e, o, t, l};
	char A[] = {A, E, O, T, L};
	char b[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0' && a[i] != '\0' && A[i] != '\0'
			&& b[i] != '\0'; i++)
	{
		if (s[i] = a[i] && s[i] = A[i])
		{
			s[i] = b[i];
		}
	}
	return (0);
}
