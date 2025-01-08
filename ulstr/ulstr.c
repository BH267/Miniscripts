#include <unistd.h>

void	put_char(int c)
{	write(1, &c, 1);	}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
		return (put_char('\n'), 0);
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			put_char(av[1][i] + 32);
		else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			put_char(av[1][i] - 32);
		else
			put_char(av[1][i]);
		i++;
	}
	put_char('\n');
}
