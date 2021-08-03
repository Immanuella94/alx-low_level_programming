#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: head node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	temp = *head;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
