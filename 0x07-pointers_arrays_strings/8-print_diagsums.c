#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 *
 * @a: input pointer.
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			y = y + *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			z = z + *(a + x);
	}
	printf("%d, %d\n", y, z);
}
