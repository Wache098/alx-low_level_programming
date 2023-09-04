#include "main.h"
#include <stdio.h>
/**
 * main -start point
 *
 * @argc:arguments passed
 *
 * @argv:an array of strings with number of command line arguements.
 *
 * Return:0 always success
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			putchar(argv[i][j]);
		}
	putchar('\n');
	}
	return (0);
	}

