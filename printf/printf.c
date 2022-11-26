#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - a copy of the standard printf function
 * @format : string format
 * (...)?: optional arguments
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char *str;
	char c;
	int n = 0;;;

	va_start(ap, format);
	for (; *format != '\0'; format++)
	{
		if ( *(format) == '%')
		{
			if (*(format + 1) == 's')
			{
				str = va_arg(ap, char*);
				while (*str != '\0')
				{
					putchar(*str);
					str++;
				}
				n += strlen(str);
			}
			if (*(format + 1) == 'c')
			{
				c = va_arg(ap, char);
				putchar(c);
				n++;
			}
		}
		else
		{
			putchar(*format);
			n++;
		}
	}
	va_end(ap);
	return (n);
}

