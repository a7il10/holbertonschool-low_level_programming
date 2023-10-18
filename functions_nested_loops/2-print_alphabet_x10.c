#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	char letter;
	int times;


	for (times = 0; times <= 9; times++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar (letter);
		}

		_putchar ('\n');

	}

}
