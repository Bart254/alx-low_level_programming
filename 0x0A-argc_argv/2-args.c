#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: counts number of arguments
 * @argv: array pointer
 * Return: 0(Successful)
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
