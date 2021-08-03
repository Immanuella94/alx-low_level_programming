#include "lists.h"

/**
 * free_listint2 - freea a listint_t list
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
		(*head)->next = NULL;
	free(*head);
}
