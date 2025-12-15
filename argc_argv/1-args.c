#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of arguments (unused)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* silence unused variable warning */

	printf("%d\n", argc - 1); /* subtract 1 to exclude program name */
	return (0);
}
