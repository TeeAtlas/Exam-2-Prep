/* assignment name: Repeat Alpha
expected files: repeat_alpha.c
allowed functions: write
Write a program called repeat alpha that takes a string and displays it
repeating each alphabetical charcter as many time as it's alphabetical index,
followed by a new line

'a' becomes 'a', 'b' becomes 'bb' 'e' becomes 'eeeee', etc. Case remains unchanged.
if the number of arguments is not 1, just display a newline

ex:
$> ./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

void	alpha_repeat(int ac, char *str)
{
	if (ac != 2)
		write (1, "\n", 1);
	else
		while(*str)
		{
			if(*str >= 'a' && *str <= 'z')
				ft_putchar(*str, *str + 1 - 'a');
			else if(*str >= 'A' && *str <= 'Z')
				ft_putchar(*str, *str + 1 - 'A');
			else
				write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	alpha_repeat(ac, av[1]);
	return	0;
}
