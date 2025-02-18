#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	nbr;
	int	i;

	if (ac != 2)
		return (printf("\n"), 0);
	nbr = atoi(&av[1][0]);
	i = 2;
	while (nbr > 1)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			nbr /= i;
			if (nbr != 1)
				printf("*");
			i = 1;
		}
		i++;
	}
	printf("\n");
}
