//ascending
#include<stdio.h>

void swap(int *arr,int i, int j);
void bubbleSort(int*,int);

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
	
	bubbleSort(arr,n);
	
	printf("The  array in ascending order: \n");
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	
	return 0;
}

void swap(int *a,int i,int j)
{
	int temp = *(a+i);
	*(a+i) = *(a+j);
	*(a+j) = temp;
	
}

void bubbleSort(int *arr, int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++) 
  
        // Last i elements are already 
        // in place 
        for (j = 0; j < n - i - 1; j++) 
            if (*(arr+j) > *(arr+j + 1))
                swap(arr, j, j + 1); 
}