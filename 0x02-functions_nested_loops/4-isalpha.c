#include <ctype.h>
/**
* _isalpha - Tells if data is a letter
* @c: accepts argument
* Return: 1 if true 0 if false
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
	if (c > 90 && c < 97)
	{
	return (0);
	}
	else
	{
	return (1);
	}
	}
	else
	{
	return (0);
	}
}
