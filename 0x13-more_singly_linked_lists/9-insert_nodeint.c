#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index- that inserts a new node at a given position.
 * @head: a pointer to the head pointer of the linked list
 * @idx: is the index of the list where the new node should be added.
 * @n: integer to be stored in the node to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node_to_add;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)/*added it the beginning as head*/
	{
		node_to_add = malloc(sizeof(listint_t));
		if (!node_to_add)
			return (NULL);
		node_to_add->n = n;
		node_to_add->next = *head;
		*head = node_to_add;
		return (node_to_add);
	}

	tmp = *head;
	/*Traverse the list to the position just before idx-1*/
	while (tmp != NULL && i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	/*check if we reach the end*/
	if (!tmp)
		return (NULL);
	node_to_add = malloc(sizeof(listint_t));
	node_to_add->n = n;
	node_to_add->next = tmp->next;
	tmp->next = node_to_add;

	return (node_to_add);
}
