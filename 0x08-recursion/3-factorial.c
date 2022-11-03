/**
 * factorial - returns factorial of integer
 * @n: number
 * Return: The solution to its factorial
 */
int factorial(int n)
{
	if (n == 0)
	return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
