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
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	printf("-> %ld elements\n", number);
	return (0);
}
