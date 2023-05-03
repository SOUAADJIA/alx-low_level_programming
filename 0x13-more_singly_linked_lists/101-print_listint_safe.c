#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - that prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nbr = 0;
	const listint_t *slow, *fast;

	if (!head)
		exit(98);
	slow = head;
	fast = head->next;
	
	printf("[%p] %d\n", (void *)slow, slow->n);
	nbr++;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		printf("[%p] %d\n", (void *)slow, slow->n);
		nbr++;

		/* detect a loop*/

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
	}

	return (nbr);
}
