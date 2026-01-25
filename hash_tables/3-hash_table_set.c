#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key (cannot be empty)
 * @value: The value associated with the key (will be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;
	char *value_copy;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Check if key already exists, update value */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	/* Key does not exist, create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_copy);
		return (0);
	}

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}

	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
