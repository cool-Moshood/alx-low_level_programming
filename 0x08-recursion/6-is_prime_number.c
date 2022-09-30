#include "main.h"

/**
 * is_prime_n - function print if a input is a prime number.
 * @n: input number.
 * @x: iterator.
 * Return: always 0
 */

int is_prime_n(unsigned int n, unsigned int x)
{

	if (n <= 1)
		return (0);

	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (is_prime_n(n, x + 1));
}

/**
 * is_prime_number - function print if a input is a prime number.
 * @n: input number.
 *
 * Return: always 0
 */

int is_prime_number(int n)
{
	return (is_prime_n(n, 2));
}
