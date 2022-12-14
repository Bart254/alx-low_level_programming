#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog structure
 * @d: header of the structure
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
