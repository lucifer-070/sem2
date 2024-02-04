// Program to check if each element  in the array is prime or not

#include<stdio.h>

// Function to check if a number is prime
int isPrime(int n)
{
    int check = 0;  // Initialize a counter variable to check for divisors
    for(int i = 2; i < n/2; i++)  // Loop from 2 to n/2
    {
        if(n%2==0)  // If n is divisible by 2
        {
            check++;  // Increment the counter
            break;   // Exit the loop
        }
    }
    if(check!=0)  // If any divisors were found
    {
        return 0;  // Return 0 (false)
    }
    else
    {
        return 1;  // Otherwise, return 1 (true)
    }
}

int main()
{
    int num, count = 0;  // Declare variables to store the number of elements in the array and a counter for prime numbers
    int arr[1000];  // Declare an array of integers with a size of 1000

    printf("Enter the number of elements int the array : \n");  // Prompt the user to enter the number of elements in the array
    scanf("%d",&num);

    printf("Enter the elements of the array:\n");  // Prompt the user to enter the elements of the array
    for(int i = 0; i<num; i++)  // Loop through the array
    {
        printf("\nEnter the %d element : ",i+1);  // Prompt the user to enter the current element
        scanf("%d",&arr[i]);  // Store the user input in the current element of the array
    }

    for(int i = 0; i<num; i++)  // Loop through the array again
    {
        if (isPrime(arr[i]) == 1)  // Check if the current element is prime
        {
            count++;  // If it is, increment the counter
        }
    }

    printf("\nThe total number of prime numbers is: %d\n",count);  // Print the total number of prime numbers found

    return 0;
}