#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	while(str[i])
		i++;
	return (i);
}

int	main()
{
	char str[] = "what the fuck";
	printf("%d\n", ft_strlen(str));
}