#include <stdarg.h>

/**
 * sum_them_all - adds passed variables
 * @n: number of variables passed
 * (...)? optional arguments
 *
 * Return: sum of args passed
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (sum = 0, i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}


