#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -function that returns the sum o
 * all its parameters
 * @n: integer
 * Return: sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
