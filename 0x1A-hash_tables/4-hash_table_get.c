#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - returns the value of associated key
 * @ht: hash table containing all the keys
 * @key: key being searched
 * Return: value associated with key, NULL if not successful
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	ptr = (ht->array)[index];
	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
