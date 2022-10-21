#include "main.h"
/**
* jack_bauer - Prints all minutes of the day
*/
void jack_bauer(void)
{
	int hrs, mins;

	mins = 0;

	for (hrs = 0; hrs < 24; hrs++)
	{
	for (; mins < 60; mins++)
	{
	if (hrs < 10)
	{
	_putchar(0 + '0');
	_putchar(hrs + '0');
	}
	else
	{
	_putchar(hrs / 10 + '0');
	_putchar(hrs % 10 + '0');
	}
	_putchar(':');
	if (mins < 10)
	{
	_putchar(0 + '0');
	_putchar(mins + '0');
	}
	else
	{
	_putchar(mins / 10 + '0');
	_putchar(mins % 10 + '0');
	}
	_putchar('\n');
	}
	mins = 0;
	}
}
