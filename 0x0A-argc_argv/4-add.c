#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds integers passed
 * @argc: no of args
 * @argv: array to args
 * Return: 0(successful), 1(non int values )
 */
int main(int argc, char *argv[])
{
	char *s;

	int e, sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (e = 1, sum = 0; e < argc; e++)
		{
			s = argv[e];
			for (; *s != '\0'; s++)
			{
			if (!(*s >= '0' && *s <= '9'))
			{
			printf("Error\n");
			return (1);
			}
			}
			sum += atoi(argv[e]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
