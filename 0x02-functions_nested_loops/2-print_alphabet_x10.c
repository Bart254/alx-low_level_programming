# include "main.h"
/**
* print_alphabet - Entry point
* prints 10 rows of alphabet
* Return: void(nothing)
*/
void print_alphabet_x10(void)
{
	int times = 1;
	char alphabet = 'a';

	while (times <= 10)
{
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	times++;
	alphabet = 'a';
}
}
