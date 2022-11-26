#include <string.h>

/**
 * leet -encodes a string into 1337
 * @s: String passed to it
 *
 * Return: string with leet code
 */
char *leet(char *s)
{
	char leet[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {4, 3, 0, 7, 1};
	int e = 0;
	unsigned int e_leet;

	/**
	 * This part of the code moves through elements of string
	 * elements are observed if similar to any leet character
	 * the code is then replaces the character
	 */
	for (; s[e]; e++)
	{
		for (e_leet = 0; e_leet < strlen(leet); e_leet++)
		{
			if (s[e] == leet[e_leet] || s[e] == leet[e_leet] - 32)
				s[e] = code[e_leet] + '0';
		}
	}
	return (s);
}
