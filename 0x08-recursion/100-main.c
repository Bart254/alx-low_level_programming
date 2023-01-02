#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - tests my palindrome code
 * Return: 0 if successful
 */
int main(void)
{
	int r, e;
	char *buffer = NULL;
	size_t size = 0;

	if (getline(&buffer, &size, stdin) == -1)
	{
		printf("Failed to read\n");
		exit(98);
	}
	for (e = 0; buffer[e]; e++)
	{
		if (buffer[e] == '\n')
			buffer[e] = '\0';
	}
	r = is_palindrome(buffer);
	printf("%d\n", r);
	return (0);
}

