#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
    int rev = 0, d, temp = n;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    while (rev > 0)
    {
        d = rev % 10;
        _putchar(d + '0');
        rev /= 10;
    }
}

/**
 * fizz_buzz - prints numbers from 1 to 100, replacing multiples
 * of 3 with Fizz, multiples of 5 with Buzz, and multiples of
 * both with FizzBuzz, using _putchar only.
 */
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
            print_number(i);
        }

        if (i < 100)
            _putchar(' ');
    }

    _putchar('\n');
}
