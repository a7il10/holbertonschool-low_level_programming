#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be prented
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
		f(name);
}
