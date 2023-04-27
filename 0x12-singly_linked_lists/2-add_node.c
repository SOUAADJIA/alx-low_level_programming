#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - that adds a new node at the beginning of a list_t list
 * @head: pointer to the head
 * @str: string to be added to the node added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

