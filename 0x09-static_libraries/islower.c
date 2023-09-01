#include "main.h"
#include <stdio.h>
/**
 * _islower -checks whether character is lowercase
 *
 * @c:input charcter
 *
 * Return:1 if the character is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
