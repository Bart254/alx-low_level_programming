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
	int bytes;

	unsigned long a, b;

	char *s3;

	bytes = (strlen(s1) + strlen(s2) + 1);

	s3 = malloc(bytes * sizeof(char));

	for (a = 0; a < strlen(s1); a++)
		s3[a] = s1[a];
	for (b = 0; b < strlen(s2); b++)
	{
		s3[a] = s2[b];
		a++;
	}
	return (s3);
}
