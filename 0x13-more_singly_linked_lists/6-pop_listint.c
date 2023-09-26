#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return:data (n) of the deleted node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if  (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
