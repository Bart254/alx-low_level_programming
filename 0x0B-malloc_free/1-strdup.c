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

	int i, size;

	size = strlen(str) + 1;

	dup = (char *) malloc(size * sizeof(char));

	for (; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
