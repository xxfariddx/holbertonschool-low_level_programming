#include <stdio.h>/**
 * main - Prints all single-digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
    int i;    i = 0;
    while (i <= 9)
    {
        putchar(i + '0');
        if (i != 9)
        {
            putchar(',');
            putchar(' ');
        }
        i++;
    }
    putchar('\n');
    return (0);
}
