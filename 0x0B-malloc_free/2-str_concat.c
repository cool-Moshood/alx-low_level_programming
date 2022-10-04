#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: NULL or concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i = 0, x = 0, y = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		i++, x++;

	while (s2[y])
		x++, y++;

	concat_str = malloc(sizeof(char) * y);

	if (concat_str == NULL)
		return (NULL);

	while (i < s1[i])
	{
		concat_str[i] = s1[i];
		 j++;
	}
	while (j < s2[j])
	{
		concat_str[i] = s2[j];
		 j++;
	}

	return (concat_str);
}
