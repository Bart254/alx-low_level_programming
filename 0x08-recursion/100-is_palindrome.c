#include <string.h>

/**
 * _checker - compares string elements
 * @str: string passed
 * @e: element address
 * The program compares string elements one at a time
 * This checks if last and first( and equivalent are equal
 * Return: 1 if palindrome, 0 if not
 */
int _checker(char *str, int e)
{
	if (e <= 0)
		return (1);
	else if (*str != str[e])
		return (0);
	return(_checker(str + 1, e - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * A palindrome is a word spelt the same forwards and backwards
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int e;

	if (s == NULL)
		return (0);
	e = strlen(s) - 1;
	if (e <= 0)
		return (1);
	return (_checker(s, e));
}

