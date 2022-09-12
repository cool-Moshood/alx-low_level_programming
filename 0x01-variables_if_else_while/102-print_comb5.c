#include <stdio.h>

/**
 * main - combination of numbers of four number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int x, y, p, z, f1, f2;

	x = y = z = p = 48;

	while (x <= 57)
	{
		y = 48;
		while (y <= 57)
		{
			z = 48;
			while (z <= 57)
			{
				p = 48;
				while (p <= 57)
				{
					f1 = (x * 10) + y;
					f2 = (z * 10) + p;
					if (f1 < f2)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(p);
			if (x <= 57 && y <= 56 && z <= 57 && p <= 57)
			putchar(',');
			putchar(' ');
					}
					p++;
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
