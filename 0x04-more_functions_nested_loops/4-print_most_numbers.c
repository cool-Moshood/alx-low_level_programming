#include "main.h"

/**
 * print_most_numbers - function that numb from 0-9
 *
 *expect 2 and 4.
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int x = 48;

	while (x <= 57)

	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
		x++;
	}
	_putchar('\n');

}
