#include "main.h"
#include <stdio.h>
/**
* reverse_array - Reverse the content of an array of integers
* @a: Array of integers
* @n: Number of elements in the array
*/
void reverse_array(int *a, int n)
{
int left = 0;
int right = n - 1;

while (left < right)
{
int temp = a[left];
a[left] = a[right];
a[right] = temp;
left++;
right--;
}
}
