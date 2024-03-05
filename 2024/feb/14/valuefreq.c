#include <stdio.h>
#include <string.h>

// Function to find the frequency of a given character in a string
int freq(char str[], char target) {
    int frequency = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            frequency++;
        }
    }

    return frequency;
}

int main() {
    char str[100];
    char tC;

    // Get input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    // Get the character whose frequency needs to be found
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &tC);

    // Find and display the frequency
    int frequency = freq(str, tC);
    printf("The frequency of '%c' in the string is: %d\n", tC, frequency);

    return 0;
}
