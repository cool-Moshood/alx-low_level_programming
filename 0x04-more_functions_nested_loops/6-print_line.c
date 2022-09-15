#include "main.h"

/**
 * print_line - function that print _
 *
 *@n: number
 * Return: Always 0.
 */

void print_line(int n)
{

	int x;

	x = 0;

	while (x <= n)
	{
		if (x <= n)
		{
			_putchar('_');
		}
		x++;
	}
	_putchar('\n');
}
