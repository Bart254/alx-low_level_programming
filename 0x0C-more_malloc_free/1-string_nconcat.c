#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates the n strings
 * @s1: destination
 * @s2: source
 * @n: number of bytes
 *
 * Return: pointer to new memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int ls1 = 0, ls2 = 0, e = 0, i;

	/**
	 * determining sizes of the strings
	 * this will guide on the size of memory to be allocated
	 */
	for (i = 0; s1 != NULL && *(s1 + i); i++)
		ls1++;
	for (i = 0; s2 != NULL && *(s2 + i); i++)
		ls2++;
	s3 = malloc((ls1 + ls2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	/* fill in values of s1 */
	for (i = 0; s1 != NULL && *(s1 + i); i++, e++)
		s3[e] = *(s1 + i);
	/* fill in values of s2 but not more than n */
	for (i = 0; (s2 != NULL && *(s2 + i)) && n; n--, i++, e++)
	{
		s3[e] = *(s2 + i);
	}
	s3[e] = '\0';
	return (s3);
}
