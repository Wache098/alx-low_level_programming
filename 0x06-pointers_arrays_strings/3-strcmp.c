#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare two strings
 * @s1:first string
 * @s2:second string
 *
 * Return: 0 when strings are equal
 * <0 if s1 is less than s2
 * >0 if si is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
