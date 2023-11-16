#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separates the strings with a comma
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *current_string;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		current_string = va_arg(args, char*);
		if (current_string == NULL)
			printf("(nil)");
		else
			printf("%s", current_string);
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
