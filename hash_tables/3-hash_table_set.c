#include "hash_tables.h"
#include <string.h>

/**
 * create_node - Creates a new hash node
 * @key: Key string
 * @value: Value string
 *
 * Return: Pointer to new node, or NULL if failed
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}
