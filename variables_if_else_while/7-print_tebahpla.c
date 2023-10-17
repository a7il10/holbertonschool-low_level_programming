#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char invert;

	for (invert = 'z'; invert >= 'a'; invert--)
	{
		putchar(invert);
	}

	putchar ('\n');
	return (0);
}
