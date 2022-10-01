#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{

	int i, x, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		for (i = 1; i < argc; i++)

			x = strtol(argv[i], NULL, 10);

		m = atoi(argv[1]);

		m = m * x;

	}
	printf("%d\n", m);
	return (0);
}
