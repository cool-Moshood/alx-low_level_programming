#include <stdio.h>

/**
 * main - Run three different combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, p, q;

	i = 48;
	p = 48;
	q = 48;

	while (p < 58)
	{
		i = 48;
		while (i < 58)
		{
			q = 48;
			while (q < 58)
			{
				if (p != i && p != q && i != q && p < i && i < q)
				{
					putchar(p);
					putchar(i);
					putchar(q);
					if (!(i == 56 && p == 55 && q == 57))

						putchar(',');
					putchar(' ');
				}
				q++;
			}
			i++;
		}
		p++;
	}
	putchar('\n');
	return (0);
}
