#include <unistd.h>

int main(int ac, char **av)
{
	int  i = 0;
	if (ac == 4)
	{
		if(av[2][i] >= 'a' && av[2][i] <= 'z' || av[2][i] >= 'A' && av[2][i] <= 'Z' || av[2][i] != '\0')
			if(av[3][i] >= 'a' && av[3][i] <= 'z' || av[3][i] >= 'A' && av[3][i] <= 'Z' || av[3][i] != '\0')
			while(av[1][i] != '\0')
			{
				if(av[1][i] == av[2][0])
					av[1][i] = av[3][0];
				write(1, &av[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return 0;
}