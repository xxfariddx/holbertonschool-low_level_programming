#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to pointer to the head of the list
 * @idx: index where the new node should be added (0-based)
 * @n: value for the new node
 *
 * Return: address of new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
                                     unsigned int idx,
                                     int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* If adding at the beginning, use add_dnodeint */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	/* If temp is NULL, index is out of bounds */
	if (temp == NULL)
		return (NULL);

	/* If adding at the end, use add_dnodeint_end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* Insert new node between temp and temp->next */
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
