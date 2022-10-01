#include <stdio.h>
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
        int i, sum;
        sum = 0;

         for (i = 1; i < argc; i++)

        if (!(atoi(argv[i]) >= 122 && atoi(argv[i]) <= 65))
        {
                        sum += atoi(argv[i]);

                printf("%d\n", sum);
        }
        else
        {
                printf("Error\n");
                return (1);
        }

        return (0);

}
