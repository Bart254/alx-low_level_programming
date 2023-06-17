#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints the key/value pairs of a hash table
 * @ht: hashtable to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ht_e, last_idx;
	hash_node_t *hn;

	if (ht == NULL)
		return;
	for (last_idx = 0, ht_e = 0; ht_e < ht->size; ht_e++)
	{
		if ((ht->array)[ht_e] != NULL)
			last_idx = ht_e;
	}
	putchar('{');
	for (ht_e = 0; ht_e < ht->size; ht_e++)
	{
		for (hn = (ht->array)[ht_e]; hn; hn = hn->next)
		{
			printf("\'%s\': \'%s\'", hn->key, hn->value);
			if (ht_e == last_idx && hn->next == NULL)
				break;
			printf(", ");
		}
		if (ht_e == last_idx)
			break;
	}
	printf("}\n");

}

