#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: a pointer to the head pointer of the linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node_to_free;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		node_to_free = *head;
		*head = (*head)->next;
		free(node_to_free);
	}
}
