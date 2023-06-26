#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int res = tab[0];
	if (len == 0)
		return 0;
	while(i < len)
	{	
		if(res < tab[i])
			res = tab[i];
		i++;
	}

	return res;
}

/*first determine an unsigned int counter var to manage unsigned len
then create a result var that is equal to the element in the arr
iterate through elements in loops comparing values
if value is more, store new value in result till it iterates through full 
int arr*/
#include <stdio.h>

int main()
{
	int nums[] = {13, 900, 0, 5, 45, 37};
	unsigned int len = sizeof(nums) / sizeof(nums[0]);
	int maximum = max(nums, len);
	printf("result: %u\n", maximum);
	return 0;
}