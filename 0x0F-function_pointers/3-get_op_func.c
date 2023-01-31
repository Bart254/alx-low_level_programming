#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - gets the function to be operated
 * @s: string containing operator
 * Return: function to be executed
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	i = 0;
	while (s && i < 5)
	{
		if (s[0] == ops[i].op[0] && strlen(s) == 1)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

