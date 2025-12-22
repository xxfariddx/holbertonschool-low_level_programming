#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and first n bytes of s2 into new memory
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Treat NULL as empty string */
    if (s1 != NULL)
        while (s1[len1] != '\0')
            len1++;
    if (s2 != NULL)
        while (s2[len2] != '\0')
            len2++;

    /* If n >= len2, use entire s2 */
    if (n > len2)
        n = len2;

    /* Allocate memory for new string */
    concat = malloc(sizeof(char) * (len1 + n + 1));
    if (concat == NULL)
        return (NULL);

    /* Copy s1 */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy first n bytes of s2 */
    for (j = 0; j < n; j++)
        concat[i + j] = s2[j];

    /* Null terminate */
    concat[i + j] = '\0';

    return (concat);
}
