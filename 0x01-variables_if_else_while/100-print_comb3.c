#include <stdio.h>

/**
 * main - run two digit
 *
 * in ascending order
 *return: always 0 success
 */
int main(void)
{

	int i, j;

	i = 48; /* ASCII 0 */

	j = 49;         /* ASCII 1 */
	while (i <= 56) /*  ASC11 8 */
	{
		while (j <= 57) /* ASC11 9 */
		{
			putchar(i);
			putchar(j);
			if (!(i == 56 && j == 57)) /* IT PRINT COMMA TILL STATEMENT IS FALSE */
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	printf("\n");
	return (0);
}
