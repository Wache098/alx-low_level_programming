#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 50;
long long first = 1, second = 2;
printf("%lld, %lld", first, second);
for (int i = 3; i <= n; i++)
{
long long next = first + second;
printf(", %lld", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
