char	*minimalizer(const char *str)
{
	int	i;
	char	*s;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			s[i] = str[i] + 32;
			continue;
		}
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	ft_atoi_base(const char *str, int base)
{
	int	fhbase[16];
	int	nbr;
	int	sign;
	int	i;
	char	*bnbr;

	i = 0;
	nbr = 0;
	sign = 1;
	if (base > 16)
		return (0);
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	bnbr = minimalizer(str);
	while (bnbr[i])
	{
		if (bnbr[i] >= 'a' && bnbr[i] <= 'f')
			nbr = nbr * 10 + (bnbr[i] - 'a' + 10);
		else if (bnbr[i] >= '0' && bnbr[i] <= '9')
			nbr = nbr * 10 + str[i] - '0';
		else
			break;
	}
	return (sign * nbr);
}
