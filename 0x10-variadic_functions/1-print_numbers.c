#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers passed to it
 * @separator: what separates the numbers to be printed
 * @n: total number to be printed
 * (...)?: optional arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL || i == n - 1)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
