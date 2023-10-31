#include "main.h"
#include <stdlib.h>

/**
 * _abs - it takes an argument of type in and returns its anbosulte value
 * @n: integer
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}

	else if (n > 0)
	{
		return (n);
	}

	else
	{
		return (0);
	}
}
