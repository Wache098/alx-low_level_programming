#include "main.h"
#include <stdio.h>
/**
 * _strchr-locates character in string
 *
 * @s:pointer to the string
 *
 * @c:the character being located
 *
 * Return: pointer to the first occurrence of character c in the string s,
 * NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
