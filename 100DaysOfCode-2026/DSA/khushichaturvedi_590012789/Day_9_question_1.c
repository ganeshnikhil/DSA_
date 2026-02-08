#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
char toLowerIfAlpha(char c) {
    return isalpha(c) ? tolower(c) : '\0';
}
bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        while (left < right && !isalpha(str[left])) left++;
        while (left < right && !isalpha(str[right])) right--;
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
