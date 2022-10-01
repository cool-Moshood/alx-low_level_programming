#include "main.h"

/**
 * _strcpy - fucntion that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: - duplicate main code
 * @src: - main code
 * Return: Always 0 success.
 */

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
