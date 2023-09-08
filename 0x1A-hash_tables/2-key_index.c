#include "hash_tables.h"

/**
 * key_index - converts a key to an index on hash table
 * @key: key
 * @size: size of hash_table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
