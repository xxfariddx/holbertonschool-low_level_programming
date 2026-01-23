#ifndef FILE_IO
#define FILE_IO

/* Standard headers for system calls and memory functions */
#include <unistd.h>  /* read, write, close, ssize_t, STDOUT_FILENO */
#include <fcntl.h>   /* open, file flags like O_RDONLY */
#include <stdlib.h>  /* malloc, free */

/* Function prototypes */

/* Prints a single character to stdout */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* FILE_IO */
