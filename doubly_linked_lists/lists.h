#ifndef "DOUBLY_LINKED_LISTS"
#define "DOUBLY_LINKED_LISTS"

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);

#endif



