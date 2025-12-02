#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, j, prod, tens, ones;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			prod = i * j;
			tens = prod / 10;
			ones = prod % 10;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}

			if (tens != 0)
				_putchar(tens + '0');

			_putchar(ones + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
