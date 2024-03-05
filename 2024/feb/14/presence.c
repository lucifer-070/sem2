#include <stdio.h>
#include <string.h>

// Function to check if a character is present in a string
// If found, return the index of the first instance; otherwise, return -1
int findIndex(char str[], char target) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            return i; // Return the index of the first instance
        }
    }

    return -1; // Return -1 if not found
}

int main() {
    char str[100];
    char tC;

    // Get input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    // Get the character to check for its presence
    printf("Enter a character to check its presence: ");
    scanf(" %c", &tC);

    // Find and display the index if the character is present
    int index = findIndex(str, tC);
    if (index != -1) {
        printf("The character '%c' is present at index: %d\n", tC, index);
    } else {
        printf("The character '%c' is not present in the string.\n", tC);
    }

    return 0;
}
