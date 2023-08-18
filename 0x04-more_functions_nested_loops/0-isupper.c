#include "main.h"
#include <stdio.h>
/**
 * _isupper-checks whether character is uppercase
 * @c:character being checked
 * Return:1 when c is uppercase and 0 when it is not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
