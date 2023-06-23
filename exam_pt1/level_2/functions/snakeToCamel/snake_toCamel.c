#include <unistd.h>

// go through string looking for an '_' char and 
// ignore it and replace following letter with the 
// it's upperCase version 
// you need an ft_putchar
// and toUpper

int	main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		 while(av[1][i] != '\0')
		 {
			if (av[1][i] == '_')
			{
				i++;
				av[1][i] -= 32;
			}
			write(1, &av[1][i], 1);
			i++; 
		 }
	}
	write(1, "\n", 1);
	return 0;
}
