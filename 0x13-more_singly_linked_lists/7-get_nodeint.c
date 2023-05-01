#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - that returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the linked list
 * @index: the index of the nth node starting from 0
 * Return: that returns the nth node of a listint_t linked list
 * if the node does not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;


	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
