#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int start, i;

	if (!str)
		return;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	/* Determine starting index for second half */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Print from start to end */
	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
