#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	atoi(char *str)
{
	int n = 0;
	while(*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return n;
}

#include <stdio.h>

int main(int ac, char **av)
{
	unsigned char octet;

	if (ac == 2)
	{
		octet = atoi(av[1]);
		print_bits(octet);
		printf("\n");
	}
	return 0;
}