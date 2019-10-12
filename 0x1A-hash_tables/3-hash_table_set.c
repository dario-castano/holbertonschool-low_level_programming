#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: key to find
 * @value: value to be added
 * Return: 1 if successful, otherwise 0
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}


