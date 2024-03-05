//rev

#include<stdio.h>

void rev(int*,int);
int main()
{
	int n,arr[100];
	int *p;
	p = arr;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d",(p+i));
	}
	
	rev(arr,n);
	
	printf("The  array in reverse order: \n");
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	
	return 0;
}

void rev(int* p,int n)
{
	int temp,i = 0,j;
	for(i = 0, j = n -1; i < j; i++,j--)
	{
		 temp = *(p+i);
		 *(p+i) = *(p+j);
		 *(p+j) = temp;\
	}
}
