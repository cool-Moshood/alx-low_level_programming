#include <stdio.h>

/**
 * _strstr - ffunction that locates a substring
 *
 * @haystack: entire string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *x;
	char *y;

	while (*haystack != '\0')
	{
		x = haystack;
		y = needle;

		while (*haystack != '\0' && *y != '\0' && *haystack == *y)
		{
			haystack++;
			y++;
		}
		if (!*y)
			return (x);
		haystack = x + 1;
	}
	return (0);
}
