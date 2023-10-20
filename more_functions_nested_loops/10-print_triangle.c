#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * i: first int
 * j: second int
 * Return: return void
 */

void print_triangle(int size)
{
	int i;
	int j;
	char character = '#';

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar (' ');
			}
			else
			{
				_putchar(character);
			}
		}
		_putchar ('\n');
	}
}
