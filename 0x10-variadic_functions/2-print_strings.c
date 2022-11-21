#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a string of arguments
 * @separator: character(s) separating the strings passed
 * @n: number of strings to be passed
 * (...)?:optional arguments sent
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i == n - 1)
			continue;
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

