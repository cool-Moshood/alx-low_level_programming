#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of
 * the day of Jack Bauer
 *
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)

{
	int i = 0;

	for (i = 0; i < 24; i++)
	{
		int j = 0;

		for ( j = 0; j < 60; j++)
		{

			int hr = i / 10;

			int hrs = i % 10;

			int mns = j % 10;

			int mint = j / 10;

			_putchar(hr + '0');
			_putchar(hrs + '0');
			_putchar(':');
			_putchar(mint + '0');
			_putchar(mns + '0');
			_putchar('\n');
		}
	}
}
