#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: index from which to concatenate
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}

	if (n > y)
		n = y;

	s = malloc(sizeof(char) * (x + n + 1));
	if (s == NULL)
		return (0);

	for (z = 0; z < x; z++)
	{
		s[z] = s1[z];
	}

	for (; z < (x + n); z++)
	{
		s[z] = s2[z - x];
	}
	s[z] = '\0';
	return (s);
}
