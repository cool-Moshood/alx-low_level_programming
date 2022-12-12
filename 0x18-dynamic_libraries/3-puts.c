#include "main.h"

/**
 * _puts - fucntion that prints a string, followed by a new line
 *
 * @str: - pointer integer
 *
 * Return: Always 0 success.
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar (str[x]);
		x++;
	}
	_putchar ('\n');
}
