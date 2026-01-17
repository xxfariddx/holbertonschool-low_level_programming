#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	/* calculate string length */
	while (str[len])
		len++;

	/* allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplicate string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	/* if list is empty, new node becomes head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* traverse to the last node */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* append new node at the end */
	last->next = new_node;

	return (new_node);
}
