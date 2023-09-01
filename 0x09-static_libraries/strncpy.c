#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copies a specified number of characters from the source
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *original_dest = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (original_dest);
}
