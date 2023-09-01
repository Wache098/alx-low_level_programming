#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates (appends) a specified number
 * of characters from one string to another.
 * @dest: The destination string.
 * @src: The source string to append to the destination.
 * @n: The maximum number of characters to append from src.
 *
 * Return: A pointer to the destination string `dest`.
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
