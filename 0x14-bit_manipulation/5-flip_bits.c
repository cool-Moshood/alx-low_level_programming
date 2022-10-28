#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: param 1
 * @m: param 2
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0, x = 0, y = 0;

	while (n > 0 || m > 0)
	{
		x = n & 1;
		y = m & 1;

		if (x != y)
			bits++;

		n = n >> 1;
		m = m >> 1;
	}

	return (bits);
}
