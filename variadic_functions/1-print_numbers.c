#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the separator between numbers
 * @n: number of integers
 * Return: printed numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(args, int));

				if (separator != NULL && i != n)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
