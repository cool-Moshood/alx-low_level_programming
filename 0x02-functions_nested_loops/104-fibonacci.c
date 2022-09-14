#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	long double t1 = 1;
	long  double t2 = 2;
	long  double nth = t1 + t2;
	int x;

	printf("%.0Lf, %.0Lf, ", t1, t2);

	for (x = 3; x < 98; x++)
	{

		printf("%.0Lf, ",  nth);
		t1 = t2;
		t2 = nth;
		nth = t1 + t2;

	}
	printf("%.0Lf\n", nth);
	return (0);

}
