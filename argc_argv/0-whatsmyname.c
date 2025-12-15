#include "main.h"

/**
 * main - prints the name of the program, followed by a new line
 * @argc: number of arguments (unused)
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* silence unused variable warning */

	_puts(argv[0]); /* print program name using _puts */
	return (0);
}
