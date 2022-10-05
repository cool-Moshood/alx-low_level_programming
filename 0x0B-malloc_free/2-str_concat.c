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
	int i = 0, p = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + x))
		i++, x++;
	while (*(s2 + y))
		p++, y++;
	p++;
	concat_str = malloc(sizeof(char) * (i + p));

	if (concat_str == NULL)
		return (NULL);

	x = 0, y = 0;

	while (x < i)
	{
		*(concat_str + x) = *(s1 + x);
		x++;
	}
	while (y < p)
	{
		*(concat_str + x) = *(s2 + y);
		x++, y++;
	}

	return (concat_str);
}
