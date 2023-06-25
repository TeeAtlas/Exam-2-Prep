#include <unistd.h>

// void	print_bits(unsigned char octet)
// {
// 	int i = 7; // bit are an octet from 0 - 8

// 	while(i >= 0)
// 	{
// 		if (octet & (1 << i))
// 			write(1, "1", 1);
// 		else
// 			write(1, "0", 1);
// 		i--;
// 	}
// }

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

int main (int argc, char **argv)
{
    unsigned char octet;

    if (argc == 2) 

    octet = atoi(argv[1]);
    print_bits(octet);
    printf("\n");

    return 0;

}