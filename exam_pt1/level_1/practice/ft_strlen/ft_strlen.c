#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{	
	char str[] = "hello";
	ft_putchar(ft_strlen(str) + '0' );
	write
	return 0;
}