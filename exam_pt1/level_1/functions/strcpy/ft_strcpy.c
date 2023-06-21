/* assignment: ft_strcpy
expected files: ft_strcpy.c
allowed functions: n/a */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char s1[] = "hello";
	char s2[] = "jello";
	printf("before: %s\n", s1);
	ft_strcpy(s1, s2);
	printf("after: %s\n", s1);
}