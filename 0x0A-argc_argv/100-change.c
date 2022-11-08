#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints change
 * @argc: number of arguments
 * @argv: arg vector
 * Return: 0(successful), 1(args > 2)
 */
int main(int argc, char *argv[])
{
	int cents, coins, c, d;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		cents = atoi(argv[1]);
		c = 0;
		for (d = 25; d > 0; d--)
		{
		if (d == 1 || d == 2 || d == 5 || d == 10 || d == 25)
		{
		coins = cents / d;
		c += coins;
		cents %= d;
		}
		}
	}
	printf("%d\n", c);
	return (0);
}
