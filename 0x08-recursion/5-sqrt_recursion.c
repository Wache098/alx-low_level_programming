#include "main.h"
#include <stdio.h>

int find_sqrt(int n, int low, int high);
/**
 * _sqrt_recursion-calculate squarees of numbers
 *
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n,
 * -1 if n doesn't have a natural square root.
 */
int _sqrt_recursion(int n)

{
return (find_sqrt(n, 1, n));
}
/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to calculate the square root.
 * @low: The current lower bound of the search range.
 * @high: The current upper bound of the search range.
 *
 * Return: The square root of n, or -1 if n doesn't have a natural square root.
 */
int find_sqrt(int n, int low, int high)
{
int mid = (low + high) / 2;

if (mid * mid == n)
{
return (mid);
}
if (low >= high)
{
return (-1);
}
if (mid * mid > n)
{
return (find_sqrt(n, low, mid - 1));
}
else
{
return (find_sqrt(n, mid + 1, high));
}
}
