// array rev

#include<stdio.h>

void swap(int*,int*,int);

int main()
{
	int n,*pStart,*pEnd;
	int arr[100];
	
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:\n");
	for(int i = 0; i<n;i++)
	{
		printf("Enter element %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	pStart = arr;
	pEnd = &arr[n-1];
	
	printf("Array before swapping:\n");
	for(int i = 0; i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");
	swap(pStart,pEnd,n);
	
	printf("Array after swapping:\n");
	for(int i = 0; i<n;i++)
	{
		printf("%d ",arr[i]);
		
	}
	
	printf("\n");
	//printf("After swapping:\n");
	
	//printf("a = %d, b = %d\n",a,b);
	
	return 0;
	
}

void swap(int *p1, int *p2,int n)
{
	int temp,i = 0,j;
	for (i = 0,j = n -1; i<j; i++,j--)
	{
		temp = *(p1+i);
		*(p1+i) = *(p2-i);
		*(p2-i) = temp;
	}
	
}