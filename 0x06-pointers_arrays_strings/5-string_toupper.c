#include <stdio.h>

/**
 * string_toupper - Convert all lowercase letters of a string to uppercase
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*str)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
str++;
}
return (ptr);
}
