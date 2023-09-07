#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -allocate memory using malloc and check success
 *
 * @b:number of bytes to allocate
 *
 * Return:pointer to allocated memory/
 *         Terminate with status 98 when it fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
