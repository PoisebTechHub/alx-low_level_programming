#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - create a function that initializes a variable type
 * struct dog
 * @d: pointer to struct dog to be initialized
 * @name: name to be initialized
 * @age: age of struct dog
 * @owner: owner of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
