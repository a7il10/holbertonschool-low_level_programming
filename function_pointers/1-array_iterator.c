#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate through the array
 * @array: array of int
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
