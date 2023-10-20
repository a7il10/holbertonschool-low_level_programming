#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: first int
 * Return: return void
 */

void print_diagonal(int n)
{
	int i;
	int j;
	char character = '\\';

	if (n <= 0)
	{
		_putchar ('\n');
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
				_putchar (character);
			else
				_putchar (' ');
		}
		_putchar ('\n');
	}
}

