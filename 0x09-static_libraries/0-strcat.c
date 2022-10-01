#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: string
 * @dest:string
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int dest_len = 0;

	while (dest[x++])
		dest_len++;

	for (x = 0; src[x]; x++)
		dest[dest_len++] = src[x];

	return (dest);
}
