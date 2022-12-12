#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s:  string
 * @c: The character to be located
 *
 * Return:  c
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return ('\0');
}
