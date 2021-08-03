#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * in a listint_t list
 * @head: head node
 *
 * Return: sum of all data or zero if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *Node;
	int sum = 0;

	if (head == NULL)
		return (sum);
	Node = head;
	while (Node != NULL)
	{
		sum += Node->n;
		Node = Node->next;
	}
	return (sum);
}
