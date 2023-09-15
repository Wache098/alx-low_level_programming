#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_numbers - Print numbers followed by a new line.
 *
 *  @separator: The string to be printed between numbers
 *  @n: The number of integers passed to the function.
 *   @...: The integers to be printed.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num, divisor;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (num < 0)
		{
			putchar('-');
			num = -num;
		}
		if (num == 0)
		{
			putchar('0');
		}
		else
		{
		divisor = 1;
		while (num / divisor > 9)
		{
			putchar((num / divisor) % 10 + '0');
			divisor /= 10;
		}
if (separator != NULL && i != n - 1)
{
while (*separator)
{
putchar(*separator);
separator++;
}
}
}
va_end(args);
putchar('\n');
}
}
