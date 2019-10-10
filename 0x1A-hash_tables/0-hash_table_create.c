#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the new hash table
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	hash_node_t *array[size];

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->size = size;
	table->array = array;

	return(table);
}
