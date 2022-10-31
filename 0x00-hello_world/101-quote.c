/**
 * main - Prints a quote
 * Return: 1(Successful)
 */
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
