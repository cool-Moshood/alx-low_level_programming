#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a
 * copy of the string given as a parameter.
 *
 * @str: The string to be copied.
 *
 * Return:  NULL or duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;

	int x = 0, y = 0, z = 0;

	if (str == NULL)
		return (NULL);

	while (str[x])
		y++, x++;

	dup_str = malloc(sizeof(char) * (y + 1));

	if (dup_str == NULL)
		return (NULL);

	while (z < y)
	{
		dup_str[z] = str[z];
		z++;
	}
	return (dup_str);
}
