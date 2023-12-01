#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: position index
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value = (n >> index) & 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (value);
}
