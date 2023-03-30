/* Assignment name: rotone 
*  Expected files: rotone.c
*  Allowed functions: write
*  write a program that takes a string and replaces each 
of its letters one by one in alpebetical order.
ex: "abc" becomes "bca" - 'z' becomes 'a' or 'A' becomes 'Z'
outful followed  by an '\n' if arguement is not one progra displays '\n'

Example:
$> ./rotone "abc"
$? bcd
$> ./rotone "ball baakdhf  ahkhdueiu" | cat -e 
cbmm cbbleig  b... etc

$> ./rotone "" | cat -e
$
$>                        */


#include <unistd.h> //write function

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1);
		else if (*s == 'Z' || *s == 'z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s);
		s++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}