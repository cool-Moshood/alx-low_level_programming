#include <stdio.h>

/**
 * main - prints the sum of even numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	long int x = 1;
	long int y = 2;
	long int nth = x + y;
	long sum = 2;

	while (nth < 4000000)
	{
		if (nth % 2 == 0)
		{
			sum = nth + sum;
		}
		x = y;
		y = nth;
		nth = x + y;
	}
	printf("%lu\n", sum);
	return (0);
}

