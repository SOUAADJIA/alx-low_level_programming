#include "lists.h"
#include <stdio.h>
/**
 * print_list - that prints all the elements of a list_t list
 * @h: pointer to list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nbr_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nbr_node++;
		h = h->next;
	}
	return (nbr_node);
}
