#include "main.h"

void print_diagonal(int n)
{
	int i;
	int j;
	char character = '/';

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
				_putchar (character);

			else
				_putchar (' ');
		}
		_putchar ('\n');
	}
}
