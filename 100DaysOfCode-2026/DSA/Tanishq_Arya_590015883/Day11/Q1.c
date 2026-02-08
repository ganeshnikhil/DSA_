#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isAlphanumeric(char ch) {
    return isalnum((unsigned char)ch);
}

bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
       
        while (left < right && !isAlphanumeric(str[left])) {
            left++;
        }

        while (left < right && !isAlphanumeric(str[right])) {
            right--;
        }

        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
