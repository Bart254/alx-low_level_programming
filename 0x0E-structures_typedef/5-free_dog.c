#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog structure
 * @d: header of the structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
