#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int caps = 1;
	if (ac > 1) //allowes for many args
	{
		while(av[1][i] != '\0')
		{
			if(caps && (av[1][i] >= 'a' && av[1][i] <= 'z'))
			{
				av[1][i] -= 32; // converts lower to upper
				write(1, &av[1][i], 1); //print caps letter
				caps = 0; // disable further caps until next word
			}
			else if(av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
			{
				write(1, &av[1][i], 1); // print space or tab char
				caps = 1; // enable caps again for next word
			}
			else
				write(1, &av[1][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}