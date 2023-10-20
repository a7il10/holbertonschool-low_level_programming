#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: returns void
 */

void print_square(int size)
{
	int i;
	int j;
	char character = '#';

	if (size <= 0)
	{
		_putchar ('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar (character);
		}
		_putchar ('\n');
	}
}
