#include "main.h"
#include <string.h>

/**
 * rev_string - Prints the reverse of words
 * @s: The string supplied
 */
void rev_string(char *s)
{
	char c;

	int i = 0;

	int e = strlen(s) - 1;

	while (i != e)
	{
		c = s[i];

		s[i] = s[e];
		s[e] = c;
		e--;
		i++;
	}
}
