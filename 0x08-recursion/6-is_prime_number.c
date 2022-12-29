/**
 * _checker - computes number to find if they are prime
 * @n: number
 * @d: divisor
 * Return: 1 if prime, 0 if not
 */
int _checker(int n, int d)
{
	if (n == 1)
		return (0);
	if (d > (n / 2))
		return (1);
	else if (n % d == 0)
		return (0);
	return (_checker(n, d + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if number is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = 0 - n;
	return (_checker(n, 2));
}

