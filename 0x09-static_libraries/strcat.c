#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates (appends) two strings.
 * @dest: The destination string.
 * @src: The source string to append to the destination.
 *
 * Return: A pointer to the destination string `dest`.
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
