#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;  /* store next node */
		free(head->str);   /* free duplicated string */
		free(head);        /* free node */
		head = tmp;        /* move to next node */
	}
}
