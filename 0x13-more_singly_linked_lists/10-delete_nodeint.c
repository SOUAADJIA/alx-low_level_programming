#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index- that deletes the node at index of a listint_t
 * @head: a pointer to the head pointer of the linked list
 * @index: is the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *previous_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	previous_node = NULL;
	/*Check for each node if i is equal to the given index , then delete*/
	while (tmp != NULL)
	{
		/*If previous is NULL, then the node to be deleted is the head node.*/
		/*So, it updates the head pointer to point to the next node*/
		if (i == index)
		{
			if (previous_node == NULL)
				*head = tmp->next;
			/*it updates the next pointer of the previous node*/
			/*to point to the next node of the node to be deleted.*/
			else
				previous_node->next = tmp->next;
			free(tmp);
			return (1);
		}
		previous_node = tmp;
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
