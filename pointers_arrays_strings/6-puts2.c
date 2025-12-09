#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	if (!str)  /* safeguard against NULL */
		return;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
