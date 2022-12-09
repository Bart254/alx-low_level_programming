#include "main.h"

/**
 *  void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
 *  _realloc - reallocates memory
 *  @ptr: pointer to previous memory
 *  @old_size: size of previous memory
 *  @new_size: size of new memory to be created
 *
 *  Return: pointer to new memory
 */
 void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		p = malloc(new_size);
	else if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	else
		p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (p);
}
