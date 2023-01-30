#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - fucntion that implement the djb2 algorithm
 * @str: string
 *
 * Return: always return 0.
*/

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);


}

int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}