#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size);
/**
 * _calloc - assigns memory and initializes every element with 0
 * @nmeb: number of member
 * @size: size of member
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int e = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
			return (NULL);
	while (e < (nmemb * size))
	{
		ptr[e] = 0;
		e++;
	}
	return (ptr);
}
