#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 *
 * Description: Prints key/value pairs in order of array index,
 * then in order along the linked lists in each bucket.
 * Format: {'key': 'value', ...}
 * If ht is NULL, does nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first = 1;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first = 0;
			current = current->next;
		}
	}

	printf("}\n");
}
