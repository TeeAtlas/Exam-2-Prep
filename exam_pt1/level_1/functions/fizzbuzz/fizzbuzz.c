/* write program that prints numbers 1 - 100, separated by new line.
if the number is a multiple of 3, prints "fizz", if a multiple of 5 
print "buzz", if both, prints "fizzbuzz"*/

#include <unistd.h>

// void	ft_putnum(int number)
// {
// 	char str[10] = "0123456789";

// 	if (number > 9)
// 		ft_write_number(number / 10);
// 	write(1, &str[number % 10], 1);
// }

void	ft_putnum(int n)
{
	if (n >= 10)
		ft_putnum(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main()
{
	int i = 1;

	while(i <=105)
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
	write(1, "\n", 1);
}