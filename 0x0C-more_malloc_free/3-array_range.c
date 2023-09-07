#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers from min to max
 * @min:minimum value integer
 * @max:maximum value integer
 *
 * Return:pointer to array/NUll when min is greater
 *        than max and when function fails
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}
	arr = (int *)malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
