#include <stdio.h> // Include standard input/output library

int main()
{                      // Main function
    int arr[100][100]; // Declare a 2D array of size 100x100
    int rows, cols;    // Declare variables to store number of rows and columns

    printf("\nEnter the number of rows and columns in the array:\n"); // Prompt user to enter number of rows and columns
    scanf("%d %d", &rows, &cols);                                     // Read user input for number of rows and columns

    printf("Enter elements into the 2D array:\n"); // Prompt user to enter elements
    int i, j;                                      // Declare loop variables
    for (i = 0; i < rows; i++)
    { // Loop through each row
        for (j = 0; j < cols; j++)
        {                                             // Loop through each column
            printf("Enter element [%d][%d]: ", i, j); // Prompt user to enter element
            scanf("%d", &arr[i][j]);                  // Read user input for element
        }
    }

    printf("\nDisplaying the 2D array:\n"); // Print the 2D array
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0; // Return 0 to indicate successful execution
}