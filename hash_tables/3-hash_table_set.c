#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * update_value - Updates value of an existing key
 * @node: Node to update
 * @value: New value
 *
 * Return: 1 if success, 0 if strdup fails
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value;

	new_value = strdup(value);
	if (!new_value)
		return (0);

	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * add_node - Creates a new node and inserts it at the beginning of the list
 * @ht: Hash table
 * @index: Array index
 * @key: Key string
 * @value: Value string
 *
 * Return: 1 if success, 0 otherwise
 */
int add_node(hash_table_t *ht, unsigned long int index, const char *key,
		const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: Hash table
 * @key: Key (cannot be empty)
 * @value: Value (will be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (
				update_value(current, value)
			);
		current = current->next;
	}

	return (
		add_node(ht, index, key, value)
	);
}
