#include "3-calc.h"

/**
 * op_add - adds operands
 * @a: first operand
 * @b: second operand
 * Return: sum of operand
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts operands
 * @a: first operand
 * @b: second operand
 * Return: diff of operand
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies operands
 * @a: first operand
 * @b: second operand
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides operands
 * @a: first operand
 * @b: second operand
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of division
 * @a: first operand
 * @b: second operand
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

