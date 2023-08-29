#include "main.h"
#include <stdio.h>
/**
 * _strpbrk-searches string for any set of bytes
 *
 * @s:input string
 * @accept:characters to search for
 *
 * Return:A pointer to the byte in s that matches one of the bytes in accept,
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
		if (*s == *a)
		{
			return (s);
		}
		a++;
		}
		s++;
	}
	return (NULL);
}
