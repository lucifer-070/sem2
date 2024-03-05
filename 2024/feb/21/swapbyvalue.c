#include <stdio.h>

// Function to swap two numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Before swapping (call by value): num1 = %d, num2 = %d\n", num1, num2);

    // Call the function with values of num1 and num2
    swapByValue(num1, num2);

    printf("After swapping (call by value): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
