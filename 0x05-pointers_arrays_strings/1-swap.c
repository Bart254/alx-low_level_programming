/**
 * swap_int - Swaps the values of two integers
 * @a: The first int
 * @b: Second pointer
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
