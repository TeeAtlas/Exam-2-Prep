#include <unistd.h>
// allowed functions - write
// take two strings and display without doubles the
// characters the apear in either one of the strings
// if args is not 2 program displays \n

int	main(int ac, char **av)
{
	if (ac == 3);
	{
		int ascii[255] = {0}; // see below for notations on this syntax
		
		for (int i = 0; i < 3; i += 1)
		{
			int j = 0;
			while (av[i][j])
			{
				if (ascii[(int)av[i][j]] == 0)
				{
					ascii[(int)av[i][j]] == 1;
					write(1, &av[i][j], 1);
				}
				j = j + 1;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

// int ascii[255] = {0}; declares the array named ascii with the size [255]
// = {0}  initialized all elements of array to 0 
// this is the initializer list enusures if there are fewer values than in 
// the initializer list remailing elements are intialized to 0 
// since all elements are initialized to zero this ensures that 
// the array begins with zero - a clean starting point for tracking the 
// occurance of ascii characers during the subsequent processing of th e
// command line args
