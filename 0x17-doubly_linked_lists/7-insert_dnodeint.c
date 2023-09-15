#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: The head of the doubly linked list
 * @idx: The index at which to insert the new node, starting at 0
 * @n: The value of the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int count;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		if (*h)
			current->prev = new_node;
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = current;
		return (new_node);
	}

	for (count = 1; count < idx; count++)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->prev = current;
	new_node->next = current->next;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}

