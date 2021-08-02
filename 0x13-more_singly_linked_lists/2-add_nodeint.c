#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to first node
 * @n: integer
 *
 * Return: address of new node or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode; /* Create new node */

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	if (head == NULL)
		NewNode->next = NULL; /* New node points to first */
	else
		NewNode->next = *head;
	*head = NewNode; /* head points to new node */
	return (NewNode);
}
