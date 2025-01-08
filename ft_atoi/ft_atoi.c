int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[i] < '0' || '9' < str[i])
		return 0;
	while ('0' <= str[i] && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	return (nb * sign);
}
