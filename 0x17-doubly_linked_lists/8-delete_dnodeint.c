#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: (1) if succeeded, (-1) if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
current->prev->next = current->next;
free(current);
return (1);
}
