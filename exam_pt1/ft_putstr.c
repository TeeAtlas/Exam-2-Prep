/* write a function that displays a str on the standard output
The pointer passed to the fuction contains the address of the string's
first character.*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main()
{
	char str[] = "hello and fuck you\n";
	ft_putstr(str);
}