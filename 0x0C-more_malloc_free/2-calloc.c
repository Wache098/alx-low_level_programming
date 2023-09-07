#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates mem for an array and initializes with 0
 * @nmemb:no of elements in array
 * @size:bytes of each element
 *
 * Return:NULL when it fails or nmemb is o/otherwise ptr to
 * allocated and initialized memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;


	if (nmemb == 0 || size == 0)
{
	return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
	return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
