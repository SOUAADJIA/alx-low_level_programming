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
	size_t nbr = 0, i;
	const listint_t *slow = head, *fast;

	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		nbr++;
		slow = slow->next;
		/*check if loop exist*/
		/*iterate from the beginning of the list to the current node*/
		for (i = 0, fast = head; i < nbr; i++, fast = fast->next)
		{
			if (slow == fast)
			{
				/*print the address and value of the node where the loop starts*/
				printf("-> [%p] %d\n", (void *)fast, fast->n);
				return (nbr);
			}
		}
		if (!head)
			exit(98);
	}
	return (nbr);
}
