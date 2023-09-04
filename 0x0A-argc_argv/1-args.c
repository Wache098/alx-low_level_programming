#include "main.h"
#include <stdio.h>
/**
 * main-start point
 *
 * @argc:arguments count
 *
 * @argv:number of command line arguments
 *
 * Return:0 always success
 */
int main(int argc, char *argv[])
{
	int i = argc - 1;

	for (i = 0; argv[i] != NULL;)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		putchar(i % 10 + '0');
		i /= 10;
	}
	putchar('\n');
	return (0);
}
