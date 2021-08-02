#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list_t list
 * @head: first node
 * @n: integer
 *
 * Return: address of new node or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode; /* new node */
	listint_t *temp; /* temporary placehoder */

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL) /*if no list, set new node to first*/
		*head = NewNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = NewNode;
	}
	return (NewNode);
}
