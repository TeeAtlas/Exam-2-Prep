#include <unistd.h> // require write funtion

// program takes a string and replaces each with the following letter
// in the case of a, A, Z, z it relaces with a - z etc
// make sure it follows a new line and follows with a 
// new line if the argument is not 1

// first write function to print char
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s, int ac) 
{
	if(ac == 2)
	{
	while (*s)
		{
			if ((*s >= 'a' && *s <= 'y') || (*s >='A' && *s <= 'Y'))
				ft_putchar(*s + 1);
			else if (*s == 'z' || *s == 'Z')
				ft_putchar(*s - 25);
			else
				ft_putchar(*s);
			s++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

int	main(int ac, char **ac)
{
	char input[] = "ahelloz";
	rotone(input, ac);
	return 0;
}