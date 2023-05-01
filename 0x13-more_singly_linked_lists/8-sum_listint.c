#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: a pointer to the head of the linked list
 *
 * Return: the sum or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
