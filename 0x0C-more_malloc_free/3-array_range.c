#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - function that creates an array of integers.
 *
 * @min: first array.
 * @max: last array.
 *
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *ar, x, y;

	if (min > max)
		return (NULL);

	y = max - min + 1;

	ar = malloc(sizeof(int) * y);

	if (ar == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
		ar[x] = min++;

	return (ar);
}
