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
	int i;
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
				i = 1;
				break;
			case ('i'):
				printf("%d", va_arg(ap, int));
				i = 1;
				break;
			case ('c'):
				printf("%c", va_arg(ap, int));
				i = 1;
				break;
			case ('s'):
				i = 1;
				string = va_arg(ap, char*);
				if (string == NULL)
					printf("(nil)");
				else
					printf("%s", string);
				break;
			default:
				i = 0;
				break;
		}
		if ((i == 1) && (*(s + e + 1) != '\0')) 
			printf(", ");
		e++;
	}
	va_end(ap);
	printf("\n");
}


