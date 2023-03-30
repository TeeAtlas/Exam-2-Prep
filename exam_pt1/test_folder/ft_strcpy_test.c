#include <stdio.h>

char	*ft_strcpy_test(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char s1[9] = "hello";
	char s2[9] = "fuck you";
	printf("before:%s\n", s1);
	ft_strcpy_test(s1, s2);
	printf("after:%s\n", s2);
}