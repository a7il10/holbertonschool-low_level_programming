#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name of datatype
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
 *
 * Description: Define a new type struct dog with the following elements:
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
