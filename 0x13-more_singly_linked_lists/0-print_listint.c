#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: string
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number);
}
