#include <stdlib.h>
#include "hash_tables.h"

/**
  * hash_table_print - function that prints a hash table
  * @ht: hash table
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char *str = "";

	i = 0;
	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			printf("%s", str);
			printf("'%s': '%s'", node->key, node->value);
			str = ", ";
			node = node->next;
		}
	i++;
	}
	printf("}\n");
}
