#include "lists.h"
#include <stddef.h>
/**
 * listint_len - that returns the number of elements in a linked listint_t list
 * @h: pointer to list_t list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}

