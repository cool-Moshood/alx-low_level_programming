#include "main.h"
/**
 * more_numbers -function that print 10 times
 * description: 1-14
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int y;

		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');

	}

}
