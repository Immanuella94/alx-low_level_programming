#include "lists.h"

/**
 * add_node_end - adds new node at end of list_t list
 * @head: first node
 * @str: string
 *
 * Return: address of new node or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode; /* new node */
	list_t *temp; /* temporary placehoder */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /* check if malloc errored */
		return (NULL);

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->str = strdup(str);
	NewNode->len = strlen(str);
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
