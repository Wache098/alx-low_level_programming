#include "main.h"
#include <stdio.h>
/**
 * _isalpha -checks whether character is an alphabet
 *
 * @c:input character
 *
 * Return:1 when character is an alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
