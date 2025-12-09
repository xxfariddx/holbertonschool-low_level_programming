#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i, len = 0;

	if (!str)
		return;

	/* Find length of string */
	while (str[len] != '\0')
		len++;

	/* Print every other character */
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
