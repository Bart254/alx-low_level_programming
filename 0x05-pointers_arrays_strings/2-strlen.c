#include <string.h>
/**
 * _strlen - Returns the length of a string literal
 * @s: The string being passed
 * Return: The length of the passed string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
