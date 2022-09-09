#include<stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Description: 'the program run alphabet in lower case'
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	char x;

	x = 'A';

	while (x <= 'z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}
	return (0);
}
