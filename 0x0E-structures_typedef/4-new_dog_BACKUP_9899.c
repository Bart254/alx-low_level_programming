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
<<<<<<< HEAD
	ptr->name = malloc(strlen(name) * sizeof(char));
	if (ptr->name == NULL)
		return (NULL);
	ptr->name = strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = malloc(strlen(owner) * sizeof(char));
	if (ptr->owner == NULL)
		return (NULL);
	ptr->owner = strcpy(ptr->owner, owner);
=======
	ptr->name = strdup(name);
	ptr->age = age;
	ptr->owner = strdup(owner);
>>>>>>> parent of b8669a0... Update
	return (ptr);
}
