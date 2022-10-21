#include "main.h"
/**
* print_numbers - prints 0 to 9
*/
void print_numbers(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
	_putchar(digit + '0');
	}

	_putchar('\n');
}
