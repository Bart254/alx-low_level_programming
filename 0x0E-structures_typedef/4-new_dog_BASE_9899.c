#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	if (name)
		ptr->name = strdup(name);
	else
		ptr->name = NULL;
	ptr->age = age;
	if (owner)
		ptr->owner = strdup(owner);
	else
		ptr->owner = NULL;
	return (ptr);
}
