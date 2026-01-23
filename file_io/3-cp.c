#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * check_args - checks the number of arguments
 * @argc: number of arguments
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_source - opens the source file
 * @filename: name of the file to read
 *
 * Return: file descriptor
 */
int open_source(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_dest - opens/creates the destination file
 * @filename: name of the file to write
 *
 * Return: file descriptor
 */
int open_dest(char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * safe_close - closes a file descriptor safely
 * @fd: file descriptor
 */
void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread, nwritten;
	char buffer[BUFFER_SIZE];

	check_args(argc);

	fd_from = open_source(argv[1]);
	fd_to = open_dest(argv[2]);

	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		nwritten = write(fd_to, buffer, nread);
		if (nwritten == -1 || nwritten != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(fd_from);
			safe_close(fd_to);
			exit(99);
		}
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		safe_close(fd_from);
		safe_close(fd_to);
		exit(98);
	}

	safe_close(fd_from);
	safe_close(fd_to);

	return (0);
}
