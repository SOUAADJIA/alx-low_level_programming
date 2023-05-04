#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: a pointer to the head of the list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast && fast->next)/*loop until the end of the list*/
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)/*slow and fast meet so loop found*/
		{
			/*move slow to the head again since loop exist*/
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
