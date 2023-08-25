#include "main.h"
#include <stdio.h>
/**
 * _strcat-concatenates two strings
 *
 * @dest:one of the strings
 *
 * @src:the other string
 *
 * appends the src string to the dest string,
 *
 * overwrites the appends the src string to the dest string,
 *
 * then  a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
