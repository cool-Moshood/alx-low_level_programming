#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - get index of given key
 * @key: given keys
 * @size: size of hash table
 *
 * Return: given key index.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
    return (hash_djb2(key) % size);
}