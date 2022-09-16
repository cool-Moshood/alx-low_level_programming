#include "main.h"

/**
 * print_square -function size of square
 *
 * @n: number
 *
 * Return: Always 0.
 */
void print_square(int n)
{

	int x;

	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 2)
	{
		_putchar('\n');
	}
}
