#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to first node
 * @str: string
 *
 * Return: address of new node or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode; /* Create new node */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /* check if malloc errored */
		return (NULL);

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->str = strdup(str);
	NewNode->len = strlen(str);

	if (head == NULL)
		NewNode->next = NULL; /* New node points to first */
	else
		NewNode->next = *head;
	*head = NewNode; /* head points to new node */
	return (NewNode);
}
