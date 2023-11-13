#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable
 * @dog - structure
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
 *
 * Description: Write a function that initialize a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
