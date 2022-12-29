/**
 * _root - calculates the root of a number
 * @n: number
 * @odd: odd number
 * The program uses repeated subtraction to compute square roots
 * Return: root
 */
int _root(int n, int odd)
{
	int r;

	r = n - odd;
	if (r == 0)
		return (1);
	else if (r < 0)
		return (0);
	return (1 + _root(r, odd + 2));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * The program only returns the natural square roots of numbers
 * Return: square root if found, -1 if root not found
 */
int _sqrt_recursion(int n)
{
	int root;

	root = _root(n, 1);
	if (root * root != n)
		return (-1);
	return (root);
}

