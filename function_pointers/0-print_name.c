#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - print a name
 * @name: name to be prented
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
