#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
