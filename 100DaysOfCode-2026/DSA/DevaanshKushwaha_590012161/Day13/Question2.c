#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_RANGE 256

int canFormPalindrome(const char *str) {
    int freq[CHAR_RANGE] = {0};
    int i;

    // Count frequency of each character
    for (i = 0; str[i]; i++) {
        if (!isspace(str[i])) {  // Optional: ignore spaces
            freq[(unsigned char)str[i]]++;
        }
    }

    // Count characters with odd frequency
    int oddCount = 0;
    for (i = 0; i < CHAR_RANGE; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
        }
    }

    // A string can form a palindrome if oddCount <= 1
    return oddCount <= 1;
}

int main() {
    char input[1000];
    printf("Enter a string:\n");
    fgets(input, sizeof(input), stdin);

    // Remove trailing newline if exists
    input[strcspn(input, "\n")] = 0;

    if (canFormPalindrome(input)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
