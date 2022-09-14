#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry
 *
 * @n: number
 * return: always 0 success
 */
void print_to_98(int n)
{

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
