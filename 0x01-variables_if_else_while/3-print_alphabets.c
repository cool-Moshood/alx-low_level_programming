#include<stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Description: 'the program run radom number'
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



	x = 'A';

	while (x <= 'Z')

	{

		x = toupper(x);

		putchar(x);
		x++;
	}
	{
		putchar('\n');
	}
	return (0);
}
