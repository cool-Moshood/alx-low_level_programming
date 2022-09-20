#include "main.h"

/**
 * print_rev - fucntion that prints a string in reverse, followed by a new line
 *
 * @s: - pointer integer
 *
 * Return: Always 0 success.
 */

void print_rev(char *s)
{

	int x = 0;

	while (s[x])

		x++;
	while (x--)

		_putchar (s[x]);


	_putchar ('\n');
}

