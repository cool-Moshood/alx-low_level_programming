#include "main.h"

/**
 * _abs - Entry point
 * check for absolute value of an integer
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
