#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: stores number of arguments
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	argc--;
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
