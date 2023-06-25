unsigned int	lcm(unsigned a, unsigned b)
{
	if (a == 0 || b == 0)
		return 0;
	unsigned int	n;
	if ( a > b)
		n = a;
	else 
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return n;
		else
			++n;
	}
	
}
