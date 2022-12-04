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
	int i = 0, e,  size = 0;
	/* checks if str is null */
	if (str == NULL)
		return (NULL);
	while (*(str + i))
	{
		size++;
		i++;
	}

	dup = malloc((size + 1) * sizeof(char));
	/* checks if malloc fails*/
	if (dup == NULL)
		return (NULL);
	/* fills the new memory with characters in str */
	for (e = 0; e < size; e++)
		dup[e] = str[e];
	return (dup);
}
