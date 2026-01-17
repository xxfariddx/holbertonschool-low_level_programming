#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h> /* for size_t */

/**
 * struct list_s - singly linked list node
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
