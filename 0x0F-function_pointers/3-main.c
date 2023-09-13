#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include "function_pointers.h"

/**
 * main - start point
 *@argv:argument vector
 *@argc:argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);
char *operator;

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

operation = get_op_func(operator);

if (operation == NULL)
{
printf("Error\n");
return (99);
}
if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && num2 == 0)
{
printf("Error\n");
return (100);
}

result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
