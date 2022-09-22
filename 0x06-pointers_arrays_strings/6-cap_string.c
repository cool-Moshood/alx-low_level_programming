#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: input string.
 *
 * Return: dest.
 */

char *cap_string(char *s)
{

	int x = 0, z;

	int y[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + x) >= 97 && *(s + x) <= 122)
		*(s + x) = *(s + x) - 32;
	x++;
	while (*(s + x) != '\0')
	{
		for (z = 0; z < 13; z++)
		{
			if (*(s + x) == y[z])
			{
				if ((*(s + (x + 1)) >= 97) && (*(s + (x + 1)) <= 122))
					*(s + (x + 1)) = *(s + (x + 1)) - 32;
				break;
			}
		}
		x++;
	}
	return (s);
}
