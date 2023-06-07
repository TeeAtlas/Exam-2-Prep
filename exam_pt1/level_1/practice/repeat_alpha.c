#include <unistd.h>

void	ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

void	repeat_alpha(int ac, char *str)
{
	if (ac != 2)
		write(1, "\n", 1);
	else 
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				ft_putchar(*str, *str + 1 - 'a');
			else if (*str >= 'A' && *str <= 'Z')
				ft_putchar(*str, *str + 1 - 'A');
			else
				write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	repeat_alpha(ac, av[1]);
	return 0;
}