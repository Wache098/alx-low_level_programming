#include <stdio.h>
/**
 * main-prints the lowercase alphabet in reverse ,adds new line.
 *
 * Return:0(success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
