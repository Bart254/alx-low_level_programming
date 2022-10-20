#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* print_last_digit - Prints last digit of a number
* @digit: the argument passed
* Return: The last digit
*/
int print_last_digit(int digit)
{
	int last = abs(digit % 10);

	_putchar(last + '0');
	return (last);
}
