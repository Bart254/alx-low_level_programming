#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int ls1 = 0, ls2 = 0;
	int i = 0;
	int es1 = 0, es2 = 0;
	char *s3;

	while (s1 != NULL && *(s1 + es1))
	{
		ls1++;
		es1++;
	}
	while (s2 != NULL && *(s2 + es2))
	{
		ls2++;
		es2++;
	}
	s3 = malloc((ls1 + ls2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			s3[i] = *s1;
			i++;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			s3[i] = *s2;
			i++;
			s2++;
		}
	}
	return (s3);
}
