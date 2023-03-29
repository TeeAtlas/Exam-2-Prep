/* write a function that returns the lenght of the string*/

#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(void)
{
	char str[12] = "hello world";
	printf("%d\n", ft_strlen(str));
}