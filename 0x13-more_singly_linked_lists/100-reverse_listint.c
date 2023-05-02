#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: a pointer to the pointer of the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_before = NULL, *node_after = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head != NULL)
	{
		node_after = (*head)->next;
		/*we switch , head next node becomes head node & vise versa*/
		(*head)->next = node_before;
		node_before = *head;
		*head = node_after;
	}
	/*At the end the function sets the head pointer to point to the last */
	/*node of the original list (which is now the first node of*/
	/*the reversed list), and returns the head pointer.*/
	*head = node_before;
	return (*head);
}

