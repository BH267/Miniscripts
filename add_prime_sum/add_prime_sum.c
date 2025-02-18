#include <unistd.h>


int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (str[i] == '+')
		i++;
	while(str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res;
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n <=  1)
		return 0;
	if (n == 2)
		return 1;
	while (i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void	put_char(int c)
{
	write(1, &c, 1);
}

void	put_nbr(int n)
{
	if (n >= 10)
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
	if (n < 10)
		put_char(n + '0');
}

int	main(int ac, char **av)
{
	int	sum;
	int	n;
	int	i;

	i = 2;
	sum = 0;
	if (!av[1])
		return(write(1,"0\n",2),0);
	n = ft_atoi(&av[1][0]);
	if (ac == 2 && av[1][0] != '-')
	{
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		put_nbr(sum);
		put_char('\n');
		return 0;
	}
	write(1, "0\n", 2);
}
