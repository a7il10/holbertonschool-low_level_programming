#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: the first argument
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...);

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list add;

	va_start(add, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
