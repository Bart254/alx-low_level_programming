#include <ctype.h>
#include "main.h"
/**
* _isupper - checks uppercase numbers
* @c: the letter passed
* Return: 1 is uppercase, 0 is lowercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
