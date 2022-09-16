#include "main.h"

/**
 * print_diagonal -function that draw a daigonal
 *
 * @n: number
 * description: diagonal line the terminal
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int x, y, z;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			z = x - 1;

			for (y = 0; y <= z; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
