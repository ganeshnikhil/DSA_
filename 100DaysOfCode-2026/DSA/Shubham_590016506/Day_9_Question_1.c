#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        while (left < right && !isalpha(s[left])) left++;
        while (left < right && !isalpha(s[right])) right--;
        if (tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    const char *test = "Madam";
    printf("%s\n", isPalindrome(test) ? "true" : "false");
    return 0;
}