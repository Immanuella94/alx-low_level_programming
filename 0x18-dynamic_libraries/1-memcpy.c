#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to string to be copied to from @src
 * @src: pointer to copie from to @dest
 * @n: number of bytes to copy from @src to @dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
