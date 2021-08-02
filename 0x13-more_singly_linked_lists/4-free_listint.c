#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: start of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
