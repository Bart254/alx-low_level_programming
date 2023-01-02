#include "main.h"

/**
 * wildcmp - checks if strings are the same
 * @s1: first string
 * @s2: second string
 * The program checks if elements of a string are similar
 * string 2 may contain the asterik wildcard(*) so that must also be considered
 * Return: 0 if strings aren't similar, 1 if they are
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			wildcmp(s1, s2 + 1);
		if (*s1 == '\0' && *(s2 + 1) != '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}

