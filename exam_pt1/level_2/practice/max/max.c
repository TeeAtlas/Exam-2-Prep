#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int res = tab[0];
	if(len == 0)
		return 0;
	while(i < len)
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
	int nums[] = {12, 4500, 0, 23, 6};
	unsigned int len = sizeof(nums) / sizeof(nums[0]);
	int maximum = max(nums, len);
	printf("res: %u\n", maximum);
	return 0;
}