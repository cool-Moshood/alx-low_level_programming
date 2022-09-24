#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 *
 * @b: The buffer
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{

	int x, y;

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);

		for (y = 0; y < 10; y++)
		{
			if ((y + x) >= size)
				printf("  ");
			else
				printf("%02x", *(b + y + x));
			if ((y % 2) != 0 && y != 0)
				printf(" ");
		}
		for (y = 0; y < 10; y++)
		{
			if ((y + x) >= size)
				break;
			else if (*(b + y + x) >= 31 &&
					*(b + y + x) <= 126)
				printf("%c", *(b + y + x));
			else
				printf(".");
		}
		if (x >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
