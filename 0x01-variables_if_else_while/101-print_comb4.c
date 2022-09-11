#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Description: 'using putchar to run 3 digit'
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	int x = 48, y = 49, z = 50;

	while (x <= 55)
	{
		while (y <= 56)
		{
			while (z <= 57)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x <= 54 && y <= 56 && z <= 57)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;

			z = y + 1;
		}
		x++;

		y = x;
	}
	putchar('\n');
	return (0);
}
