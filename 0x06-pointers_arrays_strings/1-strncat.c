#include "main.h"
#include <stdio.h>
/**
 * _strncat- appends the string pointed to by src to the end
 * of the string pointed to by dest up to n characters long.
 *
 * @dest:pointer to the destination array
 * @src:string to be appended
 *
 * @n:max no of characters to be appended
 *
 * Return:a pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
