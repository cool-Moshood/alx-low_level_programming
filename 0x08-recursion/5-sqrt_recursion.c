#include "main.h"
/**
 *test_sqrt - returns the natural square root of a number.
 *
 *@n:num to square root
 *@x:int mult test
 */
int test_sqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (test_sqrt(n, x + 1));
	}
}
/**
 *_sqrt_recursion - function that returns the
 * natural square root of a number
 *@n: square root num
 */
int _sqrt_recursion(int n)
{
	return (test_sqrt(n, 1));
}
