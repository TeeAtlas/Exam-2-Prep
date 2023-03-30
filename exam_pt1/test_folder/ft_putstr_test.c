#include <unistd.h>

void	ft_putstr_test(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int main()
{
	char str[] = "hello and fuck you";
	ft_putstr_test(str);
}