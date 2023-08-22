#include "main.h"
#include <stdio.h>
/**
 * print_rev-prints a string in reverse followed by a new line
 * @s: pointer to input string
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	i = len - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
