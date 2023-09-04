#include <stdio.h>
#include "main.h"
/**
 * main-start point
 * @argc:argument count
 *
 *@argv:an array of strings with command line arguments
 *
 * Return:0 always success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; argv[0][i] != '\0'; i++)
		{
		putchar(argv[0][i]);
		}
	}
	putchar('\n');
	return (0);

}
