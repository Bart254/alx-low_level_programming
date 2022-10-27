#include <string.h>

/**
 * _strncpy - Copies strings into another
 * @dest: Where copied to
 * @src: What is being copied
 * @n: Number of elements being copied
 * Return: The product
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
