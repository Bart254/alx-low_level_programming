/**
 * clear_bit - sets 0 in index
 * @n: pointer to number
 * @index: index to be set to 0
 * Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cp, new_n;
	char bits[65];
	short int l, ls, e;

	for (l = 63, cp = *n; l >= 0; l--)
	{
		if (cp)
		{
			bits[l] = cp % 2 + '0';
			cp /= 2;
		}
		else
			bits[l] = '0';
	}
	if (index > 63)
		return (-1);
	e = 63 - index;
	bits[e] = '0';
	for (l = 63, ls = 0, new_n = 0; l >= 0; ls++, l--)
	{
		if (bits[l] == '1')
			new_n += (1 << ls);
	}
	*n = new_n;
	return (1);
}

