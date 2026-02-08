#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function 1: Check if a string is a palindrome (alphabetic characters only, case-insensitive)
int isPalindrome(const char *str) {
    char cleanStr[1000];
    int idx = 0;

    // Filter alphabetic characters and convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            cleanStr[idx++] = tolower(str[i]);
        }
    }
    cleanStr[idx] = '\0';

    // Compare characters from both ends
    for (int i = 0, j = idx - 1; i < j; i++, j--) {
        if (cleanStr[i] != cleanStr[j]) {
            return 0; // false
        }
    }
    return 1; // true
}

// Function 2: Count vowels and consonants (ignore non-alphabetic characters)
void countVowelsConsonants(const char *str, int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
    }
}

// Function 3: Find first non-repeating character
char firstNonRepeatingChar(const char *str) {
    int freq[256] = {0};

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return -1; // Special indicator
}

// Main function to demonstrate
int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline

    // Task 1: Palindrome Check
    if (isPalindrome(input)) {
        printf("Palindrome: true\n");
    } else {
        printf("Palindrome: false\n");
    }

    // Task 2: Count Vowels and Consonants
    int vowels = 0, consonants = 0;
    countVowelsConsonants(input, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);

    // Task 3: First Non-Repeating Character
    char result = firstNonRepeatingChar(input);
    if (result == -1) {
        printf("First non-repeating character: -1\n");
    } else {
        printf("First non-repeating character: '%c'\n", result);
    }

    return 0;
}
