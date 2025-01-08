#include <unistd.h>

size_t	_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

void	_putchar(int c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	size_t	len;

	if (ac != 2)
		return (_putchar('\n'), 0);
	len = _strlen(&av[1][0]);
	while (len > 0)
		_putchar(av[1][--len]);
	_putchar('\n');
}
