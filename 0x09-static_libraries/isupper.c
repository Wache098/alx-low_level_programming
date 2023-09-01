#include "main.h"
#include <stdio.h>
/**
 * _isupper -checks whether a character is uppercase
 *
 * @c:input character
 *
 * Return:1 when character is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
