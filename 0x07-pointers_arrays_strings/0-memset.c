#include<string.h>

/**
 * _memset - Sets the first n characters to b
 * @b: The character being reset to
 * @n: number of characters to be reset
 * @s: Pointer to the string
 * Return: The new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
