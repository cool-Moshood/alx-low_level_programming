#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, x = 0, y = 0, incr = 0, total = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	while (b[x] != '\0')
		x++;

	for (y = x - 1; y >= 0; y--)
	{
		total += (1 << incr) * (b[y] - '0');
		incr++;
	}

	return (total);
}
