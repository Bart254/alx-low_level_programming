#include <stdio.h>

/**
* main - Entry point
* print base 16
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;
	char alphabets = 'a';

	while (digit < 10)
	{
	putchar(digit + '0');
	digit++;
	}
	while (alphabets <= 'f')
	{
	putchar(alphabets);
	alphabets++;
	}
	putchar('\n');
	return (0);
}
