#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intigers
 * @min: min value
 * @max: max value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int length;
	int i;

	if (min > max)
		return (NULL);

	length = max - min;
	ptr = malloc(sizeof(int) * (length + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = min; min <= max; i++)
		ptr[i] = min++;
	return (ptr);

}
