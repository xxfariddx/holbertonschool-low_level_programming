#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t nread, nwritten;
    char *buffer;

    /* 1. Check filename */
    if (filename == NULL)
        return 0;

    /* 2. Open file */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    /* 3. Allocate buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return 0;
    }

    /* 4. Read from file */
    nread = read(fd, buffer, letters);
    if (nread == -1)
    {
        free(buffer);
        close(fd);
        return 0;
    }

    /* 5. Write to stdout */
    nwritten = write(STDOUT_FILENO, buffer, nread);
    if (nwritten == -1 || nwritten != nread)
    {
        free(buffer);
        close(fd);
        return 0;
    }

    /* 6. Clean up */
    free(buffer);
    close(fd);

    /* 7. Return number of bytes printed */
    return nwritten;
}
