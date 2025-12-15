#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: number of arguments (unused)
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* silence unused variable warning */

	printf("%s\n", argv[0]);  /* print program name including path */
	return (0);
}
