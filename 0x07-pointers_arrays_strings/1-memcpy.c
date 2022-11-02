#include <string.h>

/**
 * _memcpy - copies an area in memory
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: Characters string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
