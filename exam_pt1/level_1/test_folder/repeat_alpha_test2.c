# include <unistd.h>

// repeat each character in string according to index in alphabet

// function to print char
// decrement index becuase we decrement back through string
void	ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

// function passes string and used ascii to determine 
// index in alphabet
void	repeat_alpha(char *str)
{
	while (*str >= 'a' && *str <= 'z')
	{
		ft_putchar(*str, *str + 1 - 'a');
		str++;
	}
}

int	main()
{
	char input[] = "hello";
	repeat_alpha(input);
	return 0;
}
