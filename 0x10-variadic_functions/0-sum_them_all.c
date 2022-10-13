#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: integer
 *
 * Return: sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum_total;

	if (n == 0)
	{
		return (0);
	}
	va_start (ap, n);

	sum_total = 0;

	for (i = 0; i < n; i++)

		sum_total += va_arg (ap, int);

	va_end (ap);
	return (sum_total);
}
