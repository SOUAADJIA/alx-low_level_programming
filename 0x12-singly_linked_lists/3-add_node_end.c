#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - that adds a new node at the end of a list_t list
 * @head: pointer to the head
 * @str: string to be added to the node added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_at_end, *last_node;

	if (head == NULL)
		return (NULL);

	new_at_end = malloc(sizeof(list_t));
	if (new_at_end == NULL)
		return (NULL);

	new_at_end->str = strdup(str);
	if (new_at_end->str == NULL)
	{
		free(new_at_end);
		return (NULL);
	}
	new_at_end->len = strlen(str);
	new_at_end->next = NULL;

	/* if the list is empty*/
	if (*head == NULL)
	{
		*head = new_at_end;
		return (new_at_end);
	}
	/*find the last node that will point to the new_at_end */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_at_end;

	return (new_at_end);
}
