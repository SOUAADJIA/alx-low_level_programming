#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - that prints all the elements of a listint_t list
 * @h: pointer to list_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}

