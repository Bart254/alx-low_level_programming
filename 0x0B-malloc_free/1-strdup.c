#include <string.h>
#include <stdlib.h>

/**
 * _strdup- duplicates a string
 * @str: string being duplicated
 * Return: string containig the duplicate
 */
char *_strdup(char *str)
{
	char *dup;

	dup = malloc(sizeof(str));

	dup = strdup(str);
	return (dup);
}
