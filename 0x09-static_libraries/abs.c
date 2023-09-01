#include "main.h"
#include <stdio.h>
/**
 * _abs - checks for absolute value of an integer
 *
 * @n:input integer
 *
 * Return:the absolute value of integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
