#include <stdio.h>
#include<stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Description: 'the program run alphabet in lower case'
 *Excluding: 'e and q'
 *
 *Return: Always 0 (Success)
 */
int main(void)
{

	char x;

	x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}
	{
		putchar('\n');
	}
	return (0);
}
