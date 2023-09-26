#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 *  @head: A pointer to the head of the list.
 *  @index: The index of the node, starting at 0.
 *
 *  Return:the nth node of the list, or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 unsigned int count = 0;

	 while (head != NULL)
	 {
		 if (count == index)
		 {
			 return (head);
		 }
		 head = head->next;
		 count++;
	 }
	 return (NULL);
}
