#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked listint_t list
 * @h: string
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
