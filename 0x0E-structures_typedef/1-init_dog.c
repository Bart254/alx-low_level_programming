#include "dog.h"

/**
 * init_dog - initialiazes a dog structure
 * @d: the structure
 * @name: dog name
 * @age: dog age
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;

	d->age = age;

	d->owner = owner;
}
