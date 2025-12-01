#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);   /* 1st putchar */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);   /* 2nd putchar */
	putchar('\n');    /* 3rd putchar */

	return (0);
}
