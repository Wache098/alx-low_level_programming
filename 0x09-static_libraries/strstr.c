#include "main.h"
#include <stdio.h>
/**
 * _strstr-locates a substring
 * @haystack:input string being searched
 * @needle:substring to search for
 *
 * Return:pointer to the beginning of the located substring
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
