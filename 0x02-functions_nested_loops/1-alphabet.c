#include "main.h"

/**
 * print_alphabet - Entry print without using
 * a-z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{

	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
