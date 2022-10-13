#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints string
 * followed by a new line.
 *
 * @separator: string to be printed between the
 * strings
 * @n: number of strings passed to the function
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;
	char *s;

	va_start(ap, n);
	x = 0;
	while (x < n)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
		x++;
	}
	va_end(ap);
	printf("\n");
}
