#include <stdio.h>

/* The main function is the entry point of the program */
int main()
{
    int temp, num; // Declare variables to store number of elements in the array
    int arr[1000]; // Declare an array of integers with a size of 1000

    /* Prompt the user to enter the number of elements in the array */
    printf("Enter the number of elements into the array : \n");
    scanf("%d", &num);

    /* Prompt the user to enter the elements of the array */
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < num; i++) // Loop through the array
    {
        printf("\nEnter the %d element : ", i + 1); // Prompt the user to enter the current element
        scanf("%d", &arr[i]);                       // Store the user input in the current element of the array
    }

    // reversing the array
    for (int i = 0, j = num - 1; i < j; i++, j--)
    {
        temp = arr[i]; // Swap the elements at index i and j
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // printing the reversed array
    printf("The reversed array is:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]); // Print each element of the reversed array
    }

    return 0;
}