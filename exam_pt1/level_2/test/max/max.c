#include <unistd.h>

// index to determine location of nums in tab arr
// set result as tab[] location
// 
int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int res = tab[0];
	if(len == 0)
		return 0;
	while(i<len)
	{
		if(res < tab[i])
			res = tab[i];
		i++;
	}
	return res;
}

#include <stdio.h>
int main()
{
	int arr[] = {1, 3, 67, 900, 4000, 0, 50};
	unsigned int len = sizeof(arr) / sizeof(arr[0]);
	int maximum = max(arr, len);
	printf("res:%u\n", maximum);
	return 0;
}