#include <stdio.h>  /* Include standard input/output library */

/* Function to calculate the factorial of a number using recursion */
long double fact(int num)
{
    if (num == 1 || num == 0) /* Base case: if num is 1 or 0, return 1 */
    {
        return 1;
    }
    else /* Recursive case: multiply num by the factorial of num - 1 */
    {
        return num * fact(num - 1);
    }
}

/* Function to calculate the factorial of a number using iteration */
long double simfact(int num)
{
    long double product = 1; /* Initialize product to 1 */
    for (int i = 2; i <= num; i++) /* Loop from 2 to num */
    {
        product = product * i; /* Multiply product by i */
    }
    return product; /* Return the final product */
}

int main()
{
    int n; /* Declare an integer variable to store the user input */
    long double res; /* Declare a long double variable to store the result */

    printf("Enter a number to find the factorial of:\n"); /* Prompt the user to enter a number */
    scanf("%d", &n); /* Read the user input into n */

    if (n < 200) /* If n is less than 200, calculate the factorial using recursion */
    {
        res = fact(n);
    }
    else /* Otherwise, calculate the factorial using iteration */
    {
        res = simfact(n);
    }

    printf("The factorial of %d is: %Lf\n", n, res); /* Print the result */

    return 0; /* Return 0 to indicate successful execution */
}