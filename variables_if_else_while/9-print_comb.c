#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');  /* 1st putchar: first digit */
			putchar(j + '0');  /* 2nd putchar: second digit */
			if (i != 8 || j != 9)
			{
				putchar(',');   /* 3rd putchar: comma */
				putchar(' ');   /* 4th putchar: space */
			}
		}
	}
	putchar('\n');  /* newline at the end */

	return (0);
}
