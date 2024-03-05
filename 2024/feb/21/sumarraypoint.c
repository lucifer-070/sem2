//arrsumpoint
#include<stdio.h>

int main()
{
	int n,sum = 0,arr[100], *p;
	p = arr;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d",p+i);
	}
	for(int i = 0; i < n; i++)
	{
		sum = sum + *(p+i);
	}
	
	printf("The sum of the array is %d",sum);
	return 0;
}
