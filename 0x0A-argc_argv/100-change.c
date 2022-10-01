#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: should count two arguments
 * @argv: argument of name and amount of money
 *
 * Return:  awalys 0
 */

int main(int argc, char *argv[])
{
	int x, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	x = atoi(argv[1]);

	coins += x / 25;
	x = x % 25;
	coins += x / 10;
	x = x % 10;
	coins += x / 5;
	x = x % 5;
	coins += x / 2;
	x = x % 2;
	coins += x / 1;

	printf("%d\n", coins);
	return (0);
}
