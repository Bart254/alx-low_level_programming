#include "main.h"
#include <stdio.h>

/**
 * main - tests code
 * Return: Always 0
 */
int main(void)
{
	const char b[] = {'1', '0', '1', '1', '1', '1', '1', '0'};
	unsigned int n;
	unsigned long int ln;

	n = binary_to_uint(b);
	printf("Binary: %s\nNumber:%u\n", b, n);
	fflush(stdout);
	ln = 0;
	printf("Number: %lu\nBinary: ", ln);
	fflush(stdout);
	print_binary(ln);
	printf("\n");
	return (0);
}

