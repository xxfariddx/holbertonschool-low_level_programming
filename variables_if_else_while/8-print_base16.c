#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	/* Print digits 0-9 */
	for (i = 0; i < 10; i++)
		putchar(i + '0');  /* 1st putchar */

	/* Print letters a-f */
	for (i = 0; i < 6; i++)
		putchar(i + 'a');  /* 2nd putchar */

	/* Print newline */
	putchar('\n');        /* 3rd putchar */

	return (0);
}
