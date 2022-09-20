#include "main.h"

/**
 * rev_string - fucntion that prints a string in reverse, then a new line
 *
 * @s: - pointer integer
 *
 * Return: Always 0 success.
 */

void rev_string(char *s)
{
	int x, y;

	char z;

	for (x = 0; s[x] != '\0'; ++x)
		;

	for (y = 0; y < x / 2; ++y)
	{
		z = s[y];

		s[y] = s[x - 1 - y];

		s[x - 1 - y] = z;
	}
}
