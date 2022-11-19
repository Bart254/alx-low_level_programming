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
	/* checks if str is null */
	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	dup = malloc(size * sizeof(char));

	/* checks if malloc fails*/
	if (dup == NULL)
		return (NULL);
	/* fills the new memory with characters in str */
	for (i = 0; i < size; i++)
		dup[i] = str[i];
	return (dup);
}
