#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *next;
	unsigned int e;

	if (ht == NULL)
		return;
	e = 0;
	while (e < ht->size)
	{
		ptr = (ht->array)[e];
		while (ptr)
		{
			free(ptr->key);
			free(ptr->value);
			next = ptr->next;
			free(ptr);
			ptr = next;
		}
		e++;
	}
	free(ht->array);
	free(ht);
}
