#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - a function that hash table
 * @size: size of an array in hash table
 *
 * Return: always return 0.
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_node_t));
	table = malloc(sizeof(hash_node_t *) * size);

	if (table == 0)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);
	return (table);
}
if (table->array == NULL)
	return (NULL);
	return (table);
	}
