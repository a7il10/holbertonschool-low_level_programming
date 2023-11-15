#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: return the matched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int result;
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

	if (result != 0)
		return (i);
	}
	return (-1);
}
