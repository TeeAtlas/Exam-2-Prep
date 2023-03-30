/* assignment name: Repeat Alpha
expected files: repeat_alpha.c
allowed functions: write
Write a program called repeat alpha that take sa string and displays it
repeating each alphabetical charcter as manytime as ti's alphabetical index,
followed by a new line

'a' becomes 'a', 'b' becomes 'bb' 'e' becomes 'eeeee', etc. Case remains unchanged.
if the number of arguments is not 1, just display a newline

ex:
$> ./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar_n(char c, int i)
{
	while (i > 0) // as long as it's bigger than zero
	{
		write(1, &c, 1);
			--i; //it's decrementing because it's counting back from the index value
	}
}

void	repeat_alpha(char *str)
{
	while (*str != '\0')
	{	
		//See below to understand how to determine the number of times char is printed
		if (*str >= 'a' && *str <= 'z')
			ft_putchar_n(*str, *str + 1 - 'a'); 
		
	}
}


/* ex:

--Hello-'\0'
01234557  8

ascii:
(a  ,z  )  'e' = (101 + 1) - 97, 102 - 97 = 5  therefore 'e' is printed 5x ft_putchar_n('e', 5)
(97, 122)

(A  ,Z  ) 'H' =  (72 + 1) - 65, 73 - 65 = 8, therefore 'H' must be printed 8x  ft_putchar_n("H", 8)
(65, 90 )*/

