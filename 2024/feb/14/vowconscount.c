#include <stdio.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1; // True, the character is a vowel
        default:
            return 0; // False, the character is a consonant
    }
}

int main() {
    char str[100];
    int vCount = 0, cCount = 0;

    // Get input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Insert elements into the string (if needed)

    // Count vowels and consonants
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (isVowel(str[i])) {
                vCount++;
            } else {
                cCount++;
            }
        }
    }

    // Display the counts
    printf("Total number of vowels: %d\n", vCount);
    printf("Total number of consonants: %d\n", cCount);

    return 0;
}
