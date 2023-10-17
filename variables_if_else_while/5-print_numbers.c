#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single_digit = 0;

	while (single_digit < 10)
	{
		printf("%d", single_digit);
		single_digit++;
	}
	putchar('\n');
	return (0);
}
