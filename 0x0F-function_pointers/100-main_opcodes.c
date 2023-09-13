#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a function.
 * @func: A pointer to the function whose opcodes need to be printed.
 * @bytes: The number of bytes to print.
 */
void print_opcodes(void (*func)(void), int bytes)
{
int i;
unsigned char *opcodes = (unsigned char *)func;

for (i = 0; i < bytes; i++)
{
printf("%02x", opcodes[i]);
if (i < bytes - 1)
{
printf(" ");
}
}

printf("\n");
}
/**
 * main - start point
 * @argc:arguments
 * @argv:argument count
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes <= 0)
{
printf("Error\n");
return (2);
}
print_opcodes((void *)main, num_bytes);

return (0);
}

