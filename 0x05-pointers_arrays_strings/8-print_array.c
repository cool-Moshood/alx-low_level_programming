#include "main.h"
#include <stdio.h>

/**
 * print_array - fucntion that prints elements of an array of integers
 *
 * @a: - pointer integer
 * @n: - integer
 *
 * Return: Always 0 success.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; ++x)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
