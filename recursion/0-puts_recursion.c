#include "main.h"

/**
 * _puts_recursion - cgsdvfhjfd
 * @s: shgfdhf
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}
