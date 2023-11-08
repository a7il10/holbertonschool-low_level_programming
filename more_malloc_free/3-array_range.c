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
	int length = 0;
	int i;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);

	if (ptr == NULL)
		return (NULL);

	for (i = min; min <= max; i++)
		ptr[i] = min++;
	return (ptr);

}
