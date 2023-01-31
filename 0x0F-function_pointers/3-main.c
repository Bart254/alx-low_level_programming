#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - tests code
 * @ac: number of args
 * @av: sting of args
 * Return: 0 if successful
 */
int main(int ac, char **av)
{
	int a, b, result;
	op_t fun;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	fun.op = av[2];
	fun.f = get_op_func(fun.op);
	if (fun.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((fun.op[0] == '/' || fun.op[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = fun.f(a, b);
	printf("%d\n", result);
	return (0);
}
