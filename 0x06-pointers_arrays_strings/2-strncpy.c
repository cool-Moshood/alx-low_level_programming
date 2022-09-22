#include "main.h"

/**
 * _strncpy - function that copies a string.
 * 
 * @dest: string
 * @src: string.
 * @n:number of bytes
 *
 * Return: string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    
	int x = 0, src_y = 0;

	while (src[x++])
		src_y++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = src_y; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
