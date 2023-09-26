#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t
 * @head:pointer to head of the list
 *
 * Return: sum of all the data (n) of the linked list, or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
