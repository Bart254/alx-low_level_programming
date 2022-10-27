#include <string.h>

/**
 * _strncat - concatenates a limited number of elements from a string
 * @dest: Destination
 * @src: String being concatenated
 *@n: number of characters to add
 * Return: Final form of the concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
