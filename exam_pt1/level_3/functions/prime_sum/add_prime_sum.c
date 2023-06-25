#include <unistd.h>
// first we must create atoi 

int	ft_atoi(char *str)
{
	int n = 0;
	while(*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	return n;
}

void	ft_putnum(int n)
{
	if (n >= 10)
		ft_putnum(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int is_prime(int n)
{
	int i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return 0;
		++i;
	}
	return 1;
}

int	prime_sum(int n)
{
	int sum = 0;
	int i = 2;
	
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	int n;

	if (ac == 2 && (n = ft_atoi(av[1])))
		ft_putnum(prime_sum(n));
	else
		ft_putnum(0);
	write(1, "\n", 1);
	return 0;
}

//STEPS

// first determine the number of command line args
// then declare n to store user imput converted from strin to int
// check if two command line args are provided
// then with ft_atoi try we convert av[1] to an int if it
// is a non-zero value the conditoj is true
// if true we calculate the sum with add_prime_sum and 
// print result with put_num 
// if condition is not true we print 0 and a new line
// return 0 to indicate successful completion of program

// is_prime function:
// returns int 0 or 1 indication whether it is prime or not
// initializes to 2 becuase 1 is not a prime 
// and check if 'n' is divisable by anthing between 2 and (n - 1)
// if remainder is zero it means it is even divisable by 1 = thus not a prime
// i++; next num
// if it finished loop without being divisable by any num other than itself
// and 1 it's a prime, baby!
