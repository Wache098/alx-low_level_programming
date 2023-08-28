#include "main.h"
#include <stdio.h>
/**
 * _strncpy-copies a string a given number of times.
 *
 * @dest:destination string
 *
 * @src:source string
 * @n:maximum no of bytes to be copied
 * Return:pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
