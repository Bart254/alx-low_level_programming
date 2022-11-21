#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all types of variables
 * @format: format of variables entry
 * (...)?: passed arguments
 */
void print_all(const char *const format, ...)
{
	const char *const s = format;
	va_list ap;
	int e = 0;

	va_start(ap, format);
	while (*(format + e) != '\0')
	{
		switch (*(format + e))
		{
			case ('f'):
				printf("%f", va_arg(ap, double));
				break;
			case ('i'):
				printf("%d", va_arg(ap, int));
				break;
			case ('c'):
				printf("%c", va_arg(ap, int));
				break;
			case ('s'):
				printf("%s", va_arg(ap, char*));
				break;
			default:
				break;
		}
		if (*(s + e) == 'f' || *(s + e) == 'i' || *(s + e) == 'c' || *(s + e) == 's')
		{
			if (*(format + e + 1) != '\0')
				printf(", ");
		}
		e++;
	}
	va_end(ap);
	printf("\n");
}


