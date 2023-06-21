#include <unistd.h>
 /* Expected files   : snake_to_camel.c
 * Allowed functions: malloc, free, realloc, write
 * --------------------------------------------------------------------------------
 * 
 * Write a program that takes a single string in snake_case format
 * and converts it into a string in lowerCamelCase format.
 * 
 * A snake_case string is a string where each word is in lower case, separated by
 * an underscore "_".
 * 
 * A lowerCamelCase string is a string where each word begins with a capital letter
 * except for the first one.
 * 
 * Examples:
 * $>./camel_to_snake "here_is_a_snake_case_word"
 * hereIsASnakeCaseWord
 * $>./camel_to_snake "hello_world" | cat -e
 * helloWorld$
 * $>./camel_to_snake | cat -e
 * $
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	toUpper(int c)
{
	if (c >= 'a' && c <= 'y')
		c -= 32;
	return (c);

}

void	snake_toCamel(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
		while(av[1][i])
		{
			if (av[1][i] == '_')
			{
				i++;
				ft_putchar(toUpper(av[1][i]));
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
		write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	snake_toCamel(ac, av);
	return 0;
}