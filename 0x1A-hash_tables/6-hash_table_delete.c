#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: Hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *head;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
		{
			head = ht->array[i];
			while (head != NULL)
			{
				ptr = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = ptr;
			}
		}
	free(ht->array);
	free(ht);
}
