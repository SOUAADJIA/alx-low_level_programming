#include "lists.h"
/**
 * list_len - that returns the number of elements in a linked list_t list
 * @h: pointer to list_t list
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t nbr_node = 0;

	while (h != NULL)
	{
		nbr_node++;
		h = h->next;
	}
	return (nbr_node);
}
