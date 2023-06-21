#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char *input = argv[1];
	int len	= ft_strlen(input);

	if (argc != 2)
		write(1, "\n", 1);
	else
	printf("string len: %d\n", len);
	return 0;
}