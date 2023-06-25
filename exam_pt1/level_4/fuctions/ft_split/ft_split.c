#include <stdlib.h>	// for malloc
#include <stdio.h> // for NULL

//copies specified number of chars from one str to another
char *strcpy_mod(char *dest, char *src, int n) //copies source to destination and n determines num of chars to be copied
{
	int i = -1; // ensures first char is copied to dest string
	while(++i < n && src[i])
		dest[i] = src[i];
	dest[i] = '\0'; // ensures new str in null term
	return (dest);
}

char	**ft_split(char *str)
{
	int i = 0, j = 0, k = 0, wc = 0; //interating thr strs and arrs and counting words

	while(str[i]) //count words - run loop while chars in str
	{
		while(str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++; //skip over consecutive spaces, tabs or newlilnes
		if(str[i])
			wc++; //if non-space char encountered increment wc
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++; // move to next char in str	
	}
	char **out = (char**)malloc(sizeof(char*)*(wc+1)); //allocate memory for new pointer out to hold arr of strns
	i = 0; // reset counter to extract words and copy into arr
	while(str[i])
	{
		while(str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++; //skip over consecutive spaces, tabs or newlilnes
		j = i; // set j to positon i which keeps track of the beginning of the word
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++; // move forward until the above char is envountered
		if(i > j) // new word was encounterd
		{
			out[k] = (char *)malloc(sizeof(char)*((i - j) + 1)); // its a single pointer becuase it's allocating memory for one str
			strcpy_mod(out[k++], &str[j], i - j); //increment k counter to move to next positon
		}
	}
	out[k] = NULL;
	return (out);
}

int	main(int ac, char **av)
{
	char **split = ft_split(av[1]);
	int i = 1;
	if(ac == 2)
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
