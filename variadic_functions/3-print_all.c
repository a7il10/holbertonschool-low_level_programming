#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	long unsigned int counter = 0;
	va_list args;

	va_start(args, format);
	if (format)
	{
	while (format[counter] != '\0')
	{
		switch (format[counter])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;

			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;

			case 's':
				s = va_arg(args, char*);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;

			default:
				counter++;
				continue;
		}
		if (counter < strlen(format) - 1)
		{
			printf(", ");
		}
		counter++;
	}
	printf("\n");
}
}

