#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of needle in haystack,
 *         or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (0);
}
