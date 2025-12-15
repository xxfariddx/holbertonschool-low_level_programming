#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3) /* check for exactly two arguments */
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* convert first argument to int */
	num2 = atoi(argv[2]); /* convert second argument to int */
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
