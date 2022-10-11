#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees memory of dog
 * @d: pointer to a dog of type dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
