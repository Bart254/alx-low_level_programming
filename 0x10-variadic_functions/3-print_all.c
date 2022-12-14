#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all types of variables
 * @format: format of variables entry
 * (...)?: passed arguments
 */
void print_all(const char *const format, ...)
{
	char *string;
	int i = 0;
	const char *const s = format;
	va_list ap;
	int e = 0;

	va_start(ap, format);
	while (*(format + e) != '\0')
	{
		switch (*(s + e))
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
				string = va_arg(ap, char*);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				i = 1;
				break;
		}
		if ((i == 0) && (*(s + e + 1) != '\0'))
			printf(", ");
		i = 0;
		e++;
	}
	va_end(ap);
	printf("\n");
}


