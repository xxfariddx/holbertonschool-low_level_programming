#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');     /* 1st putchar: print first digit */
			putchar(j + '0');     /* 2nd putchar: print second digit */
			if (i != 8 || j != 9)
			{
				putchar(',');     /* 3rd putchar: comma */
				putchar(' ');     /* 4th putchar: space */
			}
		}
	}
	putchar('\n'); /* optional newline */

	return (0);
}
