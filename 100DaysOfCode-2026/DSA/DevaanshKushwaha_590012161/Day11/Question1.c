#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(const char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        if (tolower(s[left]) != tolower(s[right]))
            return 0;

        left++;
        right--;
    }
    return 1;
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
