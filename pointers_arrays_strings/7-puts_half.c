#include "main.h"

/**
 * puts_half - jshcjn
 * @str: sjbejbf
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int start_position;

	while (str[len] != '\0')
		len++;
	start_position = (len + 1) / 2;

	for (i = start_position; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');


}
