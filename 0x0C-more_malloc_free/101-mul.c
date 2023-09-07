#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_digit - checks if string contains only digits
 * @str:input string
 * Return: 0 if string is not digits
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main -start point
 *
 * @argc:argument count
 * @argv:no of commandline arguments
 * Return:98 incase of error otherwise 0
 */
int main(int argc, char *argv[])
{
	char error[] = "Error\n";
int i, x, y, product, divisor, temp;


if (argc != 3)
{
error[] = "Error\n";

for (i = 0; i < 6; i++)
{
putchar(error[i]);
}
return (98);
}
char *num1, *num2;

num1 = argv[1];
num2 = argv[2];

if (!is_digit(num1) || !is_digit(num2))
{
error[] = "Error\n";
for (i = 0; i < 6; i++)
{
putchar(error[i]);
}
return (98);
}
x = atoi(num1);
y = atoi(num2);
product = x * y;

if (product == 0)
{
putchar('0');
}
else
{
if (product < 0)
{
putchar('-');
product = -product;
}

}
divisor = 1;
temp = product;
while (temp > 9)
{
temp /= 10;
divisor *= 10;
}
while (divisor > 0)
{
digit = product / divisor;
putchar('0' + digit);
product %= divisor;
divisor/= 10;
}
}
putchar('\n');
return (0);
}
