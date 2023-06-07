#include <unistd.h>


// function replaces each character in string with the following char
// in alphabet

//first write putchar function to print char
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// similar to repeat alpha we use ascii to determin following char
// must handle a, z, A, Z 
void rotone(char *s)
{
	while(*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1); // + 1 to move to next char
		else if ((*s == 'Z')|| (*s == 'z'))
			ft_putchar(*s - 25); // or - 25 = A, a
		else 
			ft_putchar(*s);
		++s;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}