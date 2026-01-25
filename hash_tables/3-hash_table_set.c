#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: Hash table
 * @key: Key (cannot be empty)
 * @value: Value (will be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Check if key exists, update value */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (current->value ? 1 : 0);
		}
		current = current->next;
	}

	/* Key does not exist, create new node */
	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	/* Insert at beginning for collision handling */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
