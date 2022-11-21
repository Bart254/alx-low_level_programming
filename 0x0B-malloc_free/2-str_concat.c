#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int e1, e2,ls1, ls2;
	char *s3;

	ls1 = strlen(s1);
	ls2 = strlen(s2);
	s3 = malloc((ls1 + ls2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	for (e1 = 0; e1 < ls1; e1++)
	{
		if (s1 == NULL)
			break;
		else
			s3[e1] = s1[e1];
	}
	for (e2 = 0; e2 < ls2; e1++, e2++)
	{
		if (s2 == NULL)
			break;
		else
			s3[e1] = s2[e2];
	}
	return (s3);
}
