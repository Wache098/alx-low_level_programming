#include "main.h"
/**
 * print_alphabet-prints the alphabet, in lowercase, followed by a new line
 *
 * Return:0(success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	}
