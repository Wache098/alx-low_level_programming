#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to the input string
 */

void rev_string(char *s)
{
int length = 0;
int start, end;

while (s[length] != '\0')
{
length++;
}

start = 0;
end = length - 1;

while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
