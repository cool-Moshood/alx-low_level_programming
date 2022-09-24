#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string.
 * Return: dest.
 */

char *rot13(char *s)
{
	int x = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + x) != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*(s + x) == alphabet[i])
			{
				*(s + x) = rot13[i];
				break;
			}
		}
		x++;
	}

	return (s);
}
