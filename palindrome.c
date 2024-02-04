#include<stdio.h>

/*
 * This function checks if a given integer is a palindrome number. * It does this by reversing the input number and comparing it to the original number.
 * If the reversed number is equal to the original number, then the number is a palindrome.
 *
 * Parameters:
 *   n: the integer to check
 *
 * Returns:
 *   1 if the number is a palindrome, 0 otherwise
 */
int isPalindrome(int n)
{
    int check = n;
    int rev = 0, rem;
    while (check != 0)
    {
        rem = check % 10;
        rev = rev*10 + rem;
        check = check / 10;
    }
    if (rev == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*
 * This function counts the number of palindrome numbers in an array of integers.
 * It does this by looping through the array and checking each element to see if it is a palindrome number.
 * If it is, it increments a counter.
 *
 * Parameters:
 *   num: the number of elements in the array
 *   arr: the array of integers
 *
 * Returns:
 *   None
 */
int main()
{
    int num, count = 0;  // Declare variables to store the number of elements in the array and a counter for palindrome numbers
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
        if (isPalindrome(arr[i]) == 1)  // Check if the current element is palindrome
        {
            count++;  // If it is, increment the counter
        }
    }

    printf("\nThe total number of palindrome numbers is: %d\n",count);  // Print the total number of palindrome numbers found

    return 0;
}