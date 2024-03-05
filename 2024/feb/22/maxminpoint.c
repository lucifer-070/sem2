//minmax

#include<stdio.h>

void swap(int*,int*,int*,int);

int main()
{
	int n,*pStart,*pEnd,*pMax,*pMin;
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
	pMax = pStart;
	pMin = pStart;

	printf("\n");
	swap(pStart,pMax,pMin,n);
	
	printf("MAX element = %d\nMin element = %d\n",*pMax,*pMin);

	//printf("After swapping:\n");
	
	//printf("a = %d, b = %d\n",a,b);
	
	return 0;
	
}

void swap(int *p,int *pMax,int *pMin,int n)
{
	int i = 0;
	for (i = 0; i<n; i++)
	{
		if(*(p+i)>*pMax)
		{
		*pMax = *(p+i);
		}
		if(*(p+i)<*pMin)
		{
		*pMin = *(p+i);
		printf("pMin = %d\n",*pMin);
		}
	}
	
}