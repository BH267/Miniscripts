unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bit;
	int	i;

	i = 0;
	while (i < 8)
	{
		bit = bit * 2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
	return (bit);
}
