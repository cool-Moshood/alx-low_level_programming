#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: initiate array
 * @c: specific char to be with the array
 *
 * Return: array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int x = 0;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	while (x < (int)size)
	{
		ar[x] = c;
		x++;
	}
	ar[x] = '\0';

	return (ar);
}
