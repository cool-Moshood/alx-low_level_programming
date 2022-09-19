#include "main.h"

/**
 * swap_int - fucntion that swap values of two integer
 *
 * @a: - pointer number
 * @b: - pointer number
 *
 *  * Return: Always 0 success.
 */

void swap_int(int *a, int *b)

{
	int y, x;

	y = *a;

	x = *b;

	*b = y;

	*a = x;

}
