#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat-concatenates two strings
 *
 * @s1:input string 1
 *
 * @s2:input string 2
 *
 * Return:NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *concatenated;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concatenated[len1 + i] = s2[i];
	}
	concatenated[len1 + len2] = '\0';
	return (concatenated);
}
