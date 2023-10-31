#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: first int
 * Return: returns 1 if c is digit
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
