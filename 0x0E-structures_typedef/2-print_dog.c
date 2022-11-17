#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the structure of a dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	if (d->age == '\0')
	{
		;
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}