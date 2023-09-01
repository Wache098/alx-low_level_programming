#include "main.h"
#include <stdio.h>
/**
 * _strspn-get length of a prefix substring
 *
 * @s:input string
 *
 * @accept:characters to search for
 *
 * Return:The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned char charMap[256] = {0};
unsigned int count = 0;

while (*accept != '\0')
{
charMap[(unsigned char)(*accept)] = 1;
accept++;
}
while (charMap[(unsigned char)(*s)] != 0)
{
count++;
s++;
}
return (count);
}
