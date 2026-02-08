#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char* str) {
    char cleaned[1000];
    int j = 0;

    // Clean the string: keep only alphabetic and convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    // Check palindrome
    int start = 0, end = j - 1;
    while (start < end) {
        if (cleaned[start++] != cleaned[end--])
            return false;
    }
    return true;
}

int main() {
    printf("%s\n", isPalindrome("racecar") ? "true" : "false");
    printf("%s\n", isPalindrome("hello") ? "true" : "false");
    printf("%s\n", isPalindrome("Madam") ? "true" : "false");
    return 0;
}
