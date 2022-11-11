#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - assigns b bytes
 * @b: number of bytes
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit (98);
	return (s);
}
