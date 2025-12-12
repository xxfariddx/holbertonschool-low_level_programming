#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: Prints each row of the chessboard, followed by a new line.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
