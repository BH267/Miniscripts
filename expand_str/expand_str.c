#include <unistd.h>

void	put_char(int c)
{
	write(1, &c, 1);
}

int	put_word(char *str, int i)
{
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
	{
		put_char(str[i]);
		i++;
	}
	return i;
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
		return (put_char('\n'), 0);
	i = 0;
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	while (av[1][i])
	{
		i = put_word(&av[1][0], i);
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		if (av[1][i])
			write(1, "   ", 3);
	}
	put_char('\n');
}
