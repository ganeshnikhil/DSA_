#include <stdio.h>
#include <ctype.h>

int is_palindrome(const char *s) {
    int start = 0, end = 0;

    // Find the length of the string
    while (s[end] != '\0') end++;
    end--;

    while (start < end) {
        // Skip non-alphabetic characters
        while (start < end && !isalpha(s[start])) start++;
        while (start < end && !isalpha(s[end])) end--;

        // Compare lower-case versions
        if (tolower(s[start]) != tolower(s[end])) {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    if (is_palindrome(str)) {
        printf("It's a palindrome!\n");
    } else {
        printf("It's not a palindrome.\n");
    }

    return 0;
}
