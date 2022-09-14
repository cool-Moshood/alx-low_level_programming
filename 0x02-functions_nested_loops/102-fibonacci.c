#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	long int t1 = 1;
	long int t2 = 2;
	long int x;
	long int nt = 3;

	printf(" %ld, %ld, ", t1, t2);

	for (x = 3; x < 50; x++)

	{

		printf("%ld, ",  nt);
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
	}
	printf("%ld\n", nt);
	return (0);

}
