#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 */

void reverse_array(int *a, int n)
{

	int x, y;

	for (x = n - 1; x >= n / 2; x--)
	{
		y = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = y;
	}
}
