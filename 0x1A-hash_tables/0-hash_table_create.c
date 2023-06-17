#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 * @size: size of the hash table
 * Return: returns the address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int e;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (e = 0; e < size; e++)
		(ht->array)[e] = NULL;
	return (ht);
}
