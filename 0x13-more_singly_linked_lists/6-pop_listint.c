#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the head pointer of the linked list
 *
 * Return: the head node’s data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}

