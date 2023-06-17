#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds a node to the hash table
 * @ht: hash_table
 * @key: name of node
 * @value: data associated with key
 * Return: 1 if successful, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	unsigned int hi;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (0);
	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(hn);
		return (0);
	}
	hn->value = strdup(value);
	if (hn->value == NULL)
	{
		free(hn->key);
		free(hn);
		return (0);
	}
	hi = key_index((unsigned char *)key, ht->size);
	hn->next = (ht->array)[hi];
	(ht->array)[hi] = hn;
	return (1);
}
