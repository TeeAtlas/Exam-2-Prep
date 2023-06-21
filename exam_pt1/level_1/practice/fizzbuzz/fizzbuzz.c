// wirte a program that prints 1 - 100
// if multiple of 3 prints fizz
// if multiple of 5 buzz
// if multiple of both fizzbuzz

//important to remember you are working with a numerical string 
// you want to print each number separately followed by a newline
// you need a write number functio
// remember if n  is MORE THAN 9 - recursively goes through function
// you are writing the str so create an integer string
// in main, no need to add whole av[1][i] = you can buuuut too much writing
// easily go through the modulo 15, 5, 3 == 0
// if not dividable simply put the number
// write new line comes after iterating forward




#include <unistd.h>	// we need write function

void	ft_putnum(int n)
{
	char str[10] = "0123456789";
	if(n > 9)
		ft_putnum(n / 10);
	write(1, &str[n % 10], 1);
}

int	main(int ac, char **av)
{
	int i = 1;
	if (ac == 1)
	{	
		while(i <= 100)
		{
			if (i % 15 == 0)
				write(1, "fizzbuzz", 8);
			else if (i % 3 == 0)
				write (1, "fizz", 4);
			else if (i % 5 == 0)
				write (1, "buzz", 4);
			else
				ft_putnum(i);
			i++;
			write (1, "\n", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}