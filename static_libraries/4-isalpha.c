#include "main.h"
#include <ctype.h>

/**
 * _isalpha - it takes an argument c of value integer
 * @c: character
 * Return: 1 if the character
 * is a letter and returns 0 if not
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
