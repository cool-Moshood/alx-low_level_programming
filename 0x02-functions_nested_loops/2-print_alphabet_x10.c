#include "main.h"

/**
 * print_alphabet_x10 - Entry print without using
 * a-z in 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
