//maxmin

#include<stdio.h>

void maxmin(int*,int,int*,int*);

int main()
{
	int n,arr[100],max,min;
	int *p;
	p = arr;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d",(p+i));
	}
	max = arr[0];
	min = arr[0];
	
	maxmin(arr,n,&max,&min);
	
	printf("Max = %d,Min = %d\n",max,min);
	
	return 0;
}

void maxmin(int *p,int n,int *mx,int *mn)
{
	//int max = *p;
	//int min = *p;
	for(int i = 1; i < n; i++)
	{
		if(*mx<*(p+i))
		*mx = *(p+i);
		if(*mn>*(p+i))
		*mn = *(p+i);
	}
}