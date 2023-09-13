#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each new elem on newline
 * @array:input array
 * @size:no of elem to print
 * @action:pointer to print in hex or regular
 *
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
