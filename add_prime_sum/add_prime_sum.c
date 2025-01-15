#include <unistd.h>

int	ft_atoi(char *nbr)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	if (*nbr == '-')
		return (-1);
	while (nbr[i])
		n = n * 10 + (nbr[i++] - '0');
	return (n);
}

void	put_char(int c)
{
	write(1, &c, 1);
}

void	put_nbr(int nbr)
{
	if (nbr < 10)
		put_char(nbr + '0');
	else
	{
		put_nbr(nbr/10);
		put_nbr(nbr%10);
	}
}

int	isprime(int n)
{
	int	i;
	
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	i = 1;
	while (++i < n)
		if (n % i == 0)
			return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int	nbr;
	int	sum;
	int 	i;

	if (ac != 2)
		return(write(1, "0\n", 2), 0);
	nbr = ft_atoi(&av[1][0]);
	if (nbr < 0)
		return(write(1, "0\n", 2), 0);
	i = -1;
	sum = nbr;
	while (++i < nbr)
		if (isprime(i))
			sum += i;
	put_nbr(sum);
	put_char('\n');
}
