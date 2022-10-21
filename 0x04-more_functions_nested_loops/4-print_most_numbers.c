#include "main.h"
/**
* print_most_numbers - Does not print 2 and 4
*/
void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
	if (digit == 2 || digit == 4)
	continue;
	_putchar(digit + '0');
	}

	_putchar('\n');
}
