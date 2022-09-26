#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @b: constant byte
 * @s: pointer to the memory area
 * @n: bytes of the memory
 *
 * Return: nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
