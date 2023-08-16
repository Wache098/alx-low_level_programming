#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10-prints 10 times lower case alphabet
 *
 * Return:0(success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}
