#include "main.h"

/**
 * _strncat - function is similar to the _strcat
 * @dest: string
 * @src: string
 * @n: The number of bytes
 *
 * Return: string dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int x = 0, dest_y = 0;

	while (dest[x++])
		dest_y++;
	for (x = 0; src[x] && x < n; x++)
		dest[dest_y++] = src[x];
	return (dest);
}
