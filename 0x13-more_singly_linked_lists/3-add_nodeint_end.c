#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the listint_t list
 * @n: integer to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_at_end, *last_node;

	if (!head)
		return (NULL);

	new_at_end = malloc(sizeof(listint_t));
	if (!new_at_end)
		return (NULL);

	new_at_end->n = n;
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

