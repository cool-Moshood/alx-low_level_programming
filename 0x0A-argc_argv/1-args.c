#include <stdio.h>

/**
 * main - a program that prints its name
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
