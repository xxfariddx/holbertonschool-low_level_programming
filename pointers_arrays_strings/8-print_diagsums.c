#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Description: The matrix is square and stored in row-major order.
 *              Prints the sums in the format: "sum1, sum2\n"
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);          /* primary diagonal */
		sum2 += *(a + i * size + (size - 1 - i)); /* secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
