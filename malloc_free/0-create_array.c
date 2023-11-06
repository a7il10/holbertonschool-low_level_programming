#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of memory to be allocated
 * @c: first char
 * Return: ar
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	ar[i] = c;
	}
	return (ar);
}
