#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - create a function that frees dogs
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		fre(d->name);
		free(d->owner);
		free(d);
	}
}
