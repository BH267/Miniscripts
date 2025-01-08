#include <stdlib.h>

size_t	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char    *ft_strdup(char *src)
{
	int	i;
	char	*dup;

	dup = malloc(strlen(src) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
