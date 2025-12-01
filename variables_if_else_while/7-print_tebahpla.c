#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);  /* 1st putchar */
	putchar('\n');   /* 2nd putchar */

	return (0);
}
