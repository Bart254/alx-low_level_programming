#include <ctype.h>
/**
* _isdigit - checks a digit
* @c: the argument
* Return: I if digit, 0 if not a digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
