#include <unistd.h>
#include <stdlib.h>

void	put_char(int c)
{
	write (1, &c, 1);
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
	char	*s;
	char	*fw;
	int	i;

	s = &av[1][0];
	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i] && (s[i] != ' ' && s[i] != '\t'))
		i++;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i])
	{
		i = put_word(s, i);
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		put_char(' ');
	}
	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	put_word(s, i);
	put_char('\n');

