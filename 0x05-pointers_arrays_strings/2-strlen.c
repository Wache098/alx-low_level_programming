#include "main.h"
#include <string.h>
/**
 * _strlen-length of a string
 * @s:pointer to string being checked
 * Return:the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while  (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
