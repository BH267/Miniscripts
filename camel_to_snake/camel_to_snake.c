#include <unistd.h>
#include <stdlib.h>

void	put_char(int c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ('A' <= av[1][i] && av[1][i] <= 'Z')
			{
				put_char('_');
				put_char(av[1][i] + 32);
			}
			else
				put_char(av[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
}
