#include "main.h"

/**
 * main - Entry print without using
 * printf and put
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char item[] = "_putchar";

	int i = 0;

	while (item[i] != '\0')
	{
		_putchar(item[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
