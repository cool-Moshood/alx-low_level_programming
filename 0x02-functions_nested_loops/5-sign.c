#include "main.h"

/**
 * print_sign - Entry point
 * check for positive & negative
 *
 * @n: letter
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
