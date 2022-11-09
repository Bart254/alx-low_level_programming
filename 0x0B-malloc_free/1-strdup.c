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

	int i = 0;

	dup = (char *) malloc(sizeof(str));

	for (; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
