#include "main.h"
/**
* print_sign - prints sign of number
* @n: accepts int argument
* Return: 0 (number 0) 1 (positive) -1 (negative)
*/
int print_sign(int n)
{
	int i;

	if (n == 0)
	{
	_putchar(0 + '0');
	i = 0;
	}
	else if (n > 0)
	{
	_putchar('+');
	i = 1;
	}
	else if (n < 0)
	{
	_putchar('-');
	i = -1;
	}
	return (i);
}
