#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head node
 * @index: index of the node starting at 0
 *
 * Return: nth node of a listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *NewNode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	NewNode = head;
	while (NewNode != NULL)
	{
		if (i == index)
			return (NewNode);
		NewNode = NewNode->next;
		i++;
	}
	return (NULL);
}
