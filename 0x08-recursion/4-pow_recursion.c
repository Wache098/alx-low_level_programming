#include "main.h"
#include <stdio.h>
#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion-returns the results of a number
 * raised to the power of another
 *
 * @x:first value
 * @y:the other value
 * Return:-1 when y is lower than 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
