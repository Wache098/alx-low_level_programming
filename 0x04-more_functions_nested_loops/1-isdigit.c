#include "main.h"
#include <stdio.h>

/**
 * _isdigit-checks for a digit 0 through 9
 * @c:digit being checked
 * Return:1 when c is a digit and 0 if its not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
