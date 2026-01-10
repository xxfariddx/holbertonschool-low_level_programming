#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - Struct to map format tokens to functions
 * @symbol: The format character (c, i, f, s)
 * @print: Pointer to the function that prints that type
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

void print_all(const char * const format, ...);

#endif