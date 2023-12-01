#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
