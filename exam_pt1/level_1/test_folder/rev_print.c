#include <unistd.h>

void	rev_print(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
			i++;
		while(i >= 1)
		{
			write(1, &av[1][i - 1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	rev_print(ac, av);
	return 0;
}
