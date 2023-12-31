#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - Returns a pointer to the function that
 * corresponds to the operator.
 * @s: The operator string
 * Return: A pointer to the corresponding function or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}

