#include <string.h>

/**
 * _strcpy - copies strings
 * @dest: destination
 * @src: source
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int unsigned e = 0;

	while (e <= strlen(src))
	{
		*(dest + e) = *(src + e);
		e++;
	}

	return (dest);
}
