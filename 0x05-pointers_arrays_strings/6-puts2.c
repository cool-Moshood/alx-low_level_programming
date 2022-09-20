#include "main.h"

/**
 * puts2 - fucntion that prints every other character include first character
 *
 * @str: - pointer number
 *
 * Return: Always 0 success.
 */

void puts2(char *str)
{

	int x;

	for (x = 0; str[x] != '\0'; ++x)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
