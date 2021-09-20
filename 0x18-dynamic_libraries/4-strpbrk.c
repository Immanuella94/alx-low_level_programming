#include "main.h"

/**
 * _strpbk - locates the first occurence in @s of any of the bytes
 * in @accept
 *
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found
 */

char *_strpbk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (s[i] == accept[i])
			{
				return (&s[i]);
			}
			i++;
		}
	}
	return (0);
}
