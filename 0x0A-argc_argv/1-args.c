#include <stdio.h>

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
    
    int i;
    
    for (i = 0; i < argc; i++)
    printf("%d", i);
    
    return (0);
}
