#include "hash_tables.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * shash_table_create - creates a hash table
 * @size: size of hash_table
 * Return: pointer to hash table created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int e;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(size * sizeof(shash_table_node *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (e = 0; e < size; e++)
		(ht->array)[e] = NULL;
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table
 * @key: identify of the element
 * @value: value associated with the key
 *
 * Sets the hashtable in a chronoligal order depending on the key
 * ASCII value
 * Return: 1 if successful, 0 if unsuccessful
 */
int shash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hn;

	if (ht == NULL || key == NULL)
		return (0);
	hn = malloc(sizeof(shash_node_t));
	if (hn == NULL)
		return (0);
	hn->key = strdup(key);
	hn->value = strdup(value);
	

