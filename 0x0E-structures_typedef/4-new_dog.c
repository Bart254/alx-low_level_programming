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
	if (name == NULL)
		ptr->name = NULL;
	else
	{
		ptr->name = malloc(strlen(name) + 1);
		if (ptr->name == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr->name = strcpy(ptr->name, name);
	}
	ptr->age = age;
	if (owner == NULL)
		ptr->owner = NULL;
	else
	{
		ptr->owner = malloc(strlen(owner) + 1);
		if (ptr->owner == NULL)
		{
			free(ptr->name);
			free(ptr);
			return (NULL);
		}
		ptr->owner = strcpy(ptr->owner, owner);
	}

	return (ptr);
}
