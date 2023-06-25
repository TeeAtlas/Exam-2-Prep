#include <stdlib.h> //for malloc
#include <stdio.h> //printf and NULL

// first you have to define a new version of strncpy_mod
char	*strncpy_mod(char *dst, char *src, int n)
{
	int i = -1; //minus 1 because we want to include all chars in string
	while(++i < n && src[i]) //while char idex is less than count and a char in src str
		dst[i] = src[i];
	dst[i] = '\0';
	return dst;
}

char	**ft_split(char *str)
{
	int i = 0, j = 0, k = 0, wc = 0;
	while(str[i]) //counts words = loop runs while chars in str
	{
		while(str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++; //skip non chars
		if (str[i]) // when non char encountered word count increases one
			wc++;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++; //move to next non char in str intil '\0'
	}
	char **out = (char **)malloc(sizeof(char*)*(wc + 1)); //mem for new pointer holdint arr of strings
	i = 0; // reset i
	while(str[i])
	{
		while(str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++; //skip non chars
		j = i; //set j pos to i to keep track of beginning of new word in str
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++; //iterate will non char is encountered
		if(i > j) // means new word
		{
			out[k] = (char*)malloc(sizeof(char)*((i - j) + 1)); //allocating mem for new word str
			strncpy_mod(out[k++], &str[j], i - j); //k counter moves to next position
		}
	}
	out[k] = NULL;
	return (out);
}

int main(int ac, char **av)
{
	char **split = ft_split(av[1]);
	int i = 1;
	if (ac == 2)
	{
		printf("%s\n", split[0]);
		while(split[i] != NULL)
		{
			printf("%s\n", split[i]);
			i++;
		}
	}
	return 0;
}