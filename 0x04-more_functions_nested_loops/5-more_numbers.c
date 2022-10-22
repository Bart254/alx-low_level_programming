#include "main.h"
/**
* more_numbers - Prints 0 to 14 10 times
*/
void more_numbers(void)
{
	int digit, times;

	for (times = 0; times < 10; times++)
	{
	for (digit = 0; digit < 15; digit++)
	{
	if (digit > 9)
	{
	_putchar(digit / 10 + '0');
	}

	_putchar(digit % 10 + '0');
	}
	_putchar('\n');
	}
}
