#include "lists.h"

/**
 * list_len - couns number of elements in list_t list
 * @h: string
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
