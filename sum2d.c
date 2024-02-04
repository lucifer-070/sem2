/*
#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2;

    // Prompt the user to enter the number of rows and columns in the array
    printf("Enter the number of rows and columns in the matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    //Prompt the user to enter the number of rows and columns in the array
    printf("Enter the number of rows and columns in the matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrix addition not allowed!\n");
    }

    else
    {

        // Declare a 2D array with the specified number of rows and columns 
        int arr1[100][100] = {0}, arr2[100][100] = {0}, sum[100][100] = {0};

        // Prompt the user to enter the elements of the array
        printf("Enter the elements of the matrix 1:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                printf("\nEnter the element at position (%d, %d) : ", i + 1, j + 1);
                scanf("%d", &arr1[i][j]);
            }
        }

        // Prompt the user to enter the elements of the matrix 2
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                printf("\nEnter the element at position (%d, %d) : ", i + 1, j + 1);
                scanf("%d", &arr2[i][j]);
            }
        }

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        // Print the elements of the array 
        printf("The Sum matrix is:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2;

    /* Prompt the user to the number of rows columns in the array */
    printf("Enter the number rows and columns in the first array: ");
    scanf("%d %d", &rows1, &cols1);

    /* Prompt the user to enter the number of rows and columns in the array */
    printf("Enter the number of rows and columns in the second array: ");
    scanf("%d %d", &rows2, &cols2);

    /* Check if the arrays can be added */
    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrix addition not allowed!\n");
    }
    else
    {
        /* Declare a 2D array with the specified number of rows and columns */
        int arr1[100][100] = {0}, arr2[100][100] = {0}, sum[100][100] = {0};

        /* Prompt the user to enter the elements of the first array */
        printf("Enter the elements of the first matrix:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                printf("\nEnter the element at position (%d, %d) : ", i + 1, j + 1);
                scanf("%d", &arr1[i][j]);
            }
        }

        /* Prompt the user to enter the elements of the second array */
        printf("Enter the elements of the second array:\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                printf("\nEnter the element at position (%d, %d) : ", i + 1, j + 1);
                scanf("%d", &arr2[i][j]);
            }
        }

        /* Add the arrays element-wise */
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        /* Print the elements of the sum array */
        printf("The Sum matrix is:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}