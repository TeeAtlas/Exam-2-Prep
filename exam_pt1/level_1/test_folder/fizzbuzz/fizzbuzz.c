#include <unistd.h>

void ft_putnum(int n)
{
	char str[10] = "0123456789";
	if (n > 9)
		ft_putnum(n / 10);
	write(1, &str[n % 10], 1);
}

int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
	{
		while(i <= 100)
		{
			if(i % 15 == 0)
				write(1, "fizzbuzz", 8);
			else if(i % 3 == 0)
				write(1, "fizz", 4);
			else if(i % 4 == 0)
				write(1, "buzz", 4);
			else
				ft_putnum(i);
			i++;
			write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}