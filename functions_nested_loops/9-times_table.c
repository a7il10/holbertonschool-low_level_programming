#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;

			if (mul >= 10)

			_putchar (mul / 10 + '0');
			_putchar (mul % 10 + '0');


			if (j < 9)
			{
				_putchar (',');
			}

			if (i * (j + 1) < 10 && j != 9)
			{
				_putchar (' ');
				_putchar (' ');

			}

			else if (j != 9)
			{
				_putchar (' ');
			}

		}
		_putchar ('\n');
	}
}
