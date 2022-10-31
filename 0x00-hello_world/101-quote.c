#include "main.h"
/**
 * main - Prints a quote
 * Return: 1(Successful)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (*quote != '\0')
	{
		_putchar(*quote);
		quote++;
	}
	
	_putchar('\n');
	return (1);
}
