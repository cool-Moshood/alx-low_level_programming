#include "main.h"

/**
 * _islower - Entry point
 * check for lowercase charather
 * @c:  letter
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
