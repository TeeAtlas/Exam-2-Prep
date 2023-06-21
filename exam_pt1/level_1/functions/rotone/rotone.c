/* Assignment name: rotone 
*  Expected files: rotone.c
*  Allowed functions: write
*  write a program that takes a string and replaces each 
of its letters one by one in alpebetical order.
ex: "abc" becomes "bcd" - 'z' becomes 'a' or 'A' becomes 'Z'
output followed  by an '\n' if argument isn't 1 program displays '\n'

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

void	rotone(char *s, int argc)
{
	if (argc == 2)
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
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	
}

int		main(int argc, char **av)
{
	char input[] = "ahelloz";
	rotone(input, argc);
	return (0);
}