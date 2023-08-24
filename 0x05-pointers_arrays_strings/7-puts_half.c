#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half-prints half of the string
 *
 * @str:pointer to string being printed
 *
 *  prints the second half of the string.
 *
 *If the number of characters
 * is odd, it prints the last n characters
 *
 *  n = (length - 1) / 2.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int startIndex;
	int i;

	if (len % 2 == 0)
	{
		startIndex  = len / 2;
	}
	else
	{
		startIndex = (len - 1) / 2;
	}
	for (i = startIndex; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
