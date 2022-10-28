#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: num
 * @index: index
 *
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	n = n & (1 << index);

	if (n > 0)
		return (1);
	else
		return (0);
}
