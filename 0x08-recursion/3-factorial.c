#include "main.h"
#include <stdio.h>
/**
 * factorial- calculates factorial of a given number
 *
 * @n:input number
 *
 * Return:-1 when n is lower than 0,0 when n equals 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);

	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else 
	{
		return (n * factorial(n-1));
	}
}
