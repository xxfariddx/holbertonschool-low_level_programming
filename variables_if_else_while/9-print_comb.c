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
			putchar(i + '0');           /* 1st putchar */
			putchar(j + '0');           /* 2nd putchar */
			if (i != 8 || j != 9)
				putchar(44), putchar(32); /* 3rd & 4th putchar: ',' and ' ' */
		}
	}
	putchar(10); /* newline using ASCII 10, allowed as outside 4-count rule */

	return (0);
}
