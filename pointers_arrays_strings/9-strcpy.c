#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: buffer where the string will be copied
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character including the null terminator */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /* Add the terminating null byte */

	return (dest);
}
