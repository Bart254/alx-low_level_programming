#include "main.h"

/**
 * rot13 - rotates a number by 13 places
 * @s: string being rotated
 *
 * The below program puts the 13th letter from the alphabet in the string
 * It does not change special characters
 *
 * Return: Altered string values
 */
char *rot13(char *s)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		for (; (*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z');)
		{
			if ((*p > 'M' && *p < 'a') || (*p > 'm'))
			{
				*p -= 13;
				break;
			}
			*p += 13;
		}
	}
	return (s);
}

