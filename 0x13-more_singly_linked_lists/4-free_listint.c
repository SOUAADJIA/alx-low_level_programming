#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node_to_free;

	while (head != NULL)
	{
		node_to_free = head;
		head = head->next;
		free(node_to_free);
	}
}
