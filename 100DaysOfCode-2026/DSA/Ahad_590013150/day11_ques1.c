#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *str) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        // Compare characters ignoring case
        if (tolower(str[left]) != tolower(str[right]))
            return false;

        left++;
        right--;
    }
    return true;
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (isPalindrome(input))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
