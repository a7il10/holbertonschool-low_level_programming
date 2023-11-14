#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name of the dog
 *
 * Return: new dog
 * Description: You have to store a copy of name and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sec_dog = malloc(sizeof(dog_t));
	char *sec_name = malloc(strlen(name) + 1);
	char *sec_owner = malloc(strlen(owner) + 1);

	if (sec_dog == NULL || sec_name == NULL || sec_owner == NULL)
	{
		free(sec_dog);
		free(sec_name);
		free(sec_owner);
		return (NULL);
	}
	strcpy(sec_name, name);
	strcpy(sec_owner, owner);
	sec_dog->name = sec_name;
	sec_dog->owner = sec_owner;
	sec_dog->age = age;
	return (sec_dog);
}
