#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -function that allocates memory using malloc
 *
 * @b: number of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)

		exit(98);

	return (x);
}
