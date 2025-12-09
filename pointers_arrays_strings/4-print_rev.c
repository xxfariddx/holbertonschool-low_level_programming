#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
    int len = 0;

    /* Find the length of the string */
    while (s[len] != '\0')
        len++;

    /* Print the string backwards */
    for (len = len - 1; len >= 0; len--)
        _putchar(s[len]);

    _putchar('\n');
}
