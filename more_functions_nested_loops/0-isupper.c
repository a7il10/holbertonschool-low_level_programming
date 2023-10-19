#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character
 * @c: first int
 * Return: if c is uppercase Return(1)
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
