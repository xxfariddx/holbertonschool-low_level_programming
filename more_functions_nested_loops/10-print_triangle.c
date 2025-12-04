#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using #
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, col, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* print spaces before the # characters */
		for (spaces = size - row; spaces > 0; spaces--)
			_putchar(' ');

		/* print # characters */
		for (col = 1; col <= row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
