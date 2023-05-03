#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * freeilistint_safe - a function that frees a listint_t list.
 * @h: pointer to a pointer to the head of the list
 *
 * Return: the size of the list that was free’d
 * The function sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *node, *next;

	if (!h || !*h)
		return (0);
	node = *h;
	*h = NULL;
	while (node)
	{
		size++;
		next = node->next;
		free(node);
		if (next >= node)
			break;
		node = next;
	}
	return(size);
}
