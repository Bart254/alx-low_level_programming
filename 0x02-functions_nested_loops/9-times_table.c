#include "main.h"
/**
* times_table - Prints the 9 table
*/
void times_table(void)
{
	int x, y, result;

	for (x = 0, y = 0; x < 10; x++, y = 0)
	{
	while (y < 10)
	{
	result = x * y;
	if (result >= 10)
	{
	_putchar(result / 10 + '0');
	_putchar(result % 10 + '0');
	if (y < 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	else
	{
	_putchar(result + '0');
	if (y < 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	}
	y++;
	}
	_putchar('\n');
	}
}
