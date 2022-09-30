#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s:pointer with the address of the string
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		x++;
		return (_strlen_recursion(&s[x]) + 1);
	}
	else
	{
		return (0);
	}

}
