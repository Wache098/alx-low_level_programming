#include "main.h"
#include <stdio.h>
/**
 * swap_int-swaps values of two integers
 * @a:the first integer
 * @b:the other integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
