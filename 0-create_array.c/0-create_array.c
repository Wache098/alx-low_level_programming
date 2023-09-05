#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array-creates an array of characters and initializes
 *
 * @size:size of the array
 *
 * @c:character to initialize the array
 *
 * Return:NULL when size is 0/otherwise a pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
