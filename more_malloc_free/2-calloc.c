#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory (initialized to 0), or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	/* Initialize all bytes to 0 */
	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
