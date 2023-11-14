#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @dog_t - struct
 * @d: variable
 *
 * Description: function that frees the memory allocation
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
