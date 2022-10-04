#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width for the two dimensional array.
 * @height: height fr the two dimensional array.
 *
 * Return: null or 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **ar2;
	int x, y;

	if (width == 0 || height == 0)
		return (NULL);

	ar2 = malloc(sizeof(int *) * height);
	if (ar2 == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ar2[x] = malloc(sizeof(int) * width);
		if (ar2[x] == NULL)
		{
			while (x >= 0)
				free(ar2[x--]);
			free(ar2);
			return (NULL);
		}


		for (y = 0; y < width; y++)
			ar2[x][y] = 0;
	}

	return (ar2);
}
