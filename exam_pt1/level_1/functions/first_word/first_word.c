/* write a program that takes a string and displays its first
word, followed by a newline. A word is a section of string delimited 
by spaces/tabs or by the star/end of the string. If the bymer of parameters
is not 1, or if there are no words, simply display a newline.*/

#include <unistd.h> // to use write

int main (int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2) if // check for one arg in command line
	{
		while (argv[1][i] == 32 || argv[1][i] == 9) // skip leading spaces or tabs 9 is ht horizontal tab
			i++;
		while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i]) // continues until space, tab or null
		{
			write(1, &argv[1][i], 1); // writes index i of command 1 till it reaches a space etc
			i++;
		}
	}
	write(1, "\n", 1); //when finished adds new line character to print new line
	return (0);
}