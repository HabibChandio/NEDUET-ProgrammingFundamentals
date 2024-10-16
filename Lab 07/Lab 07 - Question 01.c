#include <stdio.h>
int main()
{
	int size, sum = 0, count;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int nums[size];
	for(int i = 0; i < size; i++)
	{
		printf("Enter number %d: ", i+1);
		scanf("%d", &nums[i]);
		if(nums[i] > 0)
		{
			sum += nums[i];
			count++;
		}
	}
	printf("Sum = %d\nAverage = %d", sum, (sum/count));
	return 0;
}