#include "main.h"

/**
 * _strlen - fucntion that returns the length of a string
 *
 * @s: - pointer number
 *
 * Return: Always 0 success.
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;

	return (x);

}
