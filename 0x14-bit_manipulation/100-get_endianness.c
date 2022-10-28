#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x = 1;
	char *a = (char *)&x;

	if (*a)
		return (1);

	return (0);
}
