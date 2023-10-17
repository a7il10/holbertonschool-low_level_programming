#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single_d;

	for (single_d = 0; single_d < 10; single_d++)
	{
		putchar (single_d + '0');
	}

	putchar ('\n');
	return (0);
}
