#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48);  /* 48 is ASCII code for '0' */
	putchar('\n');        /* second putchar for newline */

	return (0);
}
