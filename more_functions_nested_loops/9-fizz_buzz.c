#include "main.h"

/**
 * fizz_buzz - prints numbers from 1 to 100, replacing multiples
 * of 3 with Fizz, multiples of 5 with Buzz, and multiples of
 * both with FizzBuzz.
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			/* print the number manually */
			int n = i, d, rev = 0;

			while (n > 0)
			{
				rev = rev * 10 + (n % 10);
				n /= 10;
			}

			while (rev > 0)
			{
				d = rev % 10;
				_putchar(d + '0');
				rev /= 10;
			}
		}

		if (i < 100)
			_putchar(' ');
	}

	_putchar('\n');
}
