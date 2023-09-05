#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup-duplicates a string
 *
 * @str:input string
 *
 * Return:pointer to duplicate/NULL on fail.
 */
char *_strdup(char *str)
{
	int len = 0;
	char *duplicate;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = (char *)malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
