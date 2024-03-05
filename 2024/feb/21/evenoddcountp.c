//evenodd
#include<stdio.h>

int main()
{
	int n,cEven = 0,cOdd = 0,arr[100], *p;
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
		if(*(p+i) % 2 == 0)
		{
			cEven++;
		}
		else
		{
			cOdd++;
		}
	}
	
	printf("The count of even numbers in the array is %d\n",cEven);
	printf("The count of odd numbers in the array is %d\n",cOdd);
	
	return 0;
}

