#include "main.h"
/**
 * leet - function that encodes a string into 1337
 *
 * @s: string
 *
 * Return: dest
 */

char *leet(char *s)
{
	int x = 0, z;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};


	while (*(s + x) != '\0')
	{
		for (z = 0; z < 5; z++)
		{
			if (*(s + x) == lower_case[z] || *(s + x) == upper_case[z])
			{
				*(s + x) = numbers[z];
				break;
			}
		}
		x++;
	}
	return (s);
}
