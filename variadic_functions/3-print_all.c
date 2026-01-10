#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/* Helper function prototypes */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";

	typedef struct printer
	{
		char c;
		void (*f)(va_list);
	} printer_t;

	printer_t p[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].c)
		{
			while (format[i] == p[j].c)
			{
				printf("%s", sep);
				sep = ", ";
				p[j].f(args);
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

/* Helper functions */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
