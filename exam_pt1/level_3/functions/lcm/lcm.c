//least common multiple
// takes two params as args: unsigned a, unsigned b
// first check if equal to zero
// if yes, returns zero
// if no proceed to find lcm
// var n is declared to interate through nums
// starting with the larger from a and b to find lcm
// 

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return 0;

	unsigned int	n;
	if (a > b)
		n = a;
	else 
		n = b;
	
	while (1) // continues until it encounters a return statement
	{
		if (n % a == 0 && n % b == 0)
			return (n); //checks if b is the common multiple of both a and b
		++n; // increases value by one and uses the new value hence: ++n
	}
}

#include <stdio.h>

int main()
{
	unsigned int num1, num2;
	printf("Enter two positive integers: ");
	scanf("%u %u", &num1, &num2);
	unsigned int res = lcm(num1, num2);
	printf("Least common multiple of %u and %u is: %u\n", num1, num2, res);
}