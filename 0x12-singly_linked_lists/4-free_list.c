#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *node_to_free;

	while (head != NULL)
	{
		node_to_free = head;
		head = head->next;
		free(node_to_free->str);
		free(node_to_free);
	}
}
