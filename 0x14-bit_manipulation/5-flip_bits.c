/**
 * flip_bits - traverses bits
 * @n: number1
 * @m: number2
 *
 * The program traverses the bits of two numbers and
 * returns the no of bits to be flipped to get one number
 * from the other
 * Return: no of bits to be flippped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char bits_m[65], bits_n[65];
	unsigned int flips, r;
	unsigned long int cp, q;
	short int e;

	for (cp = m, e = 63; e >= 0; e--)
	{
		if (cp)
		{
			q = cp >> 1;
			r = cp - (q << 1);
			cp = q;
			bits_m[e] = r + '0';
		}
		else
			bits_m[e] = '0';
	}
	for (cp = n, e = 63; e >= 0; e--)
	{
		if (cp)
		{
			q = cp >> 1;
			r = cp - (q << 1);
			cp = q;
			bits_n[e] = r + '0';
		}
		else
			bits_n[e] = '0';
	}
	for (e = 63, flips = 0; e >= 0; e--)
	{
		if (bits_m[e] != bits_n[e])
			flips++;
	}
	return (flips);
}

