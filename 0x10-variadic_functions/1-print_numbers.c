#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line
 * @separator: string to be printed between
 * numbers
 * @n: number of integers passed to the function
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
		va_end(args);
		printf("\n");
}
